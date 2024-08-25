#include<bits/stdc++.h>   
using namespace std;

// Time Complexity: O(N*log(N)) 
//Auxiliary Space: O(1)

bool arrEqualorNot(int arr1[], int arr2[], int x , int y)
{
    if (x!=y){
        return false;
    }

    sort(arr1, arr1+x);
    sort(arr2, arr2+y);

    for(int i = 0; i < x; i++){
        if (arr1[i] != arr2[i]){
            return false;
        }
    }

    return true;
}

int main(){

    int arr1[] = {3,5,2,5,2};
    int arr2[] = {2,3,5,5,2};

    int x = sizeof(arr1) / sizeof(int);
    int y = sizeof(arr2) / sizeof(int);


    if(arrEqualorNot(arr1,arr2,x,y))
        cout << "Yes";
    else
        cout << "No";


    return 0;
}