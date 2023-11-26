#include <bits/stdc++.h>
using namespace std;
#define MAX 100
 
void sortStrings(char arr[][MAX], int n)
{
    char temp[MAX];
 
    // Sorting strings using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}
 
int main()
{
    char arr[][MAX]{"GeeksforGeeks", "Quiz", "Practice","Gblogs", "Coding" };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sortStrings(arr, n);
 
    cout<<"String in sorted order: \n";
    for (int i = 0; i < n; i++)
        cout<<" String "<<i+1<<" is : "<<arr[i]<<"\n";
    return 0;
}
