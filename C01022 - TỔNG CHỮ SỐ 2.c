#include<stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		int n;
    	scanf("%d", &n);
    	int sum = 0;
        while(n > 0){
        	int d = n % 10;
        	n = n/10;
        	sum += d;
    	}
	printf("%d\n", sum);
    }
    return 0;
}
