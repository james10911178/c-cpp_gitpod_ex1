#include<stdio.h>
int main()
{
	int i, j = 0,k;
	int a[10];
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
    }
	for (i = 0; i < 10; i++)
	{
		j = j + a[i];
	}
	k = j / 10;

printf("平均=%d\n",k);
return 0;
}