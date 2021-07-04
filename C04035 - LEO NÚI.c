#include<stdio.h>
#include<math.h>

int max(int a, int b){
	if(a >= b) return a;
	if(a < b) return b;
}

int min(int a, int b){
	if(a <= b) return a;
	if(a > b) return b;
}

int main(){
	int k;
	scanf("%d", &k);
	int timelenmin = 50000, timexuongmin = 50000;
	int tongtimelen = 0, tongtimexuong = 0;
	for(int i = 1; i <= k; i++){
		int a, b;
		scanf("%d%d", &a, &b);
		tongtimelen += a;
		tongtimexuong += b;
		timelenmin = min(timelenmin, a);
		timexuongmin = min(timexuongmin, b);
	}
	int TH1 = tongtimelen + timexuongmin;
	int TH2 = tongtimexuong + timelenmin;
	printf("%d", max(TH1, TH2));
	return 0;
}
