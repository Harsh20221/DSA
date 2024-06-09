#include <iostream>
using namespace std;
 string reverseVowels(string s) {
        int i=0;
        char temp; 
        int j=s.length()-1;
string final;
        for (i=0; i<j ; i++ , j-- ){
            temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
return s ;
    }


int main(){
    string s="hello";
    string final=reverseVowels(s);
    std::cout<<final;
    return 0;
}