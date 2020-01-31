#include<stdio.h>
int main(void){
  int n,i,l=0;
  float k,ans,num[128],nummin[128];
  scanf("%d %f",&n,&k);
  for(i=0;i<n;i++){
    scanf("%f",&num[i]);
    if(num[i]<=k){
      ans=num[i];
      nummin[l]=num[i];
      l++;
    }
  }
  for(i=0;i<l;i++){
    if(ans<nummin[i]){
      ans=nummin[i];
    }
  }
  printf("%f\n",ans);
  return 0;
}
