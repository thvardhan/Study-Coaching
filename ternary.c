#include <stdio.h>

int main() {
  int a,b;
  printf("Enter a number to see its magnitude\n");
  scanf("%d",&a);

  b = a<0 ? (-1*a) : (a);

  // if(a<0){
  //   b=-1*a;
  // }
  // else{
  //   b=a;
  // }

  printf("%d\n",b);

  return 0;
}

/*
a == 0 check if a is equal to zero
a != 0 check if a is not equal to zero
a >= 0 check if a is greater than or equal to zero
a <= 0
&& - and
|| - or
|
&
*/
