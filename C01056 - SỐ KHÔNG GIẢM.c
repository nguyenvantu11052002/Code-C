#include<stdio.h>
#include<math.h>

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		long long n , kiemtra = 9, count = 0;
		scanf("%lld", &n);
		while(n > 0){
			int d = n % 10;
			n = n/10;
			if(d <= kiemtra) kiemtra = d;
			else count++;
		}
		if(count == 0) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
