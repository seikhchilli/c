#include<stdio.h>
int factor(int a)
{
	int fac;
	int quotient;
	if(a != 1)
	{
	for (fac = 2; fac <= a; fac++)
	{
		if ((a % fac == 0) && a != 1)
		{
			printf("%d\n", fac);
			quotient = a/fac;
			break;
		}
		else
		{
			continue;
		}
	}
	factor(quotient);
}
else
{
	return 1;
}
}
int main()
{
	int n;
	printf("Please enter the number\n");
	scanf("%d", &n);
	factor(n);

}
