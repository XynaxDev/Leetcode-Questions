class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n; // this case handles when k > n
        // reverseing first n - k elements
        reverseArray(arr, 0, n - k - 1);
        // reversing last k elements
        reverseArray(arr, n - k, n - 1);
        // reverse whole array
        reverseArray(arr, 0, n - 1);
    }
    void reverseArray(vector<int>& arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
};