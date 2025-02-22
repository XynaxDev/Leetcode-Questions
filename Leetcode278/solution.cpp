#include <bits/stdc++.h>
using namespace std;
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        int  ans = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // if (isBadVersion(mid)) { 
            //     ans = mid;
            //     right = mid - 1; // uncomment this commented line of codes
            // }
            // else {
            //     left = mid + 1;
            // }
        }
        return ans;
    }
};