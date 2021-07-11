#include<stdio.h>
#include<math.h>

void inraketqua(){
	int a;
	scanf("%d", &a);
	int m = 63 + a, n = m + a - 1;
	for(int i = 0; i < a; i++){
		for(int i = m; i <= n; i++) printf("%c", i);
		m--;
		n = n - 2;
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
