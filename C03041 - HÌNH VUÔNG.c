#include<stdio.h>
#include<math.h>

void inraketqua(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
    if(c - a == d - b) printf("YES");
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
