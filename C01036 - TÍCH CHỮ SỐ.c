#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int tich = 1;
	while(n > 0){
		int d = n % 10;
		n = n / 10;
		tich *= d;
	}
	printf("%d", tich);
	return 0;
}
