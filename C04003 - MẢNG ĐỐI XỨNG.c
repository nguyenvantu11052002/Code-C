#include<stdio.h>

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
		int count = 0;
		for(int i = 0; i < n; i++){
			if(a[i] != a[n-1-i]){
				printf("NO\n");
				count++;
				break;
			}	
     	}
     	if(count == 0){
     		printf("YES\n");
		 }
        }
        return 0;
    }
