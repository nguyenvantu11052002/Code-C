#include<stdio.h>
#include<math.h>

void inraketqua(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 1; i <= b; i++){
		for(int j = 1; j <= a; j++){
			if(i == 1 || i == b) printf("*");
			else{
				if(j == 1 || j == a) printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
