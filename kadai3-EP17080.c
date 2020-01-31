#include<stdio.h>
int main(void){
  double n,k,x,y;
  int i;
  scanf("%lf",&n);
  scanf("%lf",&k);
  y=k-10000;
  for(i=0;i<n;i++){
    scanf("%lf",&x);
    if(k >= x){
      if(y<x){
        y=x;
      }
    }
  }
  printf("%f\n",y);
  return 0;
}
