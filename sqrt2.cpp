#include<stdio.h>
#include<math.h>

int n;

float s(int n,int k)
{
	if(k==n) return sqrt(n);
	else return sqrt(k+s(n,k+1));
}

int main()
{
	int k=1;
	printf("n=");
	scanf("%d",&n);
	printf("s(%d)=%.3f",n,s(n,k));
	return 0;
}
