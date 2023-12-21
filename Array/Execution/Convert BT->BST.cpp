//Minimum swap required to convert binary tree to binary search tree
#include<bits/stdc++.h>
using namespace std;
 
// Inorder Traversal of Binary Tree
void inorder(int a[],vector<int> &v,int n, int index)
{
    if(index >= n)
        return;
    inorder(a, v, n, 2 * index + 1);
     
    // push elements in vector
    v.push_back(a[index]);
    inorder(a, v, n, 2 * index + 2);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
// Function to find minimum swaps to sort an array
int minSwaps(vector<int> &v)
{
    vector<pair<int,int> > t(v.size());
    int ans = 0;
    for(int i = 0; i < v.size(); i++)
        t[i].first = v[i], t[i].second = i;
     
    sort(t.begin(), t.end());
    for(int i = 0; i < t.size(); i++)
    {
        //if the current element is already in its correct position. If it is, the loop continues to the next iteration without performing any swaps.
        if(i == t[i].second)
            continue;
        else
        {
            // swapping of elements according BST method
            swap(t[i].first, t[t[i].second].first);
            //it swaps the values of the current element with the value of the element that should be at the current index according to the sorted order.
            swap(t[i].second, t[t[i].second].second);
            //updates the index information, ensuring that the current element is now at the index it should be according to the sorted order.
        }
         
        // Second is not equal to i
        if(i != t[i].second)
            --i;
        ans++;
    }
    cout<<"Minimum swap requirment: "<<ans<<"\n";
    for(int i=0; i<t.size(); i++)
    {
        cout<<t[i].first<<" "<<t[i].second<<endl;
    }
}
int main()
{
    int a[] = { 5, 6, 7, 8, 9, 10, 11 };
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> v;
    inorder(a, v, n, 0);
    minSwaps(v);
}
/*8 
8 6 9 
8 6 9 
8 6 9 5 10 
8 6 9 5 10 7 11 
8 6 9 5 10 7 11 
8 6 9 5 10 7 11 
Minimum swap requirment: 3
8 0
6 1
9 2
5 3
10 4
7 5
11 6 */
