#include<bits/stdc++.h>
using namespace std;

/* Given an integers array 'a', return the prefix sum/running sum in the array
 without creating a new array */

    void runingSum(vector<int>&vec)  
    {
        for(int i = 1; i < vec.size(); i++){
            vec[i] = vec[i-1]+vec[i];
        }
        return;
    }

int main()
{
    int n;
    cout << "Enter size :"<<endl;
    cin>>n;

    vector<int> vec;
    int ele;
    cout << "Enter element of Vec :"<<endl;
    
    for(int i = 0; i < n; i++){
        cin >> ele;
        vec.push_back(ele);
    }

    runingSum(vec);

    for(int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }
    cout << endl;


    return 0;
}