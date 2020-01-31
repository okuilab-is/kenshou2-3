#include<stdio.h>
int main(void){
  int n,i,l=0;
  float ans,num[128],nummin[128];
  scanf("%d %f",&n,&ans);
  for(i=0;i<n;i++){
    scanf("%f",&num[i]);
    if(num[i]<=k){
      nummin[l]=num[i];
      l++;
    }
  }
  for(i=0;i<l;i++){
    if(ans>nummin[i]){
      ans=nummin[i];
    }
  }
  
}
