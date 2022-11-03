class Solution {
public:
    bool isMatch(string s, string p) {
        int m=s.size(),n=p.size();
        int i=0,j=0,match=-1,star=-1;
        while(i<m){
            if(j<n && p[j]=='*'){
                match = i;
                star = j++;
            }
            else if(j<n && (s[i]==p[j] or p[j]=='?')){
                i++;
                j++;
            }
            else if(star>=0){
                i=++match;
                j=star+1;
            }
            else 
                return false;
        }
        while(j<n && p[j]=='*') 
            j++;
        return j==n;
    }
};