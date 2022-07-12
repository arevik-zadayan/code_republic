#include <iostream>

int strlen(char* str){

	int length=0;

	for(int i = 0;;i++) {

	if(str[i]=='\0') {

		break;

		};
	length++;
	}
	return length;
}
int main(){

	char x[]= "hello Arevik";

	std::cout << strlen(x) << std::endl;
}

