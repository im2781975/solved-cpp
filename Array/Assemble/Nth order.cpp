// find the k-th smallest element within a specified subarray of an array, given a set of queries.
#include <bits/stdc++.h>
using namespace std;
void kth_elem(vector<int> arr, vector<int> q){
    q[0] is The ending index & q[0] is the starting idx of the subarray (1-based index).
    if (q[1] > arr.size()){
        cout<<"List index is out of range"<<endl;
        return;
    }
    else if ((q[1]-q[0]+1) < q[2]){
        cout<<"Kth element is not present"<<endl;
        return;
    }
      else{
          auto first = arr.begin() + q[0]-1;
        auto last = arr.begin() + q[1];
        vector<int> temp(first, last);
        sort(temp.begin(), temp.end());
        cout<<temp[q[2]-1]<<endl;
    }
}
 
int main(){
    vector<int> arr = {3, 2, 5, 1, 8, 9};
    vector<int> query1 = {2, 5, 2};
    kth_elem(arr, query1);
    vector<int> query2 = {1, 6, 4};
    kth_elem(arr, query2);
      return 0;
}
