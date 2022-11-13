class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string temp = "";
        for(int i=0;i<s.length();i++){
            if(int(s[i])==32&&temp.length()!=0){
                words.push_back(temp);
                temp = "";
            }
            else if(int(s[i])!=32){
                temp+=s[i];
            }
            // cout<<'.'<<temp<<'.'<<endl;
        }
        if(temp.length()!=0){
            words.push_back(temp);
        }
        s.erase(s.begin(), s.end());
        reverse(words.begin(), words.end());
        for(auto x:words){
            s+=x;
            s+=" ";
        }
        string fans(s.begin(), s.end()-1);
        return fans;
    }
};