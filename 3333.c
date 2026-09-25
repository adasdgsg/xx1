#include<stdio.h>
double jia(double a, double b)
{
return 	a + b;
}
double jian(double a, double b)
{
	return 	a - b;
}
double chen(double a, double b)
{
	return 	a * b;
}
double chu(double a, double b)
{
	if (a!=0&&b!=0)
	{
		return 	a / b;
	}
	else
	{
		printf("0");
	}
}
double(*AAA[4])(double, double) = {jia ,jian ,chen,chu};

int main()
{
	double A;
	double B;
	int n=1;
	int i;
	int X=0;
	scanf_s("%d", &X);
	switch(X)
	{
	case(1):
		for (i = 0;i = 11111;i++)
		{
			scanf_s("%lf %lf %d %d", &A, &B, &n, &i);
			printf("%lf\n", AAA[n - 1](A, B));
			if (i == 333)
			{
				break;
			}

		}
	case(2):
		printf("½áÊø");

	}
	
	return 0;

}
