// Function to rearrange an array such that arr[i] = i.
#include <iostream>
using namespace std;
void fixArray(int ar[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            // Check is any ar[j] exists such that ar[j] is equal to i
            if (ar[j] == i) {
                temp = ar[j];
                ar[j] = ar[i];
                ar[i] = temp;
                break;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (ar[i] != i)
        {
            ar[i] = -1;
        }
    }
    cout << "\nArray after Rearranging: " ;
    for (i = 0; i < n; i++) {
        cout << ar[i] << " ";
    }
}
void fix_Array(int A[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (A[i] != -1 && A[i] != i)
        {
            int x = A[i];
 
            // check if desired place is not vacate
            while (A[x] != -1 && A[x] != x) 
            {
                // store the value from desired place
                int y = A[x];
 
                //place the x to its correct position
                A[x] = x;
                // now y will become x, now search the place for x
                x = y;
            }
            // place the x to its correct position
            A[x] = x;
            // check if while loop hasn't set the correct value at A[i]
            if (A[i] != i)
            {
                // if not then put -1 at the vacated place
                A[i] = -1;
            }
        }
    }
    cout << "\nArray after Fixing: " ;
    for (int i = 0; i < len; i++) 
        cout << A[i] << " ";
}
int main()
{
    int n, ar[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
    n = sizeof(ar) / sizeof(ar[0]);
    fixArray(ar, n);
    fix_Array(ar, n);
}
