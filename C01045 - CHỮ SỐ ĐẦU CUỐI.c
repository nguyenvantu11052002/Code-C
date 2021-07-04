#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int d = n % 10;
	while(n > 10){
		n = n / 10;
	}
	printf("%d %d", n, d);
	return 0;
}
