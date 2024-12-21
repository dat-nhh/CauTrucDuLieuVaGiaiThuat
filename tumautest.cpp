#include<stdio.h>
#include<math.h>
float tinh(float x, float y)
{
	float a=x/y;
	return ceil(a);
}
int main()
{
	float x,y;
	printf("Nhap tu va mau: ");
	scanf("%d%d",&x,&y);
	printf("%.3f",tinh(x,y));
	return 0;
}
