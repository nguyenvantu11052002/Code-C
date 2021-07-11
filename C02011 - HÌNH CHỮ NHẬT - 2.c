#include<stdio.h>
#include<math.h>
 
void inraketqua(){
	int a, b;
	scanf("%d%d", &a, &b);
	int x = 0;
	for(int i = 1; i <= a; i++){
		if(i <= b){
			for(int j = 1; j <= b; j++){
				if(j + x <= b) printf("%d", j + x);
				else{
					for(int k = b - 1; k >= b - x; k--) printf("%d", k);
					break;
				}
			}
		}
		if(i > b){
			for(int k = i; k >= x - 2; k--) printf("%d", k);
		}
		x++;
		printf("\n");
	}
}
 
int main(){
	inraketqua();
	return 0;
}
