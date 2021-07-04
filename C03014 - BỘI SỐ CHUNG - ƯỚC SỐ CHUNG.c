#include<stdio.h>
#include<math.h>

long long UCLN(long long a, long long b){
	if(a % b == 0) return b;
	return UCLN(b, a % b);
}

void inraBCNNvaUCLN(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	printf("%lld %lld", a*b/UCLN(a, b), UCLN(a, b));
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraBCNNvaUCLN();
		printf("\n");
	}
	return 0;
}
