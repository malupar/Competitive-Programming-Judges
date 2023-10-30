#include <iostream>
using namespace std;

template<typename T>

class BinarySearch{
    public:
        int iterative_binary_search(int l, int r, T arr[], T target) {
            int ans = -1;
            while (l <= r) {
                int mid = (r+l)/2;
                if (arr[mid] <= target) {
                    l = mid+1;
                    ans = mid;
                }
                else r = mid-1;
            }
            return ans;
        }
        int recursive_binary_search(int l, int r, T arr[], T target) {
            if (l > r) return -1;
            if (l == r) return arr[l] == target ? l : -1;
            int mid = (r+l)/2;
            if (arr[mid] <= target) 
                return max(mid, recursive_binary_search(mid+1,r,arr,target));
            return recursive_binary_search(l, mid-1, arr, target);
        }
};