#include<stdio.h>
#include<math.h>

long long tongcacgiaithuacuacacso(long long n){
	long long sum = 0;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		long long tich = 1;
		for(long long i = 1; i <= d; i++){
			tich *= i;
		}
		sum += tich;
	}
	return sum;
}

int main(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if(a < b){
		for(long long i = a; i <= b; i++){
	    	if(tongcacgiaithuacuacacso(i) == i) printf("%lld ", i);
	    }
	}
	else{
		for(long long i = b; i <= a; i++){
			if(tongcacgiaithuacuacacso(i) == i) printf("%lld ", i);
		}
	}
	return 0;
}
