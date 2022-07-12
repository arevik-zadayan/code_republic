#include <iostream>
#include <cstring>

char* reverse(char * str){

		for(int i = 0 ;i<strlen(str)/2;i++){
			str[i] =str[i] ^  str[strlen(str)-1-i];
			str[strlen(str)-1-i] = str[strlen(str)-1-i] ^ str[i];
			str[i] =str[i] ^  str[strlen(str)-1-i];
		}
		return str;

}


int main(){
        char str[]="Hello";
		std::cout<<reverse(str)<<std::endl; 
}
