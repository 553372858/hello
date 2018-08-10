#include <stdio.h>



int max(int a, int b)
{
	return a>b?a:b;
}
int main(int argc, const char *argv[])
{
	int a = 1;
	int b = 2;
	max(a, b);
	return 0;
}
