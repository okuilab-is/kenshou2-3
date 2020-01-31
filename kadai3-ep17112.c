#include<stdio.h>

int main(){
  int n,i;
	double k,x,ans;
  scanf("%d%lf",&n,&k);
  for(i=0;i<n;i++){
	  scanf("%lf",&x);
		if(x<=k){
		  ans=x;
	  }
	}
  printf("%f\n",ans);
}
