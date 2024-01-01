#include<bits/stdc++.h>
using namespace std;
void printNumbers() 
{ 
    int n = 1; 
label: 
    cout<<n<<" ";
    n++; 
    if (n <= 10) 
        goto label; 
} 
int main() 
{ 
    printNumbers(); 
    return 0; 
}
