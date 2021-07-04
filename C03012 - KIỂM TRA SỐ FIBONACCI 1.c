#include<stdio.h>
#include<math.h>

int fibonaci(int n){
	if(n < 3) return 1;
	int f1 = 1, f2 = 1, f;
	for(int i = 3; i <= n; i++){
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}

int ktrafibonaci(int n){
	int i = 1;
	while(n > fibonaci(i)) i++;
	if(n != fibonaci(i)) return 0;
	return 1;
}

void inraketqua(){
	int n;
	scanf("%d", &n);
	if(ktrafibonaci(n)) printf("1");
	else printf("0");
}

int main(){
	inraketqua();
	return 0;
}
