#include <stdio.h>

int main(){
  int i = 0, sum = 0;
  
  printf("\nwhile문을 이용하여 0~9까지 출력\n");
  
  while(i < 10){
    printf("%d\n", i);
    sum += i;
    printf("%d", sum);
  }
}