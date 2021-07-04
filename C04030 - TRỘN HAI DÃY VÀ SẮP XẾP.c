#include<stdio.h>
#include<math.h>

int main(){
	int k, u = 1;
	scanf("%d", &k);
	while(k--){
		int n;
		scanf("%d", &n);
		int a[1000], b[1000], c[1000], m = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] > a[j]){
					int c = a[i];
					a[i] = a[j];
					a[j] = c;
				}
			}
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(b[i] < b[j]){
					int d = b[i];
					b[i] = b[j];
					b[j] = d;
				}
			}
		}
		printf("Test %d:\n", u);
		for(int i = 0; i < 2*n; i += 2){
			c[i] = a[i/2];
		}
		for(int i = 1; i < 2*n; i += 2){
			c[i] = b[(i-1)/2]; // viet ra la hieu
		}
		for(int i = 0; i < 2*n; i++) printf("%d ", c[i]);
		u++;
		printf("\n");
	}
	return 0;
}
