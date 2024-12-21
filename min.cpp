#include<stdio.h>

int a[]={17,3,2,96,31,55};
int kt=sizeof(a)/sizeof(a[0]);
int n;

int min(int a[], int n)
{
	if(n==0) return a[0];
	else
	{
		if(a[n-1]<min(a,n-1)) return a[n-1];
		else return min(a,n-1);
	}
}
 int main()
 {
 	n=kt-1;
	printf("%d",min(a,n));
	return 0;
 }
