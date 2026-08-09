class Solution {
public:
    int maxVowels(string s, int k) {
       auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };

        int count = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) count++;
        }

        int ans = count;
        for (int j = k; j < s.size(); j++) {
            if (isVowel(s[j])) count++;
            if (isVowel(s[j - k])) count--;
            ans = max(ans, count);
        }

        return ans;
    }
};