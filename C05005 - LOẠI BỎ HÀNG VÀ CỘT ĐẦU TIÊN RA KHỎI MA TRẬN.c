#include<stdio.h>
#include<math.h>

int main(){
	int k, u = 1;
	scanf("%d", &k);
	while(k--){
		int m, n;
   	    scanf("%d%d", &m, &n);
     	int a[m][n];
     	for(int i = 0; i < m; i++){
   	    	for(int j = 0; j < n; j++){
    	    	scanf("%d", &a[i][j]);
	    	}
	    }
    	printf("Test %d:\n", u);
    	for(int i = 1; i < m; i++){
	    	for(int j = 1; j < n; j++){
		    	printf("%d ", a[i][j]);
	     	}
		printf("\n");
    	}
    	u++;
    }
	return 0;
}
