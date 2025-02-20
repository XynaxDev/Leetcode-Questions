#include <bits/stdc++.h>
using namespace std;
// Applied binary search as optimal approach

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxRangeOfEating = 0;
        int length = piles.size();

        for (int i = 0; i < length; i++) {
            if (piles[i] > maxRangeOfEating) {
                maxRangeOfEating = piles[i];
            }
        }

        int left = 1, right = maxRangeOfEating;

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (timeTakenToFinish(piles, mid) <= h) {
                right = mid;
            }
            else {
                left = mid + 1;
            }
        }
        return left;
    }

    long long timeTakenToFinish(vector<int>& piles, int hourly) {
        long long totalTime = 0;
        int length = piles.size();
        for (int i = 0; i < length; i++) {
            totalTime += (piles[i] + hourly - 1) / hourly;
        }
        return totalTime;
    }
};