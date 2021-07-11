#include<stdio.h>
#include<math.h>

void inraketqua(){
	int a, b;
	scanf("%d%d", &a, &b);
	int x = 0; // x de in doan giam dan dang sau
	for(int i = 1; i <= a; i++){
		if(i <= b){
			for(int j = 1; j <= b; j++){
				if(j + x <= b) printf("%d", j + x);
				else{
					for(int k = x; k >= 1; k--) printf("%d", k);
					break; // break de cho j dong 10 khong chay nua
				}
			} 
		}
		x++;
		if(i > b){
			printf("%d", i);
			for(int p = b - 1; p >= 1; p--) printf("%d", p);
		}
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
