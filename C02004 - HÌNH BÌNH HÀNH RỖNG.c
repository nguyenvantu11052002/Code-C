#include<stdio.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int x = 2*n - 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= x; j++){
			if(i == 1 || i == n){
				if(j > x - n) printf("*");
				else printf("~");
			}
			else{
				if(j > x - n){
					if(j == x - n + 1 || j == x) printf("*");
					else printf(".");
				}
				else printf("~");
			}
		}
		x--;
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
