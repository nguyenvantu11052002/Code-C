#include<stdio.h>
#include<math.h>

void doicho(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

int main(){
	int n, m = 1;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n - 1; i++){ // 4 phantu thi can 4-1 buoc
		printf("Buoc %d: ", m);
		int min = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[min]) min = j; // min la vi tri a be nhat ~ amin be nhat
		}
		doicho(&a[min], &a[i]); // a[i] la so dang xet
		for(int i = 0; i < n; i++) printf("%d ", a[i]);
		m++;
		printf("\n");
	}
	return 0;
}
