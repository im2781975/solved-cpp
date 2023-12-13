#include<bits/stdc++.h>
using namespace std;
void print(vector<int>vect)
{
    vector<int>unique,duplicate;
    for(int i=0; i<vect.size(); i++)
    {
        if(find(unique.begin(),unique.end(),vect[i])==unique.end())
        {
            unique.push_back(vect[i]);
        }
        else
        {
            duplicate.push_back(vect[i]);
        }
    }
    for(int i=0; i<unique.size(); i++)
    {
        cout<<unique[i]<<" ";
    }
}
void printDuplicates(int arr[], int n)
{
    unordered_set<int> intSet;
    unordered_set<int> duplicate;
 
    for (int i = 0; i < n; i++) {

        if (intSet.find(arr[i]) == intSet.end())
            intSet.insert(arr[i]);
 
        else
        duplicate.insert(arr[i]);
    }
 
    cout <<"Duplicate item are (Set): ";
    unordered_set<int>::iterator itr;
    for (itr = duplicate.begin(); itr != duplicate.end();
         itr++)
        cout << *itr << " ";
}
int main()
{
    int arr[]{1,2,3,2,5,7};
    int n=sizeof(arr)/ sizeof(arr[0]);
    vector<int>vect(arr,arr+n);
    printDuplicates(arr,n);
    cout <<"\nUnique item are (Vector): ";
    print(vect);
}
