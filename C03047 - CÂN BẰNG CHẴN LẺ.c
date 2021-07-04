#include<stdio.h>
#include<math.h>

long long demchusochan(long long n){
	long long count = 0;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		if(d % 2 == 0) count++;
	}
	return count;
}

long long demchusole(long long n){
	long long count = 0;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		if(d % 2 != 0) count++;
	}
	return count;
}

void inraketqua(){
	int n, count = 0;
	scanf("%d", &n);
	for(long long i = pow(10, n - 1); i <= pow(10, n) - 1; i++){
		if(demchusochan(i) == demchusole(i)){
			printf("%lld ", i);
			count++;
			if(count % 10 == 0) printf("\n");
		}
	}
}

int main(){
	inraketqua();
	return 0;
}
