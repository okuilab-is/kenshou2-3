#include <stdio.h>

int main(){
  int n,i;
  double k,a,max;
  int F=0;
  scanf("%d %lf",&n,&k);
  for(i=0;i<n;i++){
    scanf("%lf",&a);
    if(k>=a){
      if(F=0){
        max=a;
        F=1;
      }else if(max<=a){
        max=a;
      }  
    }  
  }
  printf("%lf\n",max);
}
