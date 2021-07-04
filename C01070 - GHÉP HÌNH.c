#include<stdio.h>
#include<math.h>

long long canhhinhvuong(long long n){
	long long y = sqrt(n);
	if(y * y == n) return y;
	return 0;
}

long long doicho(long long *a, long long *b){
	long long c = *a;
			*a = *b;
			*b = c;
}

void inraketqua(){
	long long a, b, c, d, e, f;
	scanf("%lld%lld%lld%lld%lld%lld", &a, &b, &c, &d, &e, &f);
	long long n = a*b + c*d + e*f;
	if(canhhinhvuong(n) == 0){
		printf("NO");
		return;
	}
	else{
		long long y = canhhinhvuong(n);
		if(a > b) doicho(&a, &b);											// a    b
		if(c > d) doicho(&c, &d);											// c    d
		if(e > f) doicho(&e, &f);											// e    f
		if(b == d && d == f && f == y){
			printf("YES"); 
			return;
		}
		else{
			if(d == y){
				doicho(&d, &b);
				doicho(&c, &a);
			}
			if(f == y){
				doicho(&f, &b);
				doicho(&e, &a);
			}
			if(b == y){
			    a = y - a;
				if(c == a && e == a || c == a && f == a || d == a && e == a || d == a && f == a) printf("YES");
				else printf("NO");
			}
			else printf("NO");
		}
	} 
}

int main(){
	inraketqua();
	return 0;
}
