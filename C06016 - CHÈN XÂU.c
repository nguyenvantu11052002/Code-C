#include<stdio.h>
#include<string.h>

int main(){
	char s1[1000];
	gets(s1);
    char s2[1000];
	gets(s2);
	int p;
	scanf("%d", &p);
	int diemchen = p - 1;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for(int i = 0; i < len1 + len2; i++){
		if(i < diemchen){
			printf("%c", s1[i]);
		}
		else{
			if(i >= diemchen && i < diemchen + len2){
				printf("%c", s2[i - diemchen]);
			}
			else{
				printf("%c", s1[i - len2]);
			}
		}
	}
	return 0;
}
