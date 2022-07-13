#include <iostream>
#include <cstring>

using namespace std;

char* st(char* s, int n){
   char* s1 = s + (strlen(s) - n);
   int len = strlen(s);
   int i = 0;

 while(n){
	 *(s - n) = s1[i];
	 ++i;
     --n;
 }
   s = s - i;
   s[len] = '\0';

  return s;

}
int main(){
 int n = 2;
 char str[] = "Hello";


cout << st(str, n) << endl; 
}
