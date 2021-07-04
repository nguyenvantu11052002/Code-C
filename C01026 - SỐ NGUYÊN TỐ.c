#include<stdio.h>
#include<math.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		int n;
		scanf("%d", &n);
		int kiemtra = 1;
		if(n < 2) printf("NO\n");
		else{
			for(int i = 2; i < sqrt(n); i++){
				if(n % i == 0) kiemtra = 0;
			}
		}
		if(kiemtra == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
