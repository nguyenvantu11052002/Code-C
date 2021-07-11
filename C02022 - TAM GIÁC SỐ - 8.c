#include<stdio.h>
 
void inraketqua(){
	int n;
	scanf("%d", &n);
	int z = 1;
	for(int i = 1; i <= n; i++){
		int p = ((1 + i)*i)/2;// p la so lon nhat trong day
		if(i % 2 != 0){
			for(int j = p - i + 1; j <= p; j++){
				printf("%d ", j);
			}
			printf("\n");
		}
		else{
			for(int k = p; k >= p - i + 1; k--){
				printf("%d ", k);
			}
			printf("\n");
		}
	}
}
 
int main(){
	inraketqua();
	return 0;
}
