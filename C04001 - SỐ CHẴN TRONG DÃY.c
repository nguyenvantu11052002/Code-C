#include<stdio.h>

int main(){
	int m;
	scanf("%d", &m);
	while(m--){
		int n;
		scanf("%d", &n);
		int a[1000];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			if(a[i] % 2 == 0){
				printf("%d ", a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
