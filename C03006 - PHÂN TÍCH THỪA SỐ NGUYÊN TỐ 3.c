#include<stdio.h>
#include<math.h>

void inraketquavoibotestthuT(int T){
	int n;
	scanf("%d", &n);
	printf("Test %d: ", T);
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			int count = 0;
			while(n % i == 0){
				count++;
				n = n/i;
			}
			printf("%d(%d) ", i, count);
		}	
	}
	if(n > 1) printf("%d(1) ", n);
}

int main(){
	int t;
	scanf("%d", &t);
	for(int T = 1; T <= t; T++){
		inraketquavoibotestthuT(T);
		printf("\n");
	}
	return 0;
}
