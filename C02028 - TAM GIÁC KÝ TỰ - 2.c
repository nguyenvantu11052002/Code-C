#include<stdio.h>
#include<math.h>

void inraketqua(){
	int a;
	scanf("%d", &a);
	int m = 65 + 2*(a - 1), n = 65;
	for(int i = 0; i < a; i++){
		for(int i = n; i <= m; i = i + 2) printf("%c", i);
		n = n + 2;
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
