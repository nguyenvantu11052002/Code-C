#include<stdio.h>
#include<math.h>

int songuyento(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void inraketqua(){
	int n;
	scanf("%d", &n);
	for(int i = 2; i <= n/2; i++){
		if(songuyento(i) && songuyento(n - i)) printf("%d %d ", i, n - i);
	}
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
