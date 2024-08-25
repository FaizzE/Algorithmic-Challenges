#include<bits/stdc++.h>
using namespace std;

// Sort an Array consisting of only 0s and 1s.

void sortZeroesAndOnes(vector<int> &vec)
{
    int left_ptr = 0;
    int right_ptr = vec.size() -1;

    while(left_ptr < right_ptr){
        if(vec[left_ptr]==1 and vec[right_ptr]==0){
            vec[left_ptr ++]= 0;
            vec[right_ptr --]=1;
        }

        if(vec[left_ptr]==0){
            left_ptr ++;
        }

        if(vec[right_ptr]==1){
            right_ptr --;
        }
    }

    return;
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

  sortZeroesAndOnes(vec);

  for(int i = 0; i < n; i++){
    cout << vec[i] <<" ";
  }
  cout << endl;


}