// find equilibrium index of an array
#include <bits/stdc++.h>
using namespace std;
 
int equilibrium(int arr[], int n)
{
    int i, j;
    int leftsum, rightsum;
 
    //Check for indexes one by one until an equilibrium index is found 
    for (i = 0; i < n; ++i) {
        //get left sum 
        leftsum = 0;
        for (j = 0; j < i; j++)
            leftsum += arr[j];
 
        //get right sum 
        rightsum = 0;
        for (j = i + 1; j < n; j++)
            rightsum += arr[j];
 
        // if leftsum and rightsum are same, then we are done 
        if (leftsum == rightsum)
            return i;
    }
    return -1;
}
int Equilibrium(int arr[], int n)
{
    int sum = 0; 
    int leftsum = 0; 

    for (int i = 0; i < n; ++i)
        sum += arr[i];
 
    for (int i = 0; i < n; ++i) {
        sum -= arr[i]; 
        // sum is now right sum for index i
 
        if (leftsum == sum)
            return i;
 
        leftsum += arr[i];
    }
    return -1;
}
int equilibrium(int a[], int n)
{
    if (n == 1)
        return (0);
    int forward[n] = { 0 };
    int rev[n] = { 0 };
 
    // Taking the prefixsum from front end array
  //As We Know that in prefixsum from front end the first prefixsum will be equal to first element in the array
  //As well as from the back end the first prefixsum will be equal to last element in the array 
    forward[0]=a[0];
    rev[n-1]=a[n-1];
    for (int i = 1; i < n; i++) {
            forward[i] = forward[i - 1] + a[i];
    }
    // Taking the prefixsum from back end of array
    for (int i = n - 2; i >= 0; i--) {
            rev[i] = rev[i + 1] + a[i];
    }
    // Checking if forward prefix sum is equal to rev prefix sum
    for (int i = 0; i < n; i++) {
        if (forward[i] == rev[i]) {
            return i;
        }
    }
    //If You want all the points of equilibrium create vector and push all equilibrium
    // points in it & return the vector
    return -1;
}
int main()
{
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << equilibrium(arr,arr_size);
    cout<< "\n"<<Equilibrium(arr,arr_size);
    return 0;
}
