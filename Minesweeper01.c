#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 110

char form[N][N];
int dx[] = { -1,0,1,0,-1,-1,1,1 }, dy[] = { 0,1,0,-1,-1,1,1,-1 };
int main()

{
	int m, n;
	int k = 0,num=1;
	scanf("%d %d", &m, &n);
	for (int i = 1; i <=m; i++)
	{
			scanf("%s", &form[i]);
	}
	for (int i = 1; i <= m; i++)
	{
		for (int j = 0; j <n; j++)
		{
			if (form[i][j] != '*')  form[i][j] = '0';
		}
	}
	//for (int i = 1; i <= m; i++)
	//{
	//	for (int j = 0; j < n; j++)
	//	{
	//		if (form[i][j] == '*')			printf("%c", form[i][j]);
	//		else  printf("%c", form[i][j]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	for (int i = 1; i <= m; i++)
	{
		for (int j = 0; j <n; j++)
		{
			if (form[i][j] == '0')
			{
				//计算[i,j]雷区雷的个数
				for (k = 0; k < 8; k++)
				{
					int a = i + dx[k];
					int b = j + dy[k];
					if (a >= 1 && a <= m&& b >= 0 && b <n && form[a][b] == '*') //合法区域
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
     return 0;
}