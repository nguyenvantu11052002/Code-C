#include<stdio.h>
#include<string.h>

long long chuyencharsanglonglong(char s[25]){
     long long res = 0;
	 for(int i = 0; i < strlen(s); i++){
	 	res = res*10 + s[i] - '0';
	 }	
	 return res;
}

long long minsum(char s[25]){
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == '6') s[i] = '5';
	}
	return chuyencharsanglonglong(s);
}
long long maxsum(char s[25]){
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == '5') s[i] = '6';
	}
	return chuyencharsanglonglong(s);
}

void inratongminsumvamaxsum(){
	char s1[25], s2[25];
	scanf("%s %s", s1, s2);
	printf("%lld %lld", minsum(s1) + minsum(s2), maxsum(s1) + maxsum(s2));
}

int main(){
	int k;
	scanf("%d", &k);
	while(k--){
		inratongminsumvamaxsum();
		printf("\n");
	}
	return 0;
}
