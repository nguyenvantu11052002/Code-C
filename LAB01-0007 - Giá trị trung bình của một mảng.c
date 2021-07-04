#include<stdio.h>

int main(){
	double n;
	scanf("%lf", &n);
	int a[1000];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
    int sum = 0;
	for(int i = 0; i < n; i++){
		sum += a[i];
	}
		printf("%.3lf", sum/n);
	return 0;
}
