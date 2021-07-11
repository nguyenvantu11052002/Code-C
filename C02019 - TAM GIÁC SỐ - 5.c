#include<stdio.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int z = 2;
	for(int i = 1; i <= n; i++){
		int  u = z;
		for(int j = 2; j <= z; j += 2) printf("%d", j);
		for(int k = u - 2; k >= 2; k -= 2) printf("%d", k);
		z += 2;
		printf("\n");
	}
}
int main(){
	inraketqua();
	return 0;
}
