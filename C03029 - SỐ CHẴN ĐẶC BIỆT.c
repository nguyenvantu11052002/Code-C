#include<stdio.h>
#include<math.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		long long n, count = 0;
		scanf("%lld", &n);
		while(n > 0){
			int d = n % 10;
			n = n/10;
			if(d % 2 != 0){
				count++;
				break;
			}
		}
		if(count == 0) printf("YES");
		else printf("NO");	
		printf("\n");
	}
	return 0;
}
