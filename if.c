#include <stdio.h>

int main() {
  int a;
  printf("Enter a number to see its magnitude\n");
  scanf("%d",&a);

  if(a>0){
    //do something if a is greater than 0
    printf("a is greater than 0\n");
  }
  else
  if(a<0){
    //do something if a is less than 0
    printf("a is less than 0\n");
  }
  else{
    //do something if a is equal to 0
    printf("a is equal to zero\n");
  }

  return 0;
}

/*
a == 0 check if a is equal to zero
a != 0 check if a is not equal to zero
a >= 0 check if a is greater than or equal to zero
a <= 0
&&
||
|
&
*/
