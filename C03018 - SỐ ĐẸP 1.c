#include<stdio.h>
#include<math.h>

int ktranto(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int fibonaci(int n){
	if(n == 1 || n == 2) return 1;
	int f1 = 1, f2 = 1, f;
	for(int i = 3; i <= n; i++){
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}

int sum(int n){
    int sum1 = 0;
	while(n >= 10){
		int d = n % 10;
		n = n/10;
		sum1 += d;
	}
	return sum1 + n;
}

int ktrafibonaci(int n){
	int i = 1;
	while(n > fibonaci(i)) i++;
	if(n != fibonaci(i)) return 0;
	return 1;
}

void inracacsodep(){
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b){
		for(int i = a; i <= b; i++){
			if(ktranto(i) && ktrafibonaci(sum(i))) printf("%d ", i);
		}
	}
	else{
		for(int i = b; i <= a; i++){
			if(ktranto(i) && ktrafibonaci(sum(i))) printf("%d ", i);
		}
	}
}

int main(){
	inracacsodep();
	return 0;
}
