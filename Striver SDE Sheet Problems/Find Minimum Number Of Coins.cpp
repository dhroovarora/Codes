https://www.codingninjas.com/codestudio/problems/find-minimum-number-of-coins_975277?topList=striver-sde-sheet-problems




#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int ans = 0;
    ans += amount/1000;
    amount = amount%1000;

    ans += amount/500;
    amount = amount%500;

    ans += amount/100;
    amount = amount%100;

    ans += amount/50;
    amount = amount%50;

    ans += amount/20;
    amount = amount%20;

    ans += amount/10;
    amount = amount%10;

    ans += amount/5;
    amount = amount%5;

    ans += amount/2;
    amount = amount%2;
    
    ans += amount;

    return ans;
}