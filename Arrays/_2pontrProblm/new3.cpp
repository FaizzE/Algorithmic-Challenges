#include<bits/stdc++.h>
using namespace std;

    void sortZeroesAndOnes(vector<int> &vec)
    {
        int zeroes_count = 0;
        for(int ele : vec){
            if(ele == 0){
                zeroes_count++;
            }
        }

        for(int i = 0; i <vec.size(); i++){
            if( i < zeroes_count){
                vec[i]=0;
            }
            else {
                vec[i]=1;
            }
            
        }
    }

int main()
{
    int n ;
    cout << "Enter the size of vec :"<< endl;
    cin >> n;

    


     vector <int>v;
     int elements;
     cout << "Enetr teh ele. of Vect :" << endl;

    for(int i = 0; i < n; i++){
        cin >> elements;
        v.push_back(elements);

    }

        sortZeroesAndOnes(v);

    for(int i = 0; i < n; i ++){
        cout << v[i] << " ";
     }

        
    }


   
