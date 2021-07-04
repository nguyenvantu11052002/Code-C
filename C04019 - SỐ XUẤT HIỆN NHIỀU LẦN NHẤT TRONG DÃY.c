#include<stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		int n;
		scanf("%d", &n);
		int a[1000], b[1000] = {0};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		int max = b[a[0]];
		for(int i = 0; i < n; i++){
			if(b[a[i]] > max){
				max = b[i];
			}
		}
		for(int i = 0; i < n; i++){
			if(b[a[i]] == max){
				printf("%d ", a[i]);
                b[a[i]] = 0;
			}
		}
		printf("\n");			
	}
	return 0;	
}
