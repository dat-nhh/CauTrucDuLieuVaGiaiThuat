#include <stdio.h>
#define For(i,a,b) for(i=a;i<=b;i++)

int a[20][20];
//khai bao kieu du lieu file
FILE *fi;
int sd,sc;//so dong, so cot
int i,j;

int main()
{
	fi=fopen("C:\\Users\\LEGION\\Documents\\m.inp","r");//mo file de doc
	if(fi==NULL) printf("u r failure");
	else
	{
		fscanf(fi,"%d",&sd);
		fscanf(fi,"%d",&sc);
		For(i,1,sd)
			For(j,1,sc)
				fscanf(fi,"%d",&a[i][j]);
	//hien thi mang doc duoc
		For(i,1,sd)
		{
			For(j,1,sc)
				printf("%3d",a[i][j]);
				printf("\n");
		}
		fclose(fi);
	}
	return 0;
}
