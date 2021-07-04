#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int k = 1;
	for(int i = 0; i < 10; i++){
		int hihi = n * k;
		k++;
		printf("%d ", hihi);
	}
	return 0;
}
