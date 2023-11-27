//Print leader array
#include<bits/stdc++.h>
using namespace std;
void printLeaders(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for ( j = i+1; j < size; j++)
        {
            if (arr[i] <=arr[j])
                break;
        }    
        if (j == size) 
        // the loop didn't break
            cout << arr[i] << " ";
  }
}
void printLeader(int arr[], int size)
{
    int max_from_right =  arr[size-1];
    //Rightmost element is always leader
    cout << max_from_right << " ";
    for (int i = size-2; i >= 0; i--)
    {
        if (max_from_right < arr[i]) 
        {           
            max_from_right = arr[i];
            cout << max_from_right << " ";
        }
    }    
}
void print_Leaders(int arr[], int size)
{
     // create stack to store leaders
      stack<int> sk;
      sk.push(arr[size-1]);
    for (int i = size-2; i >= 0; i--)
    {
        if(arr[i] >= sk.top())
        {          
            sk.push(arr[i]);
        }
    }   
    //print stack elements run loop till stack is not empty
      while(!sk.empty()){      
        cout<<sk.top()<<" ";
          sk.pop();
    }
}
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr, n);
    printLeader(arr, n);
    print_Leaders(arr, n);
    return 0;
}
