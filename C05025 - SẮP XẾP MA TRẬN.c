#include<stdio.h>
#include<stdio.h>

int doicho(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

void inraketqua(int t){
	int m, n;
	scanf("%d%d", &m, &n);
	int a[100][100];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i1 = 0; i1 < m; i1++){
		for(int j1 = 0; j1 < n; j1++){
			for(int i2 = i1; i2 < m; i2++){
				for(int j2 = j1; j2 < n; j2++){
					if(a[i1][j1] > a[i2][j2]) doicho(&a[i1][j1], &a[i2][j2]);
				}
			}
		}
	}
	printf("Test %d:\n", t);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int T;
	scanf("%d", &T);
	for(int t = 1; t <= T; t++){
		inraketqua(t);
	}
	return 0;
}
