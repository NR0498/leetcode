class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x!=0 && x%10==0) return false;
        int ori = x;
        long long  rev=0;
        while(x>0){
            int lastD=x%10;
            rev=rev*10+lastD;
            x=x/10;
        }
    return ori==rev;
        
    }
};