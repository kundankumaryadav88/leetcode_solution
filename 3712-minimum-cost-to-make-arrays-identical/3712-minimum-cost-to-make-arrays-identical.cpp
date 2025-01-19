class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {

        long long res2 = 0;
                int n = arr.size();
        for(int i = 0;i < n;++i){
            res2 += abs(arr[i] - brr[i]);
        }

        
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());

        long long res = 0;
        for(int i = 0;i < n;++i){
            res += abs(arr[i] - brr[i]);
        }
         if (res2 != res) {
            return min(res2, res + k);
        }
        return res;
    }
};