#include<stdio.h>
#include<math.h>

int sothuannghich(int n){
	if(n < 2) return 0;
	int sum = 0, m = n;
	while(n > 0){
		int d = n % 10;
		sum = sum*10 + d;
		n = n/10;
	}
	if(sum != m) return 0;
	return 1;
}

int sokhongchuaso9(int n){
	int count = 0;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		if(d == 9) count++;
	}
	if(count > 0) return 0;
	return 1;
}

void inraketqua(){
	int n, count = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		if(sothuannghich(i) && sokhongchuaso9(i)){
			count++;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("%d", count);
}

int main(){
	inraketqua();
	return 0;
}
