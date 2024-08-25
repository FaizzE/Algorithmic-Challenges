#include<bits/stdc++.h>
using namespace std;

/* Check if we can partition the array into two subarrays with
equal sum. More faormally, check that the prefix sum of a part 
of the array is equal to the suffix sum of rest of the array. */

 // 6 2 4 3 1
 // total_sum= 16
 // prefix_sum = 6 + 2 = 8
 //suffix_sum = 8

 
bool checkPrefixSuffixSum(vector <int> &vec)
{
    int total_sum = 0;                 
    for(int i = 0; i < vec.size();i++){    
        total_sum+=vec[i];
    }

    // prefix sum                      
                                                           
    
    int prefix_sum = 0;
    for(int i = 0; i < vec.size();i++){       
        prefix_sum+=vec[i];

        int suffix_sum = total_sum - prefix_sum;

        if(suffix_sum == prefix_sum){
            return true;
        }
    }

    return false;

}

int main()
{
    int n;
    cin >> n;

    vector<int>v;
    int ele;

    for(int i = 0; i < n; i++){
        cin >> ele;
        v.push_back(ele);
    }

    cout << checkPrefixSuffixSum(v);



    return 0;
}
