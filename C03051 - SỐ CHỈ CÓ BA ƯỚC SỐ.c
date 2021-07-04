#include<stdio.h>
#include<math.h>

long long songuyento(long long n){
	if(n < 2) return 0;
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void inraketqua(){
	long long a, b, count = 0;
	scanf("%lld%lld", &a, &b);
	long long c = sqrt(a);
	long long d = sqrt(b);
	for(long long i = c; i <= d; i++){
		if(songuyento(i)) count++;
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
