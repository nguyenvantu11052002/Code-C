#include<stdio.h>
#include<math.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		long long n, countchan = 0, countle = 0;
		scanf("%lld", &n);
		while(n > 0){
			int d = n % 10;
			n = n/10;
			if(d % 2 == 0) countchan++;
			else countle ++;
		}
		printf("%lld %lld", countle, countchan);
		printf("\n");
	}
	return 0;
}
