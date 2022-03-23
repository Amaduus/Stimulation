#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()

{
	int m, n;
	int k = 0,num=0;
	scanf("%d %d", &m, &n);
	while (m!=0 || n!= 0) {
		char form[110][110];
		int dx[] = { -1,0,1,0,-1,-1,1,1 }, dy[] = { 0,1,0,-1,-1,1,1,-1 };
		memset(form, 0, sizeof(form));
		for (int i = 1; i <= m; i++)
		{
			scanf("%s", form[i]);
		}
		num++;
		printf("Field #%d:\n", num);//此处只有一个空格
		for (int i = 1; i <= m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (form[i][j] != '*')  form[i][j] = '0'; //memset(form, 0, sizeof(form));
			}
		}
		for (int i = 1; i <= m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (form[i][j] == '0')
				{
					//计算[i,j]雷区雷的个数
					for (k = 0; k < 8; k++)
					{
						int a = i + dx[k];
						int b = j + dy[k];
						if (a >= 1 && a <= m && b >= 0 && b < n && form[a][b] == '*') //合法区域
							form[i][j]++;
					}
				}
			}
		}
		for (int i = 1; i <= m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (form[i][j] == '*')			printf("%c", form[i][j]);
				else printf("%c", form[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		scanf("%d%d", &m, &n);
	}
     return 0;
}