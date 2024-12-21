#include<stdio.h>
void insert_sort(int a[], int n)
{
	int j,x;
	for(int i=2;i<=n;i++)
	{a[0]=a[i]; //a[o] la phan tu linh canh
	j=i;
	x=a[i];
		if(x<a[j])
		{	a[j+1]=a[j];
			j-=1;
		}
	a[j+1]=x;
	}
}
int main()
{
	int a[100],n;
	printf(" n= "); scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		printf("\n a[%d]= ",i); scanf("%d",&a[i]);
	}
	insert_sort(a,n);
	for(int i=1;i<n;i++)
	{
		printf("\n a[%d]= %d",i,a[i]);
	}
}
