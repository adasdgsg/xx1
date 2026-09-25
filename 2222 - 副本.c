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
		return 	a * b;
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
	scanf_s("%lf %lf %d", &A, &B,&n);
	printf("%lf\n", AAA[n - 1](A,B));
	return 0;

}
