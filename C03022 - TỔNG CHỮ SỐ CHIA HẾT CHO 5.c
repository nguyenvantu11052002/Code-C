#include<stdio.h>
#include<math.h>

int songuyento(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int tongcacchusochiahetcho5(int n){
	int sum = 0;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		sum += d;
	}
	if(sum % 5 != 0) return 0;
	return 1;
}

void inraketqua(){
	int n, count = 0;
	scanf("%d", &n);
	for(int i = 1; i < n; i++){
		if(songuyento(i) && tongcacchusochiahetcho5(i)){
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
