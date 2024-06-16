https: // www.geeksforgeeks.org/problems/sum-of-prime4751/1




class Solution {
    public static boolean isPrime(long n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (long i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }

    public static ArrayList<Integer> getPrimes(int n) {
        for (long i = 2; i <= n / 2; i++) {
            if (isPrime(i) && isPrime(n - i)) {
                ArrayList<Integer> result = new ArrayList<>();
                result.add((int)i);
                result.add(n - (int)i);
                return result;
            }
        }
        ArrayList<Integer> result = new ArrayList<>();
        result.add(-1);
        result.add(-1);
        return result;
    }
}