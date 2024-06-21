#include<vector>
#include<algorithm> // Include the <algorithm> header for the sort function
#include<iostream>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {    
        int j; int k=0; int L= nums1.size()-1;
        if(nums1[L]==0){
            k=1;
        }
        for( j=0;j<nums2.size();j++){
            nums1.push_back(nums2[j]);
        } 
        sort(nums1.begin(),nums1.end());
        if(k==1){
            nums1.erase(remove(nums1.begin(), nums1.end(), 0), nums1.end()); // Use erase-remove idiom to remove zeros
        }
    }
};