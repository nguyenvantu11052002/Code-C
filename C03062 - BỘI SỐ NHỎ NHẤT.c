#include<stdio.h>
#include<math.h>

long long UCLN(long long a, long long b){
	if(a % b == 0) return b;
	return UCLN(b, a % b);
}

void inraketqua(){
	long long n, m;
	scanf("%lld%lld", &n, &m);
	long long res = n;
	for(long long i = n + 1; i <= m; i++){
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
