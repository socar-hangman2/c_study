#include <stdio.h>

int main(){
  int i = 0, sum = 0, mutiply = 1;
  
  printf("\nwhile문을 이용하여 0~5까지 출력\n");
  
  while(i < 5){
    i++;
    sum += i;
    mutiply *= i;
  }
  printf("sum= %d, mutiply = %d", sum, mutiply);
}