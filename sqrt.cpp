#include<stdio.h>
#include<math.h>

int n;

float s(int n)
{
	if(n==0) return 0;
	else return sqrt(2+s(n-1));
}

int main()
{
	printf("n=");
	scanf("%d",&n);
	printf("s(%d)=%.3f",n,s(n));
	return 0;
}
