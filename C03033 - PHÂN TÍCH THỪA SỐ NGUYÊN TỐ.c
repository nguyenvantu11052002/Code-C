#include<stdio.h>
#include<math.h>

void inraketqua(){
	long long n;
	scanf("%lld", &n);
	printf("%d = ", n);
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			long long count = 0;
			while(n % i == 0){
				n = n/i;
				count++;
			}
		    printf("%d^%d", i, count);
		    if(n != 1) printf(" * ");
		}
	}
	if(n > 1) printf("%d^1", n);
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
		printf("\n");
	}
	return 0;
}
