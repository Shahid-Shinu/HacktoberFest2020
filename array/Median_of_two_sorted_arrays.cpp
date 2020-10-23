#include <bits/stdc++.h>

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    int n = n1+n2;
    vector<int> a(n);
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(nums1[i]<=nums2[j])
            a[k++]=nums1[i++];
        else
            a[k++] = nums2[j++];
    }
    while(i<n1){
        a[k++]=nums1[i++];
    }
    while(j<n2){
         a[k++] = nums2[j++];
    }
    if(n&1)
        return a[n/2.0];
    else
        return (a[n/2]+a[n/2-1])/2.0;
}

int main(){
 vector<int> nums1 = {1,3};
 vector<int> nums2 = {2};
 cout<<findMedianSortedArrays(nums1,nums2);  //Expected 2.0
}

//Input: nums1 = [1,2], nums2 = [3,4]
//Output: 2.50000
//Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
