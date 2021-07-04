#include<stdio.h>
#include<math.h>

long long kiemtrasugapdoi(long long n){
	int m = n % 10;
	while(n > 9){
		int d = n % 10;
		n = n/10;
	}
	if(n != 2*m && m != 2*n) return 0;
	return 1;
}

long long xoasodauvacuoi(long long n){
	int m = n % 10, nbandau = n, count = 0;
	while(n > 9){
		int d = n % 10;
		n = n/10;
		count++;
	}
	long long ketqua = nbandau - (n * pow(10, count) + m);
	return ketqua;
}

long long sothuannghich(long long n){
	long long sum = 0, m = n;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		sum = sum*10 + d;
	}
	if(sum != m) return 0;
	return 1;
}

long long ktrathuannghichsosaukhixoasodauvacuoi(long long n){
	if(sothuannghich(xoasodauvacuoi(n)) == 0) return 1;
	return 0;
}

void inraketqua(){
	long long n;
	scanf("%lld", &n);
	if(kiemtrasugapdoi(n) && ktrathuannghichsosaukhixoasodauvacuoi(n)) printf("YES");
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
