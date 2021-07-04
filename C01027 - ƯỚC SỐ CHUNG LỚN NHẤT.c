#include<stdio.h>
#include<math.h>
int UCLN(int a, int b){
	if(a % b == 0) return b;
	return UCLN(b, a % b);
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		int m, n;
		scanf("%d%d", &m, &n);
		printf("%d", UCLN(m,n));
		printf("\n");
	}
	return 0;
}
