#include<stdio.h>
#include<math.h>

int songuyento(int p){
	if(p == 0 || p == 1){
		return 0;
	}
	for(int i = 2; i <= sqrt(p); i++){
		if(p % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int k;
	scanf("%d", &k);
	int u = 1;
	while(k--){
		int n;
		scanf("%d", &n);
		int a[100000], b[100000] = {0};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			b[a[i]]++;
		}
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] > a[j]){
					int c = a[i];
					a[i] = a[j];
					a[j] = c;
				}
			}
		}
		printf("Test %d:\n", u);
		for(int i = 0; i < n; i++){
			if(songuyento(a[i]) == 1 && b[a[i]] > 0){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] = 0;
			}
		}
		u++;
		printf("\n");
	}
}
