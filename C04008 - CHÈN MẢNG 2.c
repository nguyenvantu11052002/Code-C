#include<stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	int u = 1;
	while(k--){
		int m, n, p;
		scanf("%d%d%d", &m, &n, &p);
		int a[1000], b[1000];
		for(int i = 0; i < m; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		if(p < m){
			printf("Test %d:\n", u);
			for(int i = 0; i < p; i++){
				printf("%d ", a[i]);
			}
			for(int i = 0; i < n; i++){
				printf("%d ", b[i]);
			}
			for(int i = p; i < m; i++){
				printf("%d ", a[i]);
			}
		}
		else{
			printf("Test %d:\n", u);
			for(int i = 0; i < m; i++){
				printf("%d ", a[i]);
			}
			for(int i = 0; i < n; i++){
				printf("%d ", b[i]);
			}
		}
		printf("\n");
		u++;
	}
	return 0;
}
