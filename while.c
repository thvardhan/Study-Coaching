#include <stdio.h>

int main() {
  int i;
  int n;
  int k;
  printf("Enter how many times you want to see prints\n");
  scanf("%d",&n);
  printf("Where?\n");
  scanf("%d",&k);

  for(i=k+1;i<=n;i++){

    if(i%2==0){
      continue;
    }


    printf("START %d\n",i);

  }

  //
  // for (i = 50; i > 0; i--) {
  //   printf("%d\n",i);
  // }


  return 0;
}
