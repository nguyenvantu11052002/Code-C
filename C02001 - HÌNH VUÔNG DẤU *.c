#include<stdio.h>
#include<math.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) printf("*");	
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
