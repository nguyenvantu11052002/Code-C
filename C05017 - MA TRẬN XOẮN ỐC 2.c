#include<stdio.h>
#include<math.h>

void inraketqua(){
	int m, n;
	scanf("%d%d", &m, &n);
	int a[105][105];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int d = 0, i, hang = m - 1, cot = n - 1, x = 0; // vi khong phai ma tran vuong nen x de dem du phan tu ma tran thi ket thuc.
	while(d <= m/2){
		for(i = d; i <= cot; i++){
			printf("%d ", a[d][i]);
			x++;
		}
		for(i = d + 1; i <= hang; i++){
			printf("%d ", a[i][cot]);
			x++;
		}
		if(d != hang){
			for(i = cot - 1; i >= d; i--){
				printf("%d ", a[hang][i]);
				x++;
			}
		}
		if(d != cot){
			for(i = hang - 1; i >= d + 1; i--){
				printf("%d ", a[i][d]);
				x++;
			}
		}
		d++;
		hang--;
		cot--;
		if(x == m*n) break;
	}
	printf("\n");
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
	}
	return 0;
}
