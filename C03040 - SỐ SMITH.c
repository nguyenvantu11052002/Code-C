#include<stdio.h>
#include<math.h>

long long tongcacchuso(long long n){
	long long sum = 0;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		sum += d;
	}
	return sum;
}

long long tongcacchusocuacactsnt(long long n){
	long long sum1 = 0;
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				n = n/i;
				sum1 += tongcacchuso(i);
			}
		}
	}
	if(n > 1) sum1 += tongcacchuso(n);
	return sum1;
}

void inraketqua(){
	long long n;
	scanf("%lld", &n);
	if(tongcacchuso(n) == tongcacchusocuacactsnt(n)) printf("YES");
	else printf("NO");
}

int main(){
	inraketqua();
	return 0;
}
