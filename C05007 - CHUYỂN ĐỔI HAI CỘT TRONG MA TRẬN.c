#include<stdio.h>
#include<math.h>

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	long long a[100][100];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%lld", &a[i][j]);
		}
	}
	int b, c;
	scanf("%d%d", &b, &c);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(j == b - 1) printf("%d ", a[i][c - 1]);
			if(j == c - 1) printf("%d ", a[i][b - 1]);
			if(j != (b - 1) && j != (c - 1)) printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
