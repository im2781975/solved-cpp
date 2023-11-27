#include <bits/stdc++.h> 
using namespace std; 
void secondLargest(int n, vector<int> vec){ 
    if(n < 2){ 
        cout << "Invalid Input"; 
        return; 
    } 
    map<int, int> count;
    for(int i = 0; i < n; i++){ 
        count[vec[i]]++; 
    } 
    // Checking if count size is equal to 1 it means only largest element exist there is no second largest element 
    if(count.size() == 1){ 
        cout << "\nNo Second largest element exist"; 
        return; 
    } 
    int size = 1; 
    for(auto it = count.rbegin(); it != count.rend(); it++){ 
        if(size == 2){ 
            cout << "\nThe second largest element is: " << it->first; 
            break; 
        } 
        size++; 
    } 
} 
void SecondLargest(vector<int>v)
{
    priority_queue<int> pq; 
    for (int i = 0; i < v.size(); i++) { 
        pq.push(v[i]); 
    } 
    // Remove largest element from pq 
    pq.pop(); 
    // Now top of priority queue is second largest element 
    cout << "\nThe Second Largest Element in Vector is: "; 
    cout << pq.top();
}
int main() { 
    vector<int> vec = { 12, 35, 1, 10, 34, 1 }; 
    secondLargest(vec.size(), vec);
    SecondLargest(vec);
    return 0; 
}
