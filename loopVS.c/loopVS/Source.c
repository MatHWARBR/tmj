#include <stdio.h>
int main1()
{
	int i = 0;
	int M1[10];
	for (i=0;i < 10; i++)
	{
		M1[i] = i;
		printf("M1[%d]=%d\n", i, M1[i]);
		++i;
	}
}
int main()
{
	int i = 0;
	int M1[10];
	while (i < 10)
	{
		M1[i] = i;
		printf("M1[%d]=%d\n", i, M1[i]);
		++i;
	}
	return 0;
}