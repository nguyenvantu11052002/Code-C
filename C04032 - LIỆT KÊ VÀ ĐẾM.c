#include<stdio.h>
#include<math.h>

long long sokhonggiam(long long x){
	int z = 10;
	while(x > 0){
		int d = x % 10;
		x = x/10;
		if(d <= z) z = d;
		else return 0;
	}
	return 1;
}

void doicho(long long *a, long long *b){
	long long c = *a;
	        *a = *b;
           	*b = c;
}

long long timracacsotangmoihoacdemsoxuathiencu(long long a[], long long n, long long x){ // x la sodangxet
	for(int i = 0; i < n; i++){ 
		if(a[i] == x) return i;
	}
	return -1;
}

void sapxepgiamdan(long long a[], long long b[], long long n){
	for(long long i = 0; i < n; i++){
		for(long long j = i + 1; j < n; j++){
			if(b[i] < b[j]){
				doicho(&b[i], &b[j]);
				doicho(&a[i], &a[j]);
			}
		}
	}
}

void inrasaukhidasapxep(long long a[], long long b[], long long n){
	for(int i = 0; i < n; i++){
		printf("%lld %lld\n", a[i], b[i]);
	}
}

int main(){
	long long x, n = 0; // x la so dang xet, a[n] de luu cac sokhonggiam, b[n] de dem so lan xuat hien cac so khong giam
	long long a[100000], b[100000] = {0};
	while(scanf("%lld", &x) != - 1){
		if(sokhonggiam(x)){
			long long vt = timracacsotangmoihoacdemsoxuathiencu(a, n, x);
			if(vt == -1){ // vt = - 1 tuc la so nay xuat hien lan dau tien khong trung so nao ca.
				a[n] = x;
				b[n] = 1;
				n++; // so xuat hien lan dau moi dem n len , tai vi neu so da xuat hien roi thi khong can luu lai vao a[n] , thua nhieu cap a[n] = 0, b[n] = 0;
			}
			else b[vt]++;
		}
	} // het while thi da thu duoc tat ca a[n] b[n]
	sapxepgiamdan(a, b, n);
	inrasaukhidasapxep(a, b, n);
	return 0;
}
