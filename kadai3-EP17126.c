#include <stdio.h>

int main(void){
	int n,i;
	scanf("%d",&n);
	double k,x;
	scanf("%lf",&k);
	double a=-100;
	for(i=0;i<n;i++){
		scanf("%lf",&x);
		if(x<=k && a<x){a=x;}
	}
	printf("%lf\n",a);
}
