#include<stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
	int n;
	scanf("%d", &n);
	printf("%.15lf", (double) 1/n);
	printf("\n");
    }
    return 0;
}
