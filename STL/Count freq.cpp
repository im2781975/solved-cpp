#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    // Output the frequencies
    map<int, int>::iterator it;
    for(it=freq.begin(); it!=freq.end(); it++)
    {
        cout<<"key: "<<it->first<<" Value: "<<it->second<<"\n";
    }
    return 0;
}
