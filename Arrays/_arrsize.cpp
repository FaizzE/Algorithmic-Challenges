#include<bits/stdc++.h>
using namespace std;

void sort_arr(int arr[],int n)
{
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] < arr[i-1]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main()
{
    int arr[6] = {2,0,2,1,1,0};
    int n = 6;

    sort_arr(arr,n);
}