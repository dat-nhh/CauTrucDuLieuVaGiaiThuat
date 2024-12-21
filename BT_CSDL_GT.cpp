/*Ho ten: Nguyen Hoai Huy Dat
  MSSV: 63133655
  Lop: 63.CNTT-1
  Code: C */
#include<stdio.h>
void nhapds(int a[],int n)
{
	int i=0;
	printf("\n Nhap danh sach: \n");
	do
	{
		printf("Phan tu %d: ",i);
		scanf("%d",&a[i]);
		i++;
	}while(i<n);
}
void xuatds(int a[],int n)
{
	printf("\n Danh sach:");
	int i=0;
	do
	{
		printf("\nPhan tu %d: %d",i,a[i]);
		i++;
	}while(i<n);
}
int tim(int a[],int n,int x)
{
	int i=0;
	do
	{
		if(a[i]==x) return i ;
		i++;
	}while(i<n);
	return 0;
}
void chen(int a[],int n)
{
	int x,y;
	printf("\nNhap gia tri can chen: ");scanf("%d",&y);
	printf("Nhap vi tri can chen: ");scanf("%d",&x);
	int i=n;
	do
	{
		a[i]=a[i-1];
		i--;
	}
	while(i>x);
	a[x]=y;
	n++;
	xuatds(a,n);
}
void xoa(int a[],int n)
{
	int x;
	printf("\n\nNhap vi tri can xoa: ");scanf("%d",&x);
	int i=x;
	do
	{
		a[i]=a[i+1];
		i++;
	}
	while(i<n-1);
	n--;
}
void hv(int &x, int &y)
{
	int t=x; 
	x=y;
	y=t;
}
void tang(int a[], int n)
{
	printf("\n\n	Sap xep tang dan");
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
			if(a[i] > a[j]) hv(a[i],a[j]);
	}
	xuatds(a,n);
}
void giam(int a[], int n)
{
	printf("\n\n	Sap xep giam dan");
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
			if(a[i] < a[j]) hv(a[i],a[j]);
	}
	xuatds(a,n);
}
int main()
{
	int n,x;
	printf("Nhap n: "); scanf("%d",&n);
	int a[100];
	nhapds(a,n);
	xuatds(a,n);
	printf("\n\nNhap gia tri x can tim trong danh sach: "); 
	scanf("%d",&x);
	if(tim(a,n,x)!=0) printf("Gia tri x=%d can tim nam o phan tu %d\n",x,tim(a,n,x));
	else printf("Gia tri x=%d can tim khong co trong danh sach\n",x);
	chen(a,n);
	xoa(a,n); xuatds(a,n);
	tang(a,n);
	giam(a,n);
	return 0;
}
