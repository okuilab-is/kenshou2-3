#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	double k,l,ANS=-1000.0;
	scanf("%d",&n);
	scanf("%lf",&k);
	for(i=0;i<n;i++){
		scanf("%lf",&l);
		if(l<=k){
			if(ANS<l){ANS=l;}
		}
	}
	printf("%lf\n",ANS);
	return 0;
}
