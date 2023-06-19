#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void loveyou(int n)
{
	int i = 1;
	while (i <= n)
	{
		i++;
		printf("I Love You %d\n", i);
	}
	printf("I Love You  MoreThan %d\n", n);

}
int main()
{
	loveyou(3000);
	return 0;
}