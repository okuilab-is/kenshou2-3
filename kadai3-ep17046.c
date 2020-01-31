#include<stdio.h>

int main(void){
 int n,i,f=0;
 float k,l,min=0;
 scanf("%d%f",&n,&k);
 for(i=0;i<n;i++){
  scanf("%f",&l);
  if(l<=k){
   if(f==0){
    min=l;
    f=1;
   }else if(l>min){
    min=l;
   }
  }
 }
 printf("%f\n",min);
}
