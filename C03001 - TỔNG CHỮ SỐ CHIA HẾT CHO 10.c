#include<stdio.h>
#include<math.h>

long long tongcacchuso(long long n){
	long long sum = 0;
	while(n >= 10){
		int d = n % 10;
		n = n/10;
		sum += d;
	}
	return sum+n;
}

void inraketqua(){
	long long n;
	scanf("%lld", &n);
	if(tongcacchuso(n) % 10 == 0) printf("YES");
	else printf("NO");
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
