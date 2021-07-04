#include<stdio.h>
#include<math.h>

int max(int a, int b){
	if(a > b) return a;
	return b;
}

void inraketqua(){
	int a, b, c, d, e, f, g, h;
	scanf("%d%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g, &h);
	int x[4] = {a, c, e, g};
	int y[4] = {b, d, f, h};
	int maxhoanhdo = 0;
	for(int i = 0; i < 4; i++){
		maxhoanhdo = max(maxhoanhdo, x[i]);
	}
	int maxtungdo = 0;
	for(int i = 0; i < 4; i++){
		maxtungdo = max(maxtungdo, y[i]);
	}
	int kchoanhdomax = 0;
	for(int i = 0; i < 4; i++){
		kchoanhdomax = max(kchoanhdomax, maxhoanhdo - x[i]);
	}
	int kctungdomax = 0;
	for(int i = 0; i < 4; i++){
		kctungdomax = max(kctungdomax, maxtungdo - y[i]);
	}
	int canhhinhvuong = max(kchoanhdomax, kctungdomax);
	printf("%d", canhhinhvuong * canhhinhvuong);
}

int main(){
	inraketqua();
	return 0;
}
