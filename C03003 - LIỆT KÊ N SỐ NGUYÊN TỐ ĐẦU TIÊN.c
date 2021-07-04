#include<stdio.h>
#include<math.h>

int songuyento(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void inransongtodautien(){
	int n;
	scanf("%d", &n);
	for(int i = 2; ; i++){
		if(songuyento(i)){
			printf("%d\n", i);
			n--;
		}
		if(n == 0) break;
	}
}

int main(){
	inransongtodautien();
	return 0;
}
