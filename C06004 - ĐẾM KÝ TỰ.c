#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	char s[1000];
	gets(s);
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	for(int i = 0; i < strlen(s); i++){
		if((s[i] >= 'A' && s[i] <= 'Z')||(s[i]>='a'&&s[i]<='z')){
			count1++;
		}
		else{
			if(s[i] >= '0' && s[i] <= '9'){
			    count2++;
		    }	
	    	else{
		    	count3++;
		    }	
    	}
   	}
	printf("%d %d %d", count1, count2, count3);
	return 0;
}
