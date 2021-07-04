#include<stdio.h>
#include<math.h>

long long sothuannghich(long long n){
	long long sum = 0, m = n;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		sum = sum * 10 + d;
	}
	if(sum != m) return 0;
	return 1;
}

long long tongcacchuso(long long n){
	long long sum = 0;
	while(n > 0){
		int d = n % 10;
		n = n /10;
		sum += d;
	}
	return sum;
}

void inraketqua(){
	long long n, count = 0;
	scanf("%lld", &n);
	long long a = pow(10, n - 1);
	long long b = pow(10, n) - 1;
	for(long long i = a; i <= b; i++){
		if(sothuannghich(i) && tongcacchuso(i) % 10 == 0) count++;
	}
	printf("%lld", count);
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
