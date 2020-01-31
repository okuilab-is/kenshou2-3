#include<stdio.h>
int main(void){
  double n,k,x,y;
  int i;
  scanf("%lf",&n);
  scanf("%lf",&k);
  y=k;
  for(i=1;i<n;i++){
    scanf("%lf",&x);
    if(k >= x){
      if(i=1){
        y=x;
      }
      if(y<x){
        y=x;
      }
    }
  }
  printf("%f",y);
  return 0;
}
