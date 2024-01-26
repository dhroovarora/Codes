https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1




class Solution
{
    public:
    static bool cmp(Item a, Item b)
    {
        return ((1.0 * a.value) * b.weight) > ((1.0 * b.value) * a.weight);
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, cmp);
        double ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(W >= arr[i].weight){
                ans += 1.0 * arr[i].value;
                W -= arr[i].weight;
            }
            else{
                ans += ((1.0 * arr[i].value) / arr[i].weight) * W;
                break;
            }
        }
        return ans;
    }
        
};