#include<stdio.h>
#include<math.h>

long long UCLN(long long a, long long b){
	if(a % b == 0) return b;
	return UCLN(b, a % b);
}

void inraketqua(){
	long long a, b, c, d;
	scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
	if(UCLN(a, b) == UCLN(c, d)) printf("YES");
	else printf("NO");
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
    	printf("\n");
	}
	return 0;
}
