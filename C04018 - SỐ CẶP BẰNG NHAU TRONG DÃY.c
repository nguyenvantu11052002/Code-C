#include<stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		int n;
		scanf("%d", &n);
		int a[1000];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int count = 0;
		for(int i = 0; i < n; i++){
			if(a[i] == a[i + 1]){
				count++;
			}
		}
		printf("%d", count);
		printf("\n");
	}
}
