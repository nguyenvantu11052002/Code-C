#include<stdio.h>
#include<math.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int h = 1;
	for(int i = 1; i <= n; i++){
		int k = n - 1, t;
		for(int j = 1; j <= i; j++){
			if(j == 1){
				printf("%c ", 64 + h);
				h++; // i tang den dau thi h tang den do, h nhu i , ( h = i )
			}
			else{
				if(j == 2){
					t = h + k - 1;
					printf("%c ", t + 64);
					k--;
				}
				else{
					t = t + k;
					printf("%c ", 64 + t);
					k--;
				}
			}
		}
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
