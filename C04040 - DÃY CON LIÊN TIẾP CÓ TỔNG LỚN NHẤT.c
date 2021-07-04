#include<stdio.h>
#include<math.h>

long long max(long long a, long long b){
	if(a < b) return b;
	return a;
}

void inraketqua(){ 
   	long long n;
   	scanf("%lld", &n);
   	long long a[n];
	for(long long i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	long long sum = 0, maxx = 0;
	for(long long i = 0; i < n; i++){
		sum += a[i];
		if(sum < 0) sum = 0; // neu khong tra sum ve 0 thi se lam mat di su lon nhat cua so tieo theo. vi du day -2 -7 199 4 -2// 199 moi dung chu k phai 199 - 7 - 2
		maxx = max(sum, maxx);
	}
	printf("%lld", maxx);
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
