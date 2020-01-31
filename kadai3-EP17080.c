#include<stdio.h>
int main(void){
  double n,k,x,y;
  int i;
  scanf("%d",&n);
  scanf("%d",&k);
  y=k;
  for(i=1;i<n;i++){
    scanf("%d",&x);
    if(k >= x){
      if(i=1){
        y=x;
      }
      if(y<x){
        y=x;
      }
    }
  }
  printf("%d",y);
  return 0;
}
