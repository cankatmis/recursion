#include <iostream>

//head recursion
void HeadRecursion(int n)
{
	if (n > 0)
	{
		HeadRecursion(n - 1);
		printf("%d ", n);
	}
}

//tail recursion
void TailRecursion(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		TailRecursion(n - 1);
	}
}

//tree recursion
void TreeRecursion(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		TreeRecursion(n - 1);
		TreeRecursion(n - 1);
	}
}

//indirect recursion
void IndirectRecursion1(int n);
void IndirectRecursion2(int n)
{
	if (n > 0)
	{
		printf("%d ", n);
		IndirectRecursion1(n - 1);
	}
}
void IndirectRecursion1(int n)
{
	if (n > 1)
	{
		printf("%d ", n);
		IndirectRecursion2(n / 2);
	}
}

//nested recursion
int NestedRecursion(int n)
{
	if (n > 100)
		return n - 10;
	return NestedRecursion(NestedRecursion(n + 11));
}

//sum of n natural numbers
int Sum(int n)
{
	if (n == 0)
		return 0;
	return Sum(n - 1) + n;
}

//factorial
int Factorial(int n)
{
	if (n == 0)
		return 1;
	return Factorial(n - 1) * n;
}

//power
int Power(int m, int n)
{
	if (n == 0)
		return 1;
	return Power(m, n - 1) * m;
}
int PowerBetter(int m, int n)
{
	if (n == 0)
		return 1;
	if (n % 2 == 0)
		return PowerBetter(m * m, n / 2);
	return m * PowerBetter(m * m, (n - 1) / 2);
}

//taylor series for e
double e(int x, int n)
{
	static double p = 1, f = 1;
	double r;

	if (n == 0)
		return 1;
	r = e(x, n - 1);
	p = p * x;
	f = f * n;
	return r + p / f;
}

//horner's rule
double e1(int x, int n)
{
	static double s;
	if (n == 0)
		return s;
	s = 1 + x * s / n;
	return e1(x, n - 1);

}

//fibonacci
int fibonacci(int n)
{
	if (n <= 1)return n;
	return fibonacci(n - 2) + fibonacci(n - 1);
}

//ncr
int nCr(int n, int r)
{
	int num, den;

	num = Factorial(n);
	den = Factorial(r) * Factorial(n - r);

	return num / den;
}
int NCR(int n, int r)
{
	if (n == r || r == 0)
		return 1;
	return NCR(n - 1, r - 1) + NCR(n - 1, r);
}

//tower of hanoi
void TOH(int n, int A, int B, int C)
{
	if (n > 0)
	{
		TOH(n - 1, A, C, B);
		printf("(%d,%d)\n", A, C);
		TOH(n - 1, B, A, C);
	}
}

int main()
{
	TOH(4, 1, 2, 3);

	return 0;
}

