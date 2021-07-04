#include<stdio.h>
#include<math.h>

void inraketqua(int t){
	int m, n;
	scanf("%d%d", &m, &n);
	int a[m][n];
	int b[n][m];
	int c[m][m];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int j = 0; j < n; j++){
		for(int i = 0; i < m; i++){
			b[j][i] = a[i][j];
		}
	}
	printf("Test %d:\n", t);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			c[i][j] = 0;
			for(int k = 0; k < n; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int T;
	scanf("%d", &T);
	for(int t = 1; t <= T; t++){
		inraketqua(t);
		printf("\n");
	}
	return 0;
}
