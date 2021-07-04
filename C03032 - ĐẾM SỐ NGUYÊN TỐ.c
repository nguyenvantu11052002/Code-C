#include<stdio.h>
#include<math.h>

long long songuyento(long long n){
	if(n < 2) return 0;
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

long long kiemtratungchuso(long long n){
	while(n > 0){
		int d = n % 10;
		n = n/10;
		if(songuyento(d) == 0){
			return 0;
			break;
		}
	}
	return 1;
}

void inracacsothoaman(){
	long long a, b, count = 0;
	scanf("%lld%lld", &a, &b);
	for(long long i = a; i <= b; i++){
		if(songuyento(i) && kiemtratungchuso(i)) count++;
	}
	printf("%lld", count);
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inracacsothoaman();
		printf("\n");
	}
	return 0;
}
