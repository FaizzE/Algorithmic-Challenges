#include<bits/stdc++.h>
using namespace std;

// given an array of intrgers 'a' move all the even integers at beginning of the array by all the intrgers. the relative order of odd or even integers does not matter. return any array that satisfy the condition.

void sortByParity(vector<int>&vec)
{
    int left_ptr = 0;
    int right_ptr = vec.size()-1;

    while(left_ptr < right_ptr){
        if(vec[left_ptr]%2==1 && vec[right_ptr]%2==0){
            swap(vec[left_ptr], vec[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if(vec[left_ptr]%2==0){
            left_ptr++;
        }
        if(vec[right_ptr]%2==1){
            right_ptr--;
        }
    }
    return;
}

int main()
{
    int n;
    cout << "enter size : "<< endl;
    cin>>n;

    vector<int> v;
    int elements;
    cout << "Enter the elements of vector : " << endl;

    for(int i = 0; i < n; i ++){
        cin >> elements;
        v.push_back(elements);
    }

    sortByParity(v);

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}