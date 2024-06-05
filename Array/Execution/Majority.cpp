// finding out majority element in an array 
#include <bits/stdc++.h>
using namespace std;

int findCandidate(int a[],int size)
{
    int maj_index = 0, count = 1;
    for (int i = 1; i < size; i++) {
        if (a[maj_index] == a[i])
            count++;
        else
            count--;
        if (count == 0) {
            maj_index = i;
            count = 1;
        }
    }
    return a[maj_index];
}
 
//Function to check if the candidate occurs more than n/2 times 
bool isMajority(int a[], int size, int cand)
{
    int count = 0;
    for (int i = 0; i < size; i++)
        if (a[i] == cand)
            count++;
 
    if (count > size / 2)
        return 1;
    else
        return 0;
}
void printMajority(int a[], int size)
{
    // Find the candidate for Majority
    int cand = findCandidate(a, size);
    //Print the candidate if it is Majority
    if (isMajority(a, size, cand))
        cout << " " << cand << " ";
    else
        cout << "No Majority Element";
}
void findMajority(int arr[], int size)
{
    unordered_map<int, int> m;
    for(int i = 0; i < size; i++)
        m[arr[i]]++;
    int count = 0;
    for(auto i : m)
    {
        if(i.second > size / 2)
        {
            count =1;
            cout << "Majority found :- " << i.first<<endl;
            break;
        }
    }
    if(count == 0)
        cout << "No Majority element" << endl;
}
int main()
{
    int a[] = { 1, 3, 3, 1, 2 };
    int size = (sizeof(a)) / sizeof(a[0]);
 
    printMajority(a, size);
    findMajority(a, size); 
    
    return 0;
}
