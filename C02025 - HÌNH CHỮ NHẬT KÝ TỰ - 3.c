#include<stdio.h>
#include<math.h>

void inraketqua(){
	int a, b, m = 1;
	scanf("%d%d", &a, &b);
	int n = b;
	for(int i = 1; i <= a; i++){
			for(int j = m; j <= n; j++) printf("%c", 63 + j);
			if(m <= n){
				for(int k = m - 1; k >= 1; k--) printf("%c", 63 + n);
			}
			else{
				for(int i = n; i >= 1; i--) printf("%c", 63 + n);
			}
			m++;
			printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
