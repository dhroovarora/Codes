https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?topList=striver-sde-sheet-problems




#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int i = 0;
   int j = n-1;
   int l = 0;
   while(l <= j){
      if(arr[l] == 0)
         swap(arr[i++],arr[l++]);
      else if(arr[l] == 1)
         l++;
      else
         swap(arr[l],arr[j--]);
   }
}