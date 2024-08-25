#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={24,56,34,90,45,78};
    int n=6;
    int ans = INT_MAX;
        
    for(int i = 0; i < n; i++){
            if(arr[i]<ans){
                ans = arr[i];
    }
}
    cout << ans;

}
