#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[1000], b[1000] = {0}, max = 0;
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i] > max){
			max = a[i];
		}
		b[a[i]]++;
	}
	int count = 0;
	for(int i = 0; i <= max; i++){
		if(b[i] > 1){
			count++;
		}	
	}
	printf("%d\n", count);
	for(int i = 0; i <= max; i++){
		if(b[a[i]] > 1){
			printf("%d ", a[i]);
			b[a[i]] = 0;
		}
	}
	
	
	return 0;	
}
