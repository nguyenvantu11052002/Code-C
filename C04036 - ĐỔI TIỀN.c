#include<stdio.h>
#include<math.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int count = 0;
	int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	for(int i = 0; i < 10; i++){
		if(n >= a[i]){
			int z = n / a[i];
			count += z;
			n = n - z * a[i];
		}
		if(n == 0) break;
	}
	printf("%d", count);
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
