#include<stdio.h>
#include<string.h>

void inraketqua(int n){
	char a[205], b[205], c[410];
	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);
	int d = 0; // d la so lan thuc hien de ra duoc xau s12
	while(d < 50){  //cai nay cung k biet tai sao, hoi hung
		d++; // vuong return o duoi nen de d++ o vi tri nay cho de
		char res[410]; // voi moi mot d deu can so sanh 2 xau o dong 18 nen mang res phai dc reset nen trong while
		int m = 0;
		for(int i = 0; i < n; i++){
			res[m++] = b[i];
			res[m++] = a[i];
		}
		res[m] = '\0';
		if(strcmp(res, c) == 0){
			printf("%d\n", d);
			return;
		}
		// khong can else vi co return o tren
		for(int i = 0; i < n; i++){
	    	a[i] = res[i];
	    	b[i] = res[n + i];
		}
	}
	printf("-1\n");	
}

int main(){
	while(1){
		int n;
		scanf("%d", &n);
		if(n == 0) break;
		inraketqua(n);
	}
	return 0;
}
