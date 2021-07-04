#include<stdio.h>
#include<math.h>

void inraketqua(int t){
	int n;
	scanf("%d", &n);
	int a[25][25];
	int b[25][25];
	int c[25][25]; // matran chuyen vi
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j){
				for(int j = i; j >= 0; j--) a[i][j] = j + 1; // viet ra la hieu , nhin 1 luc thay quy luat, no giam dan nen phai theo cai thay doi giam dan chu k theo cai co dinh, cu the o day la theo j chu khong phai theo i(j + 1) OK ?
			}
			else a[i][j] = 0; // vi du i = 1, j = 0 khac nhau nen aij = 0, nhung sau do i = 1 j = 1 aij lai bang 1.
		}
	}
	for(int j = 0; j < n; j++){
		for(int i = 0; i < n; i++){
			b[j][i] = a[i][j];
		}
	}
	printf("Test %d:\n", t);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			c[i][j] = 0;
			for(int k = 0; k < n; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
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
