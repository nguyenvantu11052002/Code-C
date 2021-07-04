#include<stdio.h>
#include<math.h>

long long sothuannghich(long long n){
	long long sum = 0, m = n;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		sum = sum * 10 + d;
	}
	if(sum != m) return 0;
	return 1;
}

long long kiemtraso6(long long n){
	int count = 0;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		if(d == 6) count++;
	}
	if(count == 0) return 0;
	return 1;
}

long long tongcacchusokethucla8(long long n){
	long long sum = 0;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		sum += d;
	}
	int p = sum % 10;
	if(p != 8) return 0;
	return 1;
}

void inraketqua(){
	long long a, b, count = 0;
	scanf("%lld%lld", &a, &b);
	if(a < b){
		for(long long i = a; i <= b; i++){
	    	if(sothuannghich(i) && kiemtraso6(i) && tongcacchusokethucla8(i)) printf("%lld ", i);
    	}
	}
	else{
		for(int i = b; i <= a; i++){
			if(sothuannghich(i) && kiemtraso6(i) && tongcacchusokethucla8(i)) printf("%lld ", i);
		}
	}
}

int main(){
	inraketqua();
	return 0;
}
