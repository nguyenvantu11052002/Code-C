#include<stdio.h>
#include<math.h>

long long sothuannghich(long long n){
	long long sum = 0, m = n;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		sum = sum * 10 + d;
	}
	if(sum != m) return 0;
	return 1;
}

long long kiemtracacchuso(long long n){
	while(n > 0){
		int d = n % 10;
		n = n/10;
		if(d % 2 == 0){
			return 0;
			break;
		}
	}
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
	long long n;
	scanf("%lld", &n);
	if(sothuannghich(n) && kiemtracacchuso(n) && tongcacchuso(n) % 2 != 0) printf("YES");
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
