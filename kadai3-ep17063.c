#include<stdio.h>

int main(){
  int i,n;
  double k,val1,min;

  scanf("%d %lf",&n,&k);
  min=k+1;
  for(i=1;i<n;i++){
    scanf("%lf",&val1);
    if(k>=val1){
      if(min>k){//初めだけ行われる
        min=val1;  
      }
      if(min<val1){
        min=val1;
      }
    }
  }
  
  printf("%lf\n",min);

  return 0;
}
