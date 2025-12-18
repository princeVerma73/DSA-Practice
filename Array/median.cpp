// LeetCode 1: Median of Two Sorted Arrays
// Approach: firstly merged then took median
// Time: O((m + n) log(m + n)), Space: O(m + n)


    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int m = arr1.size();
        int n = arr2.size();
        int p = m + n; //mergedSize
        vector<int>merged(p);
  // copying array 
        for (int i = 0; i < m;i++) {
        merged[i] = arr1[i];
        }
        for (int i = 0; i < n;i++) {
        merged[m + i] = arr2[i];
        }
        sort(merged.begin(), merged.end());
             //even
        if(p%2==0){
           return (merged[p/2]+merged[(p/2)-1])/2.0 ;
        }
        else return merged[p/2];

    }