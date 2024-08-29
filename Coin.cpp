#include <bits/stdc++.h>  
using namespace std;  
  
  
int minCoins(int coins[], int total_coins, int N)  
{  
        if (N == 0)   
        return 0;  
  
    int result = INT_MAX;   
  
    for (int i = 0; i < total_coins; i++) 
    {  
        if (coins[i] <= N) {  
            int sub_res = 1 + minCoins(coins, total_coins, N - coins[i]);   
            if (sub_res < result)  
                result = sub_res;  
        }  
    }  
    return result;  
}  
  
int main()  
{  
    int coins[] = { 10, 20, 5 , 2 , 1 };  
    int sum = 28;   
    int total_coins = 5;  
    cout << "Minmum coins needed are " << minCoins(coins, total_coins, sum);  
}  
