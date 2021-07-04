#include<stdio.h>
#include<math.h>

long long uocsontomax(long long n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				n = n/i;
			}
			if(n == 1) return i;
		}
	}
	if(n > 1) return n;
}

void inraketqua(){
	long long n;
	scanf("%lld", &n);
	printf("%lld ", uocsontomax(n));
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
