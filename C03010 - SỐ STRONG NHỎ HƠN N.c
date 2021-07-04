#include<stdio.h>
#include<math.h>

long long tongcacgiaithuacuacacso(long long n){
	long long sum = 0;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		long long tich = 1;
		for(long long i = 1; i <= d; i++){
			tich *= i;
		}
		sum += tich;
	}
	return sum;
}

int main(){
	long long n;
	scanf("%lld", &n);
	for(long long i = 1; i <= n; i++){
		if(tongcacgiaithuacuacacso(i) == i) printf("%lld ", i);
	}
	return 0;
}
