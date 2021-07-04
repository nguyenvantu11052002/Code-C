#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		printf("%d ", a[n-1-i]);
	}
}
