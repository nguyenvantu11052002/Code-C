#include<stdio.h>
#include<math.h>

void inraketqua(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = 0; i < a; i++){ // bai nay nen de i j chay tu 0 boi vi ABCD co tinh lien tuc khi printf
		for(int j = 0; j < b; j++){
			if(i + j < b) printf("%c", i + j + 'A');
			else printf("%c", b - j -1 + 'A');
		}
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
