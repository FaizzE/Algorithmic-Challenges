#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
    int result[m+n];
    int i = 0;  
    int j = 0;
    int k = 0; // will help us to iterate result

    while (i < m and j < n )
    {
        if(nums1[i] < nums2[j])
        {
            result[k] = nums1[i];
            i++;
            k++;
        }
        else{
        result[k]=nums2[j];
        j++;
        k++;
      }
    }
    while(i < m){
        result[k] = nums1[i];
        i++;
        k++;
    }
    while( j < n){
        result[k] = nums2[j];
        j++;
        k++;
    }
        
    }

int main()
{
    int arr1[] = {1,6,7,10};
    int arr2[] = {0,1,3,8,11,12,15,18};

    int result[m+n];

    int m = 4;
    int n = 8;

    merge(arr1,arr2);

    for(int i=0; i <(m+n); i++){
        cout << result[i] <<" ";
    }


    return 0;
}