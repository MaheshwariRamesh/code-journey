#include<stdio.h>
int main(){
  long long int a;
  scanf("%Ld",&a);
  if(a<0)
  printf("Negative\n");
  else if(a>0)
  printf("Positive\n");
  else if(a==0)
  printf("Zero\n");
  return 0;
}
  
