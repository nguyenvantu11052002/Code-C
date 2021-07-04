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
	int a[35][35];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
    int	count[35] = {0};
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < n; j++){
	    	if(songuyento(a[i][j])) count[i]++;
		}	
	}
	int countmax = 0;
	for(int i = 0; i < n; i++){ 
		if(count[i] > countmax) countmax = count[i];
	}
	for(int i = 0; i < n; i++){
		if(count[i] == countmax){
			printf("%d\n", i + 1);
			for(int j = 0; j < n; j++){
				if(songuyento(a[i][j])) printf("%d ", a[i][j]); 
			}
			break;
		}
	}
}

int main(){
	inraketqua();
	return 0;
}
