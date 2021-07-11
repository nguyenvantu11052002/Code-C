#include<stdio.h>

void inraketqua(){
	int a, b;
	scanf("%d%d", &a, &b);
	int x = 0;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b + x; j++){
			if(i == 1 || i == a){
				if(j > x) printf("*");
				else printf("~");
			}
			else{
				if(j > x){
					if(j == x + 1 || j == b + x) printf("*");
					else printf(".");
				}
				else printf("~");
			}
		}
		x++;
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
