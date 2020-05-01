class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        int n = S.size();
        int count = 0;
        string result;
         
        for(int i = n - 1; i >= 0; i--) {
            if(S[i] == '-') continue;
            if(count && count % K == 0) {
                result += '-';
            }
            
            result += toupper(S[i]);
            count ++;
        }      
        
        reverse(result.begin(), result.end());
        
        return result;
    }
};
