#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int Length(char* arr)
{
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return i;
}
void print(char* a, int j)
{
	if (j == 0) { putchar(a[j]); return; }
	for (int i = 0; i < j; i++)
	{
		if (a[j] == a[i]) return;

	}
	putchar(a[j]);
}
int main()
{
	char arr1[80], arr2[80], arr3[80];
	scanf("%s%s", arr1, arr2);
	int L1 = Length(arr1);
	int L2 = Length(arr2);
	int j = 0, k = 0;
	for (int i = 0; i < L1; i++)
	{
		arr1[i] = toupper(arr1[i]);
	}
	for (int i = 0; i < L2; i++)
	{
		arr2[i] = toupper(arr2[i]);
	}
	for (int i = 0; i < L1; i++)
	{
		if (arr1[i] != arr2[j])
		{
			if (arr1[i] >= 'A' && arr1[i] <= 'Z')
			{
				print(arr1, i);
			}
			else {
				print(arr1, i);
			}

		}
		else	j++;
	}

	return 0;
}