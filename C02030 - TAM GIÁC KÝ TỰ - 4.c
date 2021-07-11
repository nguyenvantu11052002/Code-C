#include<stdio.h>
#include<math.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int z = 2, m = n, k = n, p = 1, q = 1;
	for(int i = 1; i <= n; i++){
		for(int k = 1; k <= q; k += 2)	printf("%c", 63+ k); // in den so lon nhat trong hang
		for(int r = 1; r <= i - 1; r++) printf("%c", 63 + q - 2*r); // con phai in (i - 1) so nua, 63 + q so lon nhat
		q += 2;
		p += 2;
		printf("\n");
    }
}

int main(){
	inraketqua();
	return 0;
}
