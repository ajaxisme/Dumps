//Reverse a C-Style String
#include<stdio.h>

int main(){
	char s[100], temp;
	scanf("%s", s);
	int i=0, j, len=0;
	while(s[i++])
		len++;

	for(i=0, j=len-1;i<j;i++, j--){
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

	printf("%s", s);

	return 0;
}
