//Determine if a string has all unique characters
#include<iostream>

using namespace std;

int main(){
	char s[100];
	cin>>s;
	int i, ascii[256] = {0};
	for(i=0;s[i];i++)
		ascii[s[i]]++;

	for(i=0;i<256;i++){
		if(ascii[i] > 1) {
			cout<<"Not all unique";
			return 0;
		}
	}

	cout<<"All unique";

	return 0;
}
