#include<stdio.h>
int main()
{
	float a=213.493131293019;
	int b=a*10;
	if(b%10>=5) b=b/10+1;
	else b=b/10;
	printf("%d",b);
	return 0;
}
