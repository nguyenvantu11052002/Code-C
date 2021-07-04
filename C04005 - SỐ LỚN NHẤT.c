#include<stdio.h>

int main(){
	int m;
	scanf("%d", &m);
	while(m--){
		int max = 0;
		int n;
		scanf("%d", &n);
		int a[1000];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
	}
	for( int i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("%d\n", max);
	for(int i = 0; i < n; i++){
		if(a[i] == max){
			printf("%d ", i);
		}
	}
	printf("\n");
    } 
     return 0;
}
