 #include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <vector>
 class Solution {
public:
    #include <vector>

    int search(std::vector<int>& nums, int target) {
         int min , max , mid;
        min=0;  
        max=nums.size();
       while( min<=max )
       {
           for(int i=0; i<=max ; i++ ){
               mid=max+min/2;
               if(nums[i]==target) {
                 return mid;}
                 else if ( nums[i]<=target){
                 max=mid-1;}
                 else if (nums[i]>=target) {
                 min=mid+1;}
                 else 
                 return -1;
       }   
    }
}
 };