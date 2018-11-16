#include <stdio.h>

int main() {
  int n;
  printf("Enter the int to see its digits\n");
  // scanf("%d",&n);
  n = 0;

  do{
    printf("%d\n",n%10);
    n/=10;
  } while (n>0);

  return 0;
}
