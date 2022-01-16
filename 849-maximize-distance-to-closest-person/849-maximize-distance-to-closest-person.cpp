class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int ans=INT_MIN;
        int cnt=0;
        int n=seats.size();
        bool flag=0;
        for(int i=0;i<n;i++){
            if(seats[i]==0){
                ++cnt;
            }
            else{
               
                if(flag==0){
                    ans=max(ans,cnt);
                }
                else{
                    
                    ans=max(ans,(cnt+1)/2);
                }
                flag=1;
                cnt=0;
            }
        }
      
        if(cnt>0){
            ans=max(ans,cnt);
        }
        return ans;
    }
};