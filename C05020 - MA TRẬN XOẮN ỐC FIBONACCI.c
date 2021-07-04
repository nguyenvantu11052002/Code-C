#include<stdio.h>
#include<math.h>

void cacsofibonaci(int n, int f[90]){
	f[0] = 0;
	f[1] = 1;
	f[2] = 1;
	for(int i = 3; i <= n*n; i++){
		f[i] = f[i-1] + f[i-2];
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[90][90], f[90];
	cacsofibonaci(n, f);
	int hang = n - 1, cot = n - 1, d = 0, gt = 0, i;
	while(d <= n/2){
		for( i = d; i <= cot; i++) a[d][i] = f[gt++];
		for( i = d + 1; i <= hang; i++) a[i][cot] = f[gt++];
		for( i = cot - 1; i >= d; i--) a[hang][i] = f[gt++];
		for( i = hang - 1; i >= d + 1; i--) a[i][d] = f[gt++];
		d++;
		hang--;
		cot--;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
