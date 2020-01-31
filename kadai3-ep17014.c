#include<stdio.h>
int main(void){
  int n,i,j=0;
  float k,num[128],numb[128];
  scanf("%d %f",&n,&k);
  for(i=0;i<n;i++){
    scanf("%f",&num[i]);
    if(num[i]<=k){
      numb[j]=num[i];
      j++
    }
  }
  
}
