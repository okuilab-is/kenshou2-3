#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	double k,l,ANS=-10000.0;
	scanf("%d",&n);
	scanf("%f",&k);
	for(i=0;i<n;i++){
		scanf("%f",&l);
		if(l<=k){
			if(ANS<l){ANS=l;}
		}
	}
	printf("%e\n",ANS);
	return 0;
}
