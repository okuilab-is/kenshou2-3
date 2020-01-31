#include<stdio.h>

int main(){
	int n,i;
	double k,x,ans;//基準値k、入力用データx、解答ans
	scanf("%d%lf",&n,&k);
	x=k+1;
	for(i=0;x>k && i<n;i++){
		scanf("%lf",&x);
		ans=x;}
	if(i>=n){
		printf("Below reference value is None.\n");
		return 0;}
	for(;i<n;i++){
		scanf("%lf",&x);
		if(x>ans && x<=k){
		  ans=x;}}
	printf("%f\n",ans);
	return 0;}
