#include <stdio.h>

int main(void){
	int n,i;
	double k,x;
	scanf("%d %lf",&n,&k);
	double a=k+1;
	for(i=0;a<=k;i++){
		scanf("%lf",&a);
	}
	n-=i;
	for(i=0;i<n;i++){
		scanf("%lf",&x);
		if(x<=k && a<k){a=x;}
	}
	printf("%lf\n",a);
}
