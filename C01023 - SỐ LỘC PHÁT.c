#include<stdio.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		int n;
		scanf("%d", &n);
		int count1 = 0;
		while(n > 0){
			int d = n % 10;
			if(d != 0 && d != 6 && d != 8) count1++;
			n = n/10;	
		}
		if(count1 != 0) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
