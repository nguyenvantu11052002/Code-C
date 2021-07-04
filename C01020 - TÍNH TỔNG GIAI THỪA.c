#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	long long sum = 0, giaithua = 1;
	for(int i = 1; i <= n; i++){
		giaithua *= i;
		sum += giaithua;
	}
	printf("%lld", sum);
	return 0;
}
