#include<stdio.h>

#define min(a, b) ((a) < (b) ? (a) : (b))


void inraketqua(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < 2*n - 1; i++){
		for(int j = 0; j < 2*n - 1; j++){
			int m = min(i, j);
			m = min(m, 2*n -1 - i - 1);
			m = min(m, 2*n -1 - j - 1);
			printf("%d", n - m);
		}
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
