#include<stdio.h>
#include<math.h>

void doicho(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

void inraketqua(){
	int n;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n - 1; i++){ //chi la n - 1 dong can in chu ko lienquan gi den i
		int min = i;
		for(int j = i + 1; j < n; j++){ // j = i + 1; khi i cuoi cung thi j cuoi cung, tuc la se khao sat duoc het cac phan tu dang sau
			if(a[j] < a[min]){
				min = j; // min la vi tri a nho nhat vi aj < amin thi min moi = j
			}
		}
		doicho(&a[i], &a[min]);
		for(int i = 0; i < n; i++) printf("%d ", a[i]);
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
