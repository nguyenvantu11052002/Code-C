#include<stdio.h>
#include<math.h>

int UCLN(int a, int b){
	if(a % b == 0) return b;
	return UCLN(b, a % b);
}

void inraketqua(int t){
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("Case #%d:\n", t);
	//in ra rut gon sau do quy dong 2 phan so
    int	arg = a/UCLN(a, b);
    int arg1 = arg;
	int brg = b/UCLN(a, b);
	int brg1 = brg;
	int crg = c/UCLN(c, d);
	int drg = d/UCLN(c, d);
	int BCNN = (brg*drg)/UCLN(brg, drg);
	int soquydong1 = BCNN/brg;
	int a1 = arg*soquydong1;
	int soquydong2 = BCNN/drg;
	int c1 = crg*soquydong2;
	printf("%d/%d %d/%d\n", a1, BCNN, c1, BCNN);
	// in ra tinh tong 2 phan so va rut gon
	int tuso = a*d + c*b;
	int mauso = b*d;
	int intuso = tuso/UCLN(tuso, mauso);
	int inmauso = mauso/UCLN(tuso, mauso);
	printf("%d/%d\n", intuso, inmauso);
	// in ra thuong 2 phan so va rut gon
	int tuso1 = a*d;
	int mauso1 = b*c;
	int intuso1 = tuso1/UCLN(tuso1, mauso1);
	int inmauso1 = mauso1/UCLN(tuso1, mauso1);
	printf("%d/%d\n", intuso1, inmauso1);
}

int main(){
	int T;
	scanf("%d", &T);
	for(int t = 1; t <= T; t++){
		inraketqua(t);
	}
	return 0;
}
