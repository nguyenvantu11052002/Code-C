#include <stdio.h>
#include <math.h>
 
int main() {
    int n, i;
	int t;
	scanf("%d",&t);
	while(t--){
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
    }    
}
