#include <vector>
#include <set> // Add this line to include the <set> header file
using namespace std;
#include <iostream>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::set<int> s; // Add the std:: prefix before the set keyword
        int k=0; int j=0; vector <int> clearset;
        int n = nums.size(); vector<int> ccheckarray; int counter=0;
        int majority = (n/2)+0.0000001;int finalred;
          for (int i = 0; i < n; i++) { 
 
        // insert into set 
        s.insert(nums[i]);
     
    } 
    clearset.assign(s.begin(),s.end()); 
    while(counter < majority){
    for (k=0; k<nums.size();k++ ){
        if(clearset[j]==nums[k]){
            counter++;
        }
    }
   if (k==nums.size() && counter < majority){
    k=0; counter=0; j++;
   } 
   else if ( counter>=majority){
finalred= clearset[j];
   }
    }
return finalred;
    }
   

    
};

int main() {
    Solution s;
    vector<int> nums = {6,5,5};
    cout << s.majorityElement(nums) << endl;
    return 0;
}