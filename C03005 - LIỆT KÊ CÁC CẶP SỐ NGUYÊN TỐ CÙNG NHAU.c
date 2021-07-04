#include<stdio.h>
#include<math.h>

int UCLN(int a, int b){
	if(a % b == 0) return b;
	return UCLN(b, a % b);
}

void inracaccapngtocungnhau(){
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = a; i <= b; i++){
		for(int j = i + 1; j <= b; j++){
			if(UCLN(i, j) == 1) printf("(%d,%d)\n", i, j);
		}
	}
}

int main(){
	inracaccapngtocungnhau();
	return 0;
}
