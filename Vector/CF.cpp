#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void TransmitterRadius(){
//given a sequence of integers which was the positions of houses on a straight road. 
//determine the minimum radius of the radio transmitters such that every house receives the signal.
//transmitters can only be placed at the positions of the houses, and a house at position x
//can cover all houses from x-r to x+r where r is the radius of the transmitter.
    int n;
    cin >> n;
    bool flag = true;
    int tmp = INT_MAX;
    vector <int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    for(int i = 1; i < n; i++){
        if(vec[i] < vec[i - 1]){
            flag = false;
            break;
        }
    }
    if(flag == true){
        for(int i = 1; i < n; i++)
            tmp = min(tmp, vec[i] - vec[i - 1]);
        cout << (tmp/2) + 1;
    }
    else
        cout << 0;
}
int main(){
    TransmitterRadius();
}
