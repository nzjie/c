#include <stdio.h>

change(int p){

 p = 20;

}

int main(void){
 
  int i = 100;
  change(i);
  printf("%d\n",i);
  return 0;

}
