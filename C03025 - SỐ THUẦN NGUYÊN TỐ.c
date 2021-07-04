#include<stdio.h>
#include<math.h>

long long songuyento(long long n){
	if(n < 2) return 0;
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

long long ktratungchusovatongcacchuso(long long n){
	long long sum = 0;
	while(n > 0){
		int d = n % 10;
		if(d != 3 && d != 5 && d != 2 && d != 7) return 0; 
		n = n/10;
		sum += d;
	}
	if(songuyento(sum)) return 1; 
	return 0;
}

void inraketqua(){
	long long a, b, count = 0;
	scanf("%lld%lld", &a, &b);
	for(long long i = a; i <= b; i++){
		if(ktratungchusovatongcacchuso(i)){
			if(songuyento(i)) count++;
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
