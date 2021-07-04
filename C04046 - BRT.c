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
		while(a[i] < p) i++;
		while(a[j] > p) j--;
		if(i <= j){	
	    	doicho(&a[i], &a[j]);
	    	i++;
	    	j--;
	    }
	}
	if(i < r) quicksort(a, i, r);
	if(l < j) quicksort(a, l, j);
}

int min(int a, int b){
	if(a < b) return a;
	return b;
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
    	int n;
    	scanf("%d", &n);
    	int a[100005];
    	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    	quicksort(a, 0, n - 1);
    	int count  = 0;
    	int kcmin = 2* pow(10, 9) + 5;
 		for(int i = 1; i < n; i++){
			kcmin = min(kcmin, abs(a[i] - a[i -1]));
		}
		for(int i = 1; i < n; i++){
			if(abs(a[i] - a[i-1]) == kcmin) count++;
		}
		printf("%d %d\n", kcmin, count);
    }
	return 0;
}
