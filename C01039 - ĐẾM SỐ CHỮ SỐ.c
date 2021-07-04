#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int count = 0;
    while(n > 0){
    	int d = n % 10;
    	n = n / 10;
        count++;
	}
	printf("%d", count);
	return 0;
}
