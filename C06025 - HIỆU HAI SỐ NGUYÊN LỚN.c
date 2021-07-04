#include<stdio.h>
#include<string.h>

void doicho2xau(char a[], char b[]){
	char c[505];
	strcpy(c, a);
	strcpy(a, b);
	strcpy(b, c);
}

int Compare(char a[], char b[]){
	if(strlen(a) < strlen(b)) return -1;
	if(strlen(a) > strlen(b)) return 1;
	return strcmp(a, b); // theo thu tu tu dien, vi du a = 999, b = 888 thi a lon hon b nen return > 0. no chi so sanh tu dau tien nen phai co 2 dong tren . tuc la truong hop 2 xau dai bang nhau
} 

void inraketqua(){
	char a[505];
	char b[505];
	scanf("\n");
	gets(a);
	scanf("\n");
	gets(b);
	if(Compare(a, b) < 0) doicho2xau(a, b); // xau a bao gio cung la so lon hon
	
	int i = strlen(a) - 1; // strlen(a) la ki tu NULL roi, vi du strlen(a) = 5, thi res4 la ki tu cuoi
	int j = strlen(b) - 1;
	int n = i; // n == i voi xau a lon hon nen ti nua in ra res[n], mang res[n] la mang ketqua
	char res[505];
    res[n + 1] = '\0'; // den res n + 1 la het xau, mac du duoi khai bao tan 505, nhung den n + 1 khoang 500 la het
	int remember = 0;
	while(j >= 0){
		int digit = (a[i--] - '0') - (b[j--] - '0') - remember;
		if(digit < 0){
			digit += 10;
			remember = 1;
		}
		else remember = 0;
		res[n--] = digit % 10 + '0';
	}
	while(i >= 0){
		int digit = (a[i--] - '0') - remember; // truong hop 999999999999 remember = 1 thi cong nho den het xau a
		if(digit < 0){
			digit += 10;
			remember = 1;
		}
		else remember = 0;
		res[n--] = digit % 10 + '0';
	}
	int kiemtra = 0;
	for(int i = 0; i < strlen(a); i++){
		if(res[i] != '0' && kiemtra == 0) kiemtra = 1;
		if(kiemtra) printf("%c", res[i]);
	}
	printf("\n");
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inraketqua();
	}
	return 0;
}
