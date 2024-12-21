#include<stdio.h>

int a[]={17,3,20,96,31,55};
int kt=sizeof(a)/sizeof(a[0]);
int n;

int tc(int a[],int n)//n la chi so phan tu cuoi cung
{
	if(n<=0) return 0;
	else
	{
		if(a[n]%2==0) return a[n]+tc(a,n-1);
		else return tc(a,n-1);
	}
}

int main()
{
	n=kt-1;
	printf("tc=%d",tc(a,n));
	return 0;
}
