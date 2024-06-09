#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j;
        string word;
        string result;
       int n=s.length();
       while(i<n){
         while (i<n && s[i]==' ') i++;
            if (i>=n)break;
         j=i+1;
  while(j<n &&  s[j]!=' ' )j++;
 word=s.substr(i,j);         
 if (result.length()==0 )
 result=word;
else 
    result= word +" " + result;  
      i=j+1; 
       }
  return result;
    }
};

