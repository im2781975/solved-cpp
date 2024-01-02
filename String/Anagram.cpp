//check whether two strings are anagram of each other
#include <iostream> 
#include <algorithm> 
using namespace std;
int main() 
{ 
    string A = "SILENT"; 
    string B = "LISTEN"; 
     
    if ( is_permutation ( A.begin(), A.end(), B.begin() ) ) 
    { 
        cout << "Anagrams" ; 
    } 
    else
    { 
        cout << "Not Anagrams" ; 
    } 
    return 0; 
} 
