#include<stdio.h>
#include<math.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		long long n;
		scanf("%lld", &n);
	    long long m = sqrt(n);
	    if(m*m == n) printf("YES");
	    else printf("NO");
	    printf("\n");
	}
	return 0;
}
