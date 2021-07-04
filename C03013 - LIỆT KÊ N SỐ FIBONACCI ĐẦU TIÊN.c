#include<stdio.h>
#include<math.h>

int fibonaci(int n){
	if(n == 0) return 0;
	if(n == 1 || n == 2) return 1;
	int f1 = 1, f2 = 1, f;
	for(int i = 3; i <= n; i++){
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}

void inracacsofibonaci(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("%d ", fibonaci(i));
	}
}

int main(){
	inracacsofibonaci();
	return 0;
}
