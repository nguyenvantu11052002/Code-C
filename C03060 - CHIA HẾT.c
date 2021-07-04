#include<stdio.h>
#include<math.h>

void inraketqua(){
	long long n, k, count = 0;
	scanf("%lld%lld", &n, &k);
	for(long long i = 2; i <= n; i++){
		long long d = i;
		while(d % 2 == 0){
			count++;
			d = d/2;
		}
	}
	if(count >= k) printf("Yes");
	else printf("No");
}

int main(){
	inraketqua();
	return 0;
}
