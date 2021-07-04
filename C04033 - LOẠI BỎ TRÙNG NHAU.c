#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		for(int j = i +1; j < n; j++){
			if(a[i] == a[j]){
				a[j] = -1;
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(a[i] > 0){
			printf("%d ", a[i]);
		}
	}
	return 0;
}
