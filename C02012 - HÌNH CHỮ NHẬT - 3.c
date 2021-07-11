#include<stdio.h>
#include<math.h>

void inraketqua(){
	int a, b;
	scanf("%d%d", &a, &b);
	int x = 1;
	for(int i = 1; i <= b; i++) printf("%d", i);
	printf("\n");
	for(int i = 2; i <= a; i++){
		if(i <= b){
			int n = i;
	    	for(int i = n; i >= 1; i--) printf("%d", i);
	    	for(int i = 2; i <= b - x; i++) printf("%d", i);
		}
		if(i > b) for(int k = i; k >= x - b + 2; k--) printf("%d", k); // dat but ra lam 2 test 6 4 va 7 3 la hieu
		x++;
		printf("\n");
	} 
}

int main(){
	inraketqua();
	return 0;
}
