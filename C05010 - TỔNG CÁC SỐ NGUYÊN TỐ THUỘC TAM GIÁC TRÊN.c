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
	int a[55][55];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			if(songuyento(a[i][j])) count += a[i][j];
		}
	}
	printf("%d", count);
}

int main(){
	inraketqua();
	return 0;
}
