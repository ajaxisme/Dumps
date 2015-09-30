#include<stdio.h>

int main(){
char a[] = "Lets remove the spaces";
char b[30];
int i, j=0;
for(i=0;a[i];i++){
	if(a[i] == ' '){
		b[j++] = '%';
		b[j++] = '2';
		b[j++] = '0';	
		}
	else
		b[j++] = a[i];
}

b[j] = '\0';

printf("%s", b);
return 0;
}
