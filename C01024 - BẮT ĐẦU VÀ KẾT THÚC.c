#include<stdio.h>
#include<string.h>

int main(){
	int k;
	scanf("%d", &k);
    while(k--){
    	int n;
    	scanf("%d", &n);
    	int d = n % 10;
    	while(n > 10){
    		n = n /10;
		}
		if(n == d) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
