#include<stdio.h>
#include<math.h>

long long ktratang(long long n){
	int p = 10;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		if(d < p) p = d;
		else return 0;
	}
	return 1;
}

long long ktragiam(long long n){
	int p = -1;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		if(d > p) p = d;
		else return 0;
	}
	return 1;
}

long long songto(long long n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void inraketqua(){
	long long n, count = 0;
	scanf("%lld", &n);
	long long a = pow(10, n -1);
	long long b = pow(10, n) - 1;
	for(long long i = a; i <= b; i++){
		if(ktratang(i) || ktragiam(i)){
			if(songto(i)) count++;
		}
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
