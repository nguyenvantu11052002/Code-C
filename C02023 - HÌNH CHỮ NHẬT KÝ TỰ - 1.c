#include<stdio.h>
#include<math.h>

void inraketqua(){
	int a, b, c;
	scanf("%d%d", &a, &b);
	if(a >= b) c = a + 96;
	else c = b + 96;
	for(int i = 0; i < a; i++){
		for(int j = 0; j <= i && j < b; j++) printf("%c", c - j);
		for(int j = i + 1; j < b; j++) printf("%c", c - i);
		printf("\n");
	}
}

int main(){
	inraketqua();
	return 0;
}
