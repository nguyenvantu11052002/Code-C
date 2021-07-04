#include<stdio.h>
#include<math.h>

int songuyento(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void cacsonguyento(int n, int u, int f[500]){
	int solanin = n*n;
	u = 0;
	for(int i = 2; ; i++){
		if(songuyento(i)){
		    f[u++] = i;
		    solanin--;
    	}
    	if(solanin == 0) break;
    }
}

void inraketqua(int t){
	int n;
	scanf("%d", &n);
	int a[25][25];
	int u, f[500];
	cacsonguyento(n, u, f);
	int d = 0, i, hang = n - 1, cot = n - 1, gt = 0;
	printf("Test %d:\n", t);
	while(d <= n/2){
		for(i = d; i <= cot; i++) a[d][i] = f[gt++];
		for(i = d + 1; i <= hang; i++) a[i][cot] = f[gt++];
		for(i = cot - 1; i >= d; i--) a[hang][i] = f[gt++];
		for(i = hang - 1; i >= d + 1; i--) a[i][d] = f[gt++];
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
