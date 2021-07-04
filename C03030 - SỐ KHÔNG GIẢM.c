#include<stdio.h>
#include<math.h>

int kiemtrasokhonggiam(int n){
	int d = n % 10;
	n = n/10;
	while(n > 0){
		if(n % 10 > d) return 0;
		d = n % 10;
		n = n/10;
	}
	return 1;
}

void inracacsokhonggiam(){
	int n;
	scanf("%d", &n);
	int h = pow(10, n - 1);
	int k = pow(10, n) - 1;
	for(int i = h; i <= k; i++){
		if(kiemtrasokhonggiam(i)) printf("%d ", i);
	}
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inracacsokhonggiam();
		printf("\n");
	}
	return 0;
}
