class Solution {
public:
    int mySqrt(int x) {
        if(x == 0) return 0;
        int s = 1, e = x;
        int ans = 0;
        while(s <= e){
            long long mid = s + (e - s) / 2;
            long long sq = mid * mid;
            if(sq == x) return mid;
            else if(sq < x){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
        
    }
    
};