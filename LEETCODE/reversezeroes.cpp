#include <vector>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
int i=0;
int j=1;
       while (i<nums.size()-1 && nums[i]!=0){
        i++; 
       } 
     swap(nums[i],nums[j]);
        
       }

};

int main(){
    vector<int> nums={0,1,0,3,12};
    Solution s;
    s.moveZeroes(nums);
    return 0;
}