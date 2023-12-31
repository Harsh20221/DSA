#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
  int rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> rotated(n);
    for (int i = 0; i < n; i++) {
      rotated[(i + k) % n] = nums[i];
    }
    for (int i = 0; i < n; i++) {
      nums[i] = rotated[i];
      cout << nums[i] << " ";
    }
    return 0;
  }
};