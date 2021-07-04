#include<stdio.h>
#include<math.h>

long long UCLN(long long a, long long b){
	if(a % b == 0) return b;
	return UCLN(b, a % b);
}

long long BCNN(long long a, long long b){
	if(a % b == 0) return a;
	return a*b/UCLN(a, b);
}

void inraUCLNvaBCNN(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	printf("%lld\n%lld", UCLN(a, b), BCNN(a, b));
}

int main(){
	inraUCLNvaBCNN();
	return 0;
}
