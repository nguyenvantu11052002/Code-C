#include<stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	int u = 1;
	while(k--){
		int n;
		scanf("%d", &n);
		int a[1000000], b[1000000] = {0};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		printf("Test %d:\n", u);
		for(int i = 0; i < n; i++){
			if(b[a[i]] > 0){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
			  	b[a[i]] = 0;
			}
    	}
    	u++;
		printf("\n");
	}
	return 0;
}
