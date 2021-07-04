#include<stdio.h>
#include<math.h>

int songuyento(int p){
	if(p == 0 || p == 1){
		return 0;
	}
	for(int i = 2; i <= sqrt(p); i++){
		if(p % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int m;
	scanf("%d", &m);
	while(m--){
		int n;
		scanf("%d", &n);
		int a[1000];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			if(songuyento(a[i]) != 0){
				printf("%d ", a[i]);
			}
		}
	  printf("\n");	
	}
}
