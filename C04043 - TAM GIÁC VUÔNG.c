#include<stdio.h>
#include<math.h>
 
int doicho(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}
 
void quicksort(int a[], int l, int r){
	int p = a[(l + r)/2];
	int i = l;
	int j = r;
	while(i < j){
		while(a[i] > p) i++;
		while(a[j] < p) j--;
		if(i <= j){
			doicho(&a[i], &a[j]);
			i++;
			j--;
		}
	}
	if(i < r) quicksort(a, i, r);
	if(l < j) quicksort(a, l, j);
}
 
int kiemtra(int a[], int n){
	for(int i = 0; i < n - 2; i++){
		for(int j = i + 1; j < n - 1; j++){
			long long M = (long long)a[i]*a[i] - (long long)a[j]*a[j];
			long long q = sqrt(M);
			if(q * q == M){
				for(int k = j + 1; k < n; k++){
					if(q > a[k]) break;
					else if(q == a[k]) return 1;
				}
			}
		}
	}
	return 0;
}
 
void inraketqua(){
	int n;
	scanf("%d", &n);
	int a[5005];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	quicksort(a, 0, n - 1);
	if(kiemtra(a, n)) printf("YES\n");
	else printf("NO\n");
}
 
int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
	}
	return 0;
}
