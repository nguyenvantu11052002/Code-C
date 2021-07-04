#include<stdio.h>
#include<math.h>

void inraketqua(){
	int n;
	scanf("%d", &n);
	int a[100005];
	for(int i = 0;i < n; i++){
		scanf("%d", &a[i]);
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] == a[j]) count++;
	    }
	    if(count > 0){
	    	printf("%d", a[i]);
	    	break;
		}
	}
	if(count == 0) printf("NO");
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
