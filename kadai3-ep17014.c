#include<stdio.h>
int main(void){
  int n,i,minmax=0;
  float k,ans,num[128],nummin[128];
  scanf("%d %f",&n,&k);
  for(i=0;i<n;i++){
    scanf("%f",&num[i]);
    if(num[i]<=k){
      nummin[minmax]=num[i];
      minmax++;
    }
  }
  ans=nummin[0];
  for(i=0;i<minmax;i++){
    if(ans<nummin[i])ans=nummin[i];
  }
  printf("%f\n",ans);
  return 0;
}
