#include<stdio.h>
#include<math.h>

int giaithua(int n){
	int k = 1;
	for(int i = 1; i <= n; i++){
		k *= i;
	}
	return k;
}

int tamgiacpascalvitrink(int n, int k){
	return giaithua(n) / (giaithua(k) * giaithua(n - k));
}

void inraketqua(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			printf("%d ", tamgiacpascalvitrink(i, j));
		}
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
