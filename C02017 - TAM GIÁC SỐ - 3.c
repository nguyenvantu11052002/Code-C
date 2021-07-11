#include<stdio.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int z = 1;
	for(int i = 1; i <= n; i++){
		int t = z;
		for(int j = 1; j <= z; j += 2) printf("%d", j);
		z += 2;
		for(int k = t - 2; k >= 1; k -= 2) printf("%d", k); // t la z khi bat dau moi i
		printf("\n");
	}
}
int main(){
	inraketqua();
	return 0;
}
