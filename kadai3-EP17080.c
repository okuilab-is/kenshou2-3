#include<stdio.h>
int main(void){
  double n,k,x,y;
  int i,j;
  scanf("%lf",&n);
  scanf("%lf",&k);
  j=0;
  for(i=0;i<n;i++){
    scanf("%lf",&x);
    if(k >= x){
      if(j=0){  
        y=x;
        j++;
      }
      if(y<x){
        y=x;
      }
    }
  }
  printf("%f\n",y);
  return 0;
}
