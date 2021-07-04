#include<stdio.h>
#include<math.h>

void inraketquasox(){
	long long n, p, count = 0;
	scanf("%lld%lld", &n, &p);
	for(long long i = 2; i <= n; i++){
		long long d = i;
		if(d % p == 0){
			while(d % p == 0){
				d = d/p;
				count++;
			}
		}
	}
	printf("%lld", count);
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketquasox();
		printf("\n");
	}
	return 0;
}
