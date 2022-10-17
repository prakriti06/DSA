class Solution {
public:
    int helper(string s,int k,char ch){
        int i=0;
        int count = 0; 
        int j =0; 
        int n = s.length();
        
        while(i<n){
            while(i<n && (k||s[i]==ch)){
                if(s[i]!=ch)
                    k--;
                i++;
            }
            count= max(count,i-j);
		
            if(s[j]!=ch) 
                k++;
            j++;
        }
        
        return count;
    }
    
    int characterReplacement(string s, int k) {
        int ans = INT_MIN;
        for(int i=0; i<26; i++)
            ans = max(ans, helper(s,k,'A'+i));
        
        return ans;
    }
};