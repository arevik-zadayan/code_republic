#include <iostream>
#include <cstring>

char* strcat(char* s1, char* s2){
	
	int	i = 0;
	while(*(s2 + i) != '\0'){
 
			s1[strlen(s1)]=s2[i];
			s1[strlen(s1)+1] = '\0';
			++i;
		}

	return s1;

}

int main(){

		char x[20]= "Hello";
		char y[]= "aaa";
		std::cout << strcat(x,y)<<std::endl;
}
