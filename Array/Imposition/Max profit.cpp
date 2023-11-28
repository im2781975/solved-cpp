//find maximum possible profit with at most two transactions
#include <bits/stdc++.h>
using namespace std;
// Returns maximum profit with two transactions on a given list of stock prices, price[]
int maxProfit(int price[], int n)
{
    // Create profit array & initialize it as 0
    int* profit = new int[n];
    for (int i = 0; i < n; i++)
        profit[i] = 0;
 
    // Get the maximum profit with only one transaction allowed. After this loop, profit[i] contains maximum
       //profit from price[] using at most one trans.
    int max_price = price[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        if (price[i] > max_price)
            max_price = price[i];
 
        //we can get profit[i] by taking maximum of:previous maximum, profit[i+1] profit by buying at price[i] and selling at max_price
     profit[i] = max(profit[i + 1], max_price - price[i]);
    }
    //Get the maximum profit with two transactions allowed
       //After this loop, profit[n-1] contains the result
    int min_price = price[0];
    for (int i = 1; i < n; i++) {
        if (price[i] < min_price)
            min_price = price[i];
 
        // Maximum profit is maximum of: previous maximum,profit[i-1]
        // -> (Buy, Sell) at (min_price, price[i]) and add profit of other trans. stored in profit[i]
        profit[i] = max(profit[i - 1],profit[i] + (price[i] - min_price));
    }
    int result = profit[n - 1];
 
    delete[] profit;
    return result;
}
int maxtwobuysell(int arr[],int size) {
    int first_buy = INT_MIN;
      int first_sell = 0;
      int second_buy = INT_MIN;
      int second_sell = 0;
       
      for(int i=0;i<size;i++) {
         
          first_buy = max(first_buy,-arr[i]);//we set prices to negative, so the calculation of profit will be convenient
          first_sell = max(first_sell,first_buy+arr[i]); 
          second_buy = max(second_buy,first_sell-arr[i]);//we can buy the second only after first is sold
          second_sell = max(second_sell,second_buy+arr[i]);
       
    }
     return second_sell;
}
int main()
{
    int price[] = { 2, 30, 15, 10, 8, 25, 80 };
    int n = sizeof(price) / sizeof(price[0]);
    cout << "Maximum Profit = " << maxProfit(price, n);
    cout << "\nMaximum Profit = " << maxtwobuysell(price, n);
    
    return 0;
}
