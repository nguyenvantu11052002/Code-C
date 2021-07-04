#include<stdio.h>
#include<math.h>

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	long long a[100][100];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%lld", &a[i][j]);
		}
	}
	int b, c;
	scanf("%d%d", &b, &c);
    	for(int i = 0; i < m; i++){
	    	if(i == b - 1){
	        	for(int j = 0; j < n; j++) printf("%lld ", a[c - 1][j]);
	        }
	    	if(i == c - 1){
		    	for(int j = 0; j < n; j++) printf("%lld ", a[b - 1][j]);
         	}
    	    if(i != (b - 1) && i != (c - 1)){
     	    	for(int j = 0; j < n; j++) printf("%lld ", a[i][j]);
	    	}
	    	printf("\n");
        }
	return 0;
}
