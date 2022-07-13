#include <iostream>

char* strset(char* s, char ch){
 	int i =0;
	while(*(s+i) != '\0'){
		
		s[i] = ch;
		++i;

	}
	return s;

}
int main(){

		char x[] = "Hello";
		char y = 'a';
		std::cout<<strset(x,y)<<std::endl;

}
