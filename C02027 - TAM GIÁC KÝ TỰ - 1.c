#include<stdio.h>
#include<math.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int p = ((i + 1)*i)/2;
		if(i % 2 != 0){
			for(int j = p - i + 1; j <= p; j++) printf("%c ", 96 + j);
			printf("\n");
		}
		else{
			for(int k = p; k >= p - i + 1; k--) printf("%c ", 96 + k);
			printf("\n");
		}
	}
}

int main(){
	inraketqua();
	return 0;
}
