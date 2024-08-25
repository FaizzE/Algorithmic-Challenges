#include<iostream>
using namespace std;
int main(){

    int arr[] = {-2,-1,0,1,3,6,8,11,12};
    int n = 8;
    int x = 14;

    int i = 0;
    int j = n-1;
    bool found = false;

    while(i < j)
    {
        if(arr[i] + arr[j] == x){
            found = true;
            break;
         }
         else if(arr[i] + arr[j] < x){
            i++;
         }else{
            j--;
         }
    }

    if(found ==true) cout << "Yes" << endl;
    else cout << "No" <<endl;


    return 0;
}