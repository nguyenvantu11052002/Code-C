#include<stdio.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int z = 1, t = 4;
	for(int i = 1; i <= n; i++){
		if(i % 2 != 0){
			for(int j = 1; j <= z; j = j + 2) printf("%d", j);
			z += 4;
			printf("\n");
		}
		else{
			for(int k = 2; k <= t; k = k + 2) printf("%d", k);
			t += 4;
			printf("\n");
		}
	}
}
int main(){
	inraketqua();
	return 0;
}
