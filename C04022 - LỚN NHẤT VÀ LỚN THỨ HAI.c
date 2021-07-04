#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[1000];
	for( long long i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	
	for(long long i = 0; i < n; i++){
		for( int j = i + 1; j < n; j++){
			if(a[i] < a[j]){
				int c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
	for(int i = 0; i < n; i++){
		int max1 = a[0];
	int max2 = a[i];
	if(max2 < max1){
		printf("%lld %lld", max1, a[i]);
		break;
	}
	
	}

	
	return 0;
	
}
