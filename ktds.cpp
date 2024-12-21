#include <stdio.h>


int reverse_num(int n){ 
  int reverse = 0; 
  while (n > 0) {
    reverse = reverse * 10 + n % 10;
    n /= 10;
  }
  return reverse;
}


int symmetrical_num(int n){ 


  int flag =0;
  if (reverse_num(n) == n) flag = 1;
  return flag;
}

int main(void){
    int n;
 
    printf(">> Nhap so tu nhien= ");
    scanf("%d",&n);

    int check = symmetrical_num(n);
 
    if( check == 1 ) printf("%d la so doi xung\n", n);
    else printf("%d khong phai la so doi xung\n", n);
    return 0;
}

