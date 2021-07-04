#include<stdio.h>

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int a[1000], b[1000];
	for( int i = 0; i < m; i++){
		scanf("%d", &a[i]);
    }
    for ( int j = 0; j < n; j++){
    	scanf("%d", &b[j]);
	}
	int p;
	scanf("%d", &p);
	for( int i = 0 ; i < p; i++){
		printf("%d ", a[i]);
	}
	for( int j = 0; j < n; j++){
		printf("%d ", b[j]);
	}
	for(int i = p; i < m; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
