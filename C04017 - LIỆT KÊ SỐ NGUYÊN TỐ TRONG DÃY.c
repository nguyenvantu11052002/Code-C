#include<stdio.h>
#include<math.h>

int songuyento( int n){
	if(n == 0 || n == 1){
		return 0;
	}for (int i = 2; i <=sqrt(n); i++){
		if(n % i == 0){
			return 0;
			}
		}
		return 1;
	}
int main(){
	int m;
	scanf("%d", &m);
	int a[1000];
	int count = 0;
	for(int i = 0; i < m; i++){
		scanf("%d", &a[i]);
		if(songuyento(a[i]) != 0){
			count++;
		}
	} 
	printf("%d ", count);
	for(int i = 0; i < m; i++){
		if(songuyento(a[i]) != 0 ){
			printf("%d ", a[i]);
		}
	}
	return 0;
}
