#include<stdio.h>
#include<math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[105][105];
	int gt = 1, hang = n - 1, cot = n - 1, d = 0, i;
	while(d <= n/2){
		for(i = d; i <= cot; i++) a[d][i] = gt++;
		for(i = d + 1; i <= hang; i++) a[i][cot] = gt++;
		for(i = cot - 1; i >= d; i--) a[hang][i] = gt++;
		for(i = hang - 1; i >= d + 1; i--) a[i][d] = gt++;
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
