#include<stdio.h>
#include<math.h>
#include<string.h>

int songuyento(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int sothuannghich(int n){
	int sum = 0;
	int m = n;
	while(n > 0){
		int d = n % 10;
		n = n/10;
		sum = sum * 10 + d;
	}
	if(sum != m) return 0;
	return 1;
}

void inracacsothoaman(){
	int a, b;
	scanf("%d%d", &a, &b);
	int count = 0;
	for(int i = a; i <= b; i++){
		if(songuyento(i) && sothuannghich(i)){
			printf("%d ", i);
			count++;
			if(count % 10 == 0) printf("\n");
		}
	}
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inracacsothoaman();
		printf("\n\n");
	}
	return 0;
}
