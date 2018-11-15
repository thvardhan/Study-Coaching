#include <stdio.h>

int main(){

  int n;
  int i;
  // int divisor = 1;
  int flag = 0;
  printf("Enter the number you want to check for prime\n");
  scanf("%d",&n);

  for(i=2;i<n;i++){

    if(n%i==0){
      printf("for %d we can find divisor as %d hence not prime\n",n,i);
      // divisor=i;
      flag=1;
      break;
      //not prime
    }
  }

  if(flag == 0){
  printf("%d is a prime number\n",n);
  }

  return 0;
}
