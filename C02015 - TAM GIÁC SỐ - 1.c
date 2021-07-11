#include<stdio.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int z = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= z; j++) printf("%d", j);
		z = z + 2;
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
