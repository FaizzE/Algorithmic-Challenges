#include<bits/stdc++.h>
using namespace std;

void sortZeroesAndones(vector<int> &vec)
{
    int zeroes_count = 0;
    for(int ele:vec){
        if(ele == 0){
            zeroes_count ++;
        }
    }

    for(int i = 0; i < vec.size(); i++){
        if(i < zeroes_count){
            vec[i]=0;
        }
        else{
            vec[i]=1;
        }
    }
}

int main()
{
    // int arr[6]={1,0,1,1,0,0};
    // int n = 6;

    
    int n;
    cout << "Enter size :"<< endl;
    cin >> n;

    vector<int> vec;

    int elements;
    cout << "Enter the Elements : "<< endl;

    for(int i = 0; i < n; i++){
        cin >> elements;
        vec.push_back(elements);
    }

    sortZeroesAndones(vec);

    for(int i = 0; i < n; i++){
        cout << vec[i] <<" ";
    }
    cout << endl;

    
    
    return 0;
}