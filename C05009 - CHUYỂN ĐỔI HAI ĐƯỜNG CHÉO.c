#include<stdio.h>
#include<math.h>

int doicho(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

void inraketqua(){
	int n;
	scanf("%d", &n);
	int a[55][55];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		doicho(&a[i][i], &a[i][n - i - 1]);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
