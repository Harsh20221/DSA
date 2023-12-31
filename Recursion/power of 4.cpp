#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cmath> // Include the <cmath> header for pow function
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        for(n=0;n>=0;n++){
            if(pow(4,n)==0)
                return true;
        }
    }
};