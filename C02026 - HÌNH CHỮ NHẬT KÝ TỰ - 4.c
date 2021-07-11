#include<stdio.h>
#include<math.h>

void inraketqua(){
	int a, b;
	scanf("%d%d", &a, &b);
    // bai nay 4 thi DCBA 3 thi CBA , cac tu dau tien cua moi dong	
	for(int i = a; i >= 1; i--){
		if(i > b){
			for(int j = 1; j <= b; j++) printf("%c", 64 + b);
			printf("\n");
		}
		else{
			for(int j = i; j <= b; j++) printf("%c", 64 + j);
			for(int j = 1; j < i; j++) printf("%c", 64 + b);
			printf("\n");
		}
	}
}

int main(){
	inraketqua();
	return 0;
}
