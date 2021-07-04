#include<stdio.h>
#include<math.h>

long long fibonaci(long long n){
	if(n == 0) return 0;
	if(n == 1 || n == 2) return 1;
	long long f1 = 1, f2 = 1, f;
	for(int i = 3; i <= n; i++){
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}

long long ktrafibonaci(long long n){
	int i = 0;
	while(n > fibonaci(i)) i++;
	if(n != fibonaci(i)) return 0;
	return 1; 
}

void inraketqua(){
	long long n;
	scanf("%lld", &n);
	if(ktrafibonaci(n)) printf("YES");
	else printf("NO");
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
