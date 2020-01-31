#include<stdio.h>

int main(){
  int n,i;
	double k,x,ans;
  scanf("%d%lf",&n,&k);
  for(i=0;i<n;i++){
	  scanf("%lf",&x);
		if(ans<x && x<=k)ans=x;
	}
  printf("%f",ans);
}
