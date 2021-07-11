#include<stdio.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int z = 1, m = n, k = n; // k tang, m giam
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= k; j++){
			int u = z;
			if(j >= m){
				for(int p = 1; p <= z; p += 2) printf("%d", p); // den day la in dc 13 cua dong test 2 roi
				for(int q = u - 2; q >= 1; q -= 2) printf("%d", q);
				z += 2;
				printf("\n");
				break;
			}
			else printf("~");
		}
		m--;
		k++;
	}
}
int main(){
	inraketqua();
	return 0;
}
