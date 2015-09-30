//Check for anagrams
#include<stdio.h>
#include<string.h>

int main(){
	char a[20], b[20];
	int ascii[256] = {0};
	int i;
	scanf("%s", a);
	scanf("%s", b);
	if(strlen(a) != strlen(b)){
		printf("Not an anagram");
		return 0;
	}
	for(i=0;a[i];i++)
		ascii[a[i]]++;

	for(i=0;b[i];i++)
		ascii[b[i]]--;

	for(i=0;i<256;i++){
		if(ascii[i] != 0){
			printf("Not an anagram\n");
			break;
		}
	}	
	printf("Anagram\n");
	return 0;
}
