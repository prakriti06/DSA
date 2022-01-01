class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if((target>=letters[letters.size()-1])||(target<letters[0]))
            return letters[0];
        int l=0,r=letters.size()-1;
        int m;
        while(l<=r){
            m=(l+r)/2;
            if(letters[m]<=target){
                l=m+1;
            }
            else if(letters[m]>target)
                r=m-1;
        }
        return letters[l];
    }
};