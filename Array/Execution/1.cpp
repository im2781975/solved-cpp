#include<bits/stdc++.h>
using namespace std;
//find the largest three elements in an array
void dreilargest(int *arr, int n){
    int first, duo, drei;
    if(n < 3) return;
    first = duo = drei = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > first){
            drei = duo; duo = first; first = arr[i];
        }
        else if (arr[i] > duo && arr[i] != first){ 
            drei = duo; duo = arr[i];
        } 
        else if (arr[i] > drei && arr[i] != duo && arr[i] != first) 
            drei = arr[i]; 
    }
    cout << first << " " << duo << " " << drei << endl;
}
void dreilargest(int *arr, int n){
    sort(arr, arr + n); 
    int check = 0, count = 1;
    for (int i = 1; i <= n; i++) {
        if (count < 4) {
            if (check != arr[n - i]) {
                cout << arr[n - i] << " ";
                check = arr[n - i];
                count++;
            }
        }
        else break;
    }
}
void duolargest(int *arr, int n) {
    if (n < 2) return;
    sort(arr, arr + n);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != arr[n - 1]) {
            cout << "\nThe second largest element is " << arr[i];
            return;
        }
    }
}
void duolargest(vector <int> vec){
    set <int> st(vec.begin(), vec.end());
    /*if(st.size() < 2) return;
    vector <int> unique(vec.begin(), vec.end());
    cout << unique[unique.size() - 2] << endl; */
    vec.clear();
    set <int> ::iterator it;
    for(it = st.begin(); it != st.end(); ++it) 
        vec.push_back(*it);
    cout << vec[vec.size() - 2];
}



