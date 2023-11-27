// print subarray with sum as given sum 
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int>subarraySum(const vector<int>& arr, int sum)
{
    unordered_map<int, int> map;
    int curr_sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        curr_sum += arr[i];
        if (map.count(curr_sum - sum)) {
            return vector<int>(
                arr.begin() + map[curr_sum - sum] + 1,
                arr.begin() + i + 1);
        }
        map[curr_sum] = i;
    }
    return {};
}
int main()
{
    vector<int> arr = { 15, 2, 4, 8, 9, 5, 10, 23 };
    vector<int> subarray=subarraySum(arr, 23);
    if (subarray.empty()) {
        cout << "\nNo subarray with given sum found";
    }
    else {
        cout << "Subarray: [ ";
        for (int i : subarray) {
            cout << i << " ";
        }
        cout << "]";
    }
    return 0;
}
