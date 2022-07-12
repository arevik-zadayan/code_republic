#include <iostream>

int f(int n)
{
	int number = 0;
	if(n==-1) return -1;
	if(n==0) return 0;
    if(n==1) return 1;
    number = f(n-1) + f(n-2);
    return number;
	}
int main(){

		std::cout<< f(8)<< std::endl;

}

