#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;

    int arr[]={5,10,15,20,26};
    int n = 5;


    // for(int i =0; i < n; i++){
    //     cin >> arr[i];
    // }
    int x = 10;
    //cin>>x;

    int i = 0;
    int j = 1;
    bool found = false;

    while( i < n and j<n)
    {
        if(abs(arr[i]-arr[j]) == x)
        {
            found = true;
            break;
        }
        else if(abs(arr[i]-arr[j]) < x)
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    if(found == true ) cout << "Yes";
    else cout <<"No";





    return 0;
}