//find the largest three elements in an array
#include <bits/stdc++.h> 
using namespace std;
//print three largest elements 
void print3largest(int arr[], int arr_size) 
{ 
    int first, second, third; 
    // There should be atleast three elements 
    if (arr_size < 3) 
    { 
        cout << " Invalid Input "; 
        return; 
    } 
    third = first = second = INT_MIN; 
    for(int i = 0; i < arr_size; i++) 
    { 
        //If current element is greater than first
        if (arr[i] > first)
        { 
            third = second; 
            second = first; 
            first = arr[i]; 
        } 
        // If arr[i] is in between first and second then update second 
        else if (arr[i] > second && arr[i] != first)
        { 
            third = second; 
            second = arr[i]; 
        } 
        else if (arr[i] > third && arr[i] != second && arr[i] != first) 
            third = arr[i]; 
    } 
    cout << "\nThree largest elements are "<< first << " " << second << " "<< third ;
} 
void find3largest(int arr[], int n)
{
    sort(arr, arr + n); 
    int check = 0, count = 1;
    for (int i = 1; i <= n; i++) {
        if (count < 4) {
            if (check != arr[n - i]) {
                // to handle duplicate values
                cout << arr[n - i] << " ";
                check = arr[n - i];
                count++;
            }
        }
        else
            break;
    }
}
int main() 
{ 
    int arr[] = { 12, 13, 1, 10, 34, 11, 34 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
     
    print3largest(arr, n); 
    cout<<"\nlargest element are: ";
    find3largest(arr, n);
    return 0; 
} 
