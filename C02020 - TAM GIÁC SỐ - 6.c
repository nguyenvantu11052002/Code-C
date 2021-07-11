#include<stdio.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int z = 2, m = n, k = n; //  m giam , khong can k tang
	for(int i = 1; i <= n; i++){
		int u = z;
		for(int j = 1; j <= k; j++){
			if(j >= m){
				for(int p = 2; p <= z; p += 2) printf("%d", p);
				for(int q = u - 2; q >= 2; q -= 2) printf("%d", q);
				z += 2;
				printf("\n");
				break;
			}
			else printf("~");
		}
		m--;
	}
}
int main(){
	inraketqua();
	return 0;
}
