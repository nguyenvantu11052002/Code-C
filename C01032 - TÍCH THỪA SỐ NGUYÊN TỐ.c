#include<stdio.h>
#include<math.h>

int tichtsnt(long long n){
	long long tich = 1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				n = n/i;
			}
			tich *= i;
		}
	}
	if(n > 1) tich *= n;   // truong hop so 997 khong chia het cho so nao
	return tich;
}
int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		long long n;
		scanf("%lld", &n);
		printf("%lld", tichtsnt(n));
		printf("\n");
	}
	return 0;
}
