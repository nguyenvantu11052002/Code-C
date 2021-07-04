#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	double sum = 0;
    for(double i = 1; i <= n; i++){
    	sum += 1/i;
	}
	printf("%.4lf", sum);
	return 0;
}
