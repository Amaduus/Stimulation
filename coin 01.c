#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//int a[500] = { 5, 1, 4 };
	int coin=0,day=0;
	int max;
	scanf("%d", &day);
	int i=1;
	while (day > 0)
	{
		if (day >= i)
		{
			coin += i * i; day -= i;
			i++;
		}
		if (day < i&&day>0)
		{
			
			coin = day * i;

		}
	}
	printf("%d", coin);
	return 0;
}