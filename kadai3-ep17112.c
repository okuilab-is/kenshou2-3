#include<stdio.h>

int main(){
	int n,i;
	double k,x,ans;
	scanf("%d",&n);
	scanf("%lf",&k);
	x=k+1;
	for(i=0;x>k;i++){
		scanf("%lf",&x);
		ans=x;
	}
	for(;i<n;i++){
		scanf("%lf",&x);
		if(x>ans && x<=k){
		  ans=x;
		}
	}
	printf("%f\n",ans);
}
