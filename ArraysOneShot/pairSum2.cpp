#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]= {1,2,3,7,9,2,8};
    int n = 7;
    int x = 16;

    int i = 0;
    int j = n-1;
    bool found = false;

    while( i < j)
    {
        if(arr[i]+arr[j] == x){
            found = true;
            break;
        }
        else if(arr[i] + arr[j] < x){
            i++;
        }
        else{
            j--;
        }
    }
    if(found == true) cout << "Yes .";
    else cout << "No.";

    return 0;
}