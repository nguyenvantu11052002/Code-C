#include<stdio.h>
#include<math.h>

long long kiemtrasogiam(long long n){
	int sosanh = -1;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		if(d > sosanh) sosanh = d;
		else return 0;
	}
	return 1;
}

void inraketqua(){
	long long a, b, count = 0;
	scanf("%lld%lld", &a, &b);
	for(long long i = a; i <= b; i++){
		if(kiemtrasogiam(i)) count++;
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
