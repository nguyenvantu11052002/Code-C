#include<stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		int n;
		scanf("%d", &n);
		printf("%lld", (long long) n*n);
		printf("\n");
	}	
    return 0;
}
