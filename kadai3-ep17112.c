#include<stdio.h>

int main(){
  int n,i;
	double k,x,ans,tmp;
  scanf("%d%lf",&n,&k);
  for(i=0;i<n;i++){
	  scanf("%lf",&x);
		if(x<=k){
		  tmp=x;
			if(tmp>ans){
			  ans=tmp;
			}
	  }
	}
  printf("%f\n",ans);
}
