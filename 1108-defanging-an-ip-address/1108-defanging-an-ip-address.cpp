class Solution {
public:
    string defangIPaddr(string add) {
        string res = "";
        for(auto i: add) {
            if(i == '.')
                res += "[.]";
            else 
                res += i;
        }
        return res;
    }
};