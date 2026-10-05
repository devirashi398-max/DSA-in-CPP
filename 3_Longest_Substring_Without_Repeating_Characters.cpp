class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>freq(256,0);
        int left;
        int max_len=0;

        for(int right=0;right<s.length();right++){
            freq[s[right]]++;
            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
             max_len=max(max_len,right-left+1);
        }
        return max_len;
    }
};
