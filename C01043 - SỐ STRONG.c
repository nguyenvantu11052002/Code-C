#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int sum = 0;
	int nbandau = n;
	while(n > 0){
		int d = n % 10;
		n = n / 10;
		int giaithua = 1;
		for(int i = 2;i <= d; i++){
			giaithua *= i;
		}
		sum += giaithua;
	}
	if(sum == nbandau) printf("1");
	else printf("0");
	return 0;
}
