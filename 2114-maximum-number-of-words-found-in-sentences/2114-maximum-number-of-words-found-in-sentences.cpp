class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int words = 0;
        
        int i=0;
        while(i < s.size()){
            int count = 1;
            for(int j=0; j<s[i].length(); j++){
                if(s[i][j] == ' ')
                    count++;
            }
            i++;
            words = max(count, words);
        }
        return words;
    }
};