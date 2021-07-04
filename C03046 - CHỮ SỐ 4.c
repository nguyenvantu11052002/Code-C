#include<stdio.h>
#include<math.h>

long long sokhongcoso4(long long n){
	while(n > 0){
		int d = n % 10;
		n = n/10;
		if(d == 4){
			return 0;
			break;
		}
	}
	return 1;
}

long long sothuannghich(long long n){
	long long sum = 0, m = n;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		sum = sum*10 + d;
	}
	if(sum != m) return 0;
	return 1;
}

long long tongcacchuso(long long n){
	long long sum = 0;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		sum += d;
	}
	return sum;
}

void inraketqua(){
	int n;
	scanf("%d", &n);
	for(long long i = pow(10, n - 1); i <= pow(10, n) - 1; i++){
		if(sokhongcoso4(i) && sothuannghich(i) && tongcacchuso(i) % 10 == 0) printf("%lld ", i);
	}
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
