#include<iostream>
#include<vector>
using namespace std;

// Sort an Array consisting of only 0s and 1s.

void sortZeroesAndOnes(vector<int> &v){
        
        int zeroes_count = 0;
        for(int elements:v){
            if(elements==0){
                zeroes_count++;
            }
        }

        for(int i = 0; i <v.size();i++){
            if(i < zeroes_count){
                v[i]=0;
            }
            else{
                v[i]=1;
            }
        }
    }


int main()

{
   int n;
   cout << "Enter the size of vector :" << endl;
   cin >> n;

  vector<int> vec;
  int elements;
  cout << "Enter the elements of vector : " << endl;

  
  for(int idx = 0 ; idx < n; idx++){
  cin >> elements;
  vec.push_back(elements);

  }

//   cout << "Before Sorting :-" << endl;
//   for(int i = 0; i <vec.size(); i++){
//     cout << vec[i] << " ";
//   }
  sortZeroesAndOnes(vec);

//   cout << "After Sorting :-" << endl;

  for(int i = 0; i < n; i++){
    cout << vec[i] <<" ";
  }
  cout << endl;


}