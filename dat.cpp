#include <stdio.h>

int main(int argc, char *argv[]) {
if (argc == 3) 
{
	rename(argv[2],argv[3]);
}
else printf("ngu");
return 0;}
