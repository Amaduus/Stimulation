#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int coin=0,day=0,up=1,q=1;
	scanf("%d", &day);
	for(int i=0;i<day;i++)
	{ 
		coin += up;
		q--;
		if (q == 0)
		{
			up++; q = up;
		}
	}
	printf("%d", coin);
	return 0;
}