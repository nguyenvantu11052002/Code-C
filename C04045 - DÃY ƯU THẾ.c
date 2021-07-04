#include<stdio.h>
#include<math.h>
#include<string.h>

void inraketqua(){
	char s[1000];
	gets(s);
	int sodangxet = 0;
	int sosochan = 0, sosole = 0;
	int sophantucuaday = 1; //vi s[cuoicung] la '0' chu k phai dau cach, dem so phantu cua day bang dau cach.
	for(int i = 0; i < strlen(s); i++){
		if(s[i] != ' '){
			sodangxet = sodangxet * 10 + (s[i] - '0');
		}
		else{
			sophantucuaday++;
			if(sodangxet % 2 == 0) sosochan++; // so cuoi cung chua duoc danh gia vi ki tu cuoi la '0' chu khong phai ' ', nen khong thuc hien else
			else sosole++;
			sodangxet = 0;
		}
	}
	if(sodangxet % 2 == 0) sosochan++; // danh gia so cuoi cung
	else sosole++;
	if((sophantucuaday % 2 == 0 && sosochan > sosole) || (sophantucuaday % 2 != 0 && sosole > sosochan)) printf("YES");
	else printf("NO"); 
}

int main(){
	int k;
	scanf("%d\n", &k); // khi bai nhap xau thi phai scanf %d\n;
	while(k--){
		inraketqua();
		printf("\n");
	}
	return 0;
}
