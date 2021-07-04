#include<stdio.h>
#include<math.h>

long long UCLN(long long a, long long b){
	if(a % b == 0) return b;
	return UCLN(b, a % b);
}

void inraketqua(){
	long long n;
	scanf("%lld", &n);
	long long res = 1;
	for(long long i = 2; i <= n; i++){
		res = (res*i)/UCLN(res,i);
	}
	printf("%lld", res);
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
		printf("\n");
	}
	return 0;
}
