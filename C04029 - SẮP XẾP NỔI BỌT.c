#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void doicho(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

void inraketqua(int n, int a[]){
	for(int i = 0; i < n - 1; i++){
		bool check = false;
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j + 1]){
				doicho(&a[j], &a[j + 1]);
				check = true;
			}
		}
		if(check == false) break;
		printf("Buoc %d: ", i + 1);
		for(int j = 0; j < n; j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	inraketqua(n, a);
	return 0;
}
