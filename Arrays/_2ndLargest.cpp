#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
//    int seclarge = arr[0];

//    for(int i = 0; i < n; i++){
//         if(arr[i]>seclarge){
//             seclarge = arr[i];
//         }
//    }

    sort(arr,arr+n);

    for(int i = 0; i < n; i++){
        if(arr[n-1]==arr[n-1-1]){
            return arr[3];
        }
    }
    return arr[n-1];

}
int main(){
    int arr[]={4,8,6,3,9};
    int n = 5;
    
   cout << largest(arr,n);
}