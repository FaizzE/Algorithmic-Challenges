#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={24,56,34,90,101,78};
    int n=6;
    int ans = INT_MIN;
        
    for(int i = 0; i < n; i++){
            if(arr[i]>ans){
                ans = arr[i];
     }
    //else{
    //     ans = arr[i-1];
    // }
}
    cout << ans;

}
