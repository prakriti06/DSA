class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        int l = 0;
        int r = n - 1;
        set<char>S({'a', 'A', 'e', 'E', 'i','I' , 'o','O','u','U'});
        while(l < r){
            if(S.find(s[l]) != S.end() && S.find(s[r]) != S.end()){
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else{
                if(S.find(s[l]) == S.end())
                    l++;
                else
                    r--;
            }
        }
        return s;
    }
};