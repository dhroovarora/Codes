https://www.geeksforgeeks.org/problems/construct-list-using-given-q-xor-queries/1




class Solution {
    public static ArrayList<Integer> constructList(int q, int[][] queries) {
        // code here
        ArrayList<Integer> ans = new ArrayList();
        int totalXor = 0;
        
        for(int i=q-1;i>=0;--i){
            if(queries[i][0] == 0)
                ans.add(totalXor ^ queries[i][1]);
            else
                totalXor ^= queries[i][1];
        }
        ans.add(0 ^ totalXor);
        Collections.sort(ans);
        return ans;
    }
}