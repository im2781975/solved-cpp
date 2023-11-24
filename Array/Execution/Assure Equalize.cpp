//find an element that can be used to operate on an array & get equal elements
#include<bits/stdc++.h>
using namespace std;

void canEqualise(int array[],int n)
{
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(array[i]);
    }
   
    if(s.size() == 1)
        cout<<"YES " << "0";
    else if (s.size() == 2)
    {
        auto x = s.begin();
        s.erase(x);
        auto y = s.begin();
        s.erase(y);
        
       cout<<*y<<" "<<*x<<" "<<"YES " << (*y-*x);
    }
    //If count of unique elements is three, then diff between the middle and minimum
    // should be same as diff between maximum and middle
    else if (s.size() == 3)
    {
        auto x = s.begin();
        s.erase(x);
        auto y = s.begin();
        s.erase(y);
        auto z = s.begin();
        s.erase(z);
         
        if ((*z-*y)==(*y-*x))
            cout<<"YES " <<(*z-*y);
        else
            cout<<"NO";
    }
    //if there are more than three unique elements, then we can't add or subtract the same value from all the elements.
    else
        cout<<"NO";
}
int main()
{
    int array[] = {55, 52, 52, 49, 52};
    int n = sizeof(array) / sizeof(array[0]);
    canEqualise(array,n);
}
