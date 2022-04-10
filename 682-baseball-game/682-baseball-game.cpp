class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int i = 0;
        while(i < ops.size()){
            if(ops[i] != "C" && ops[i] != "D" && ops[i] != "+"){
                st.push(stoi(ops[i]));
            }
            else if(ops[i] == "C"){
                st.pop();
            }
            else if(ops[i] == "D"){
                st.push(2 * st.top());
            }
            else if(ops[i] == "+"){
                int a, b;
                a = st.top();
                st.pop();
                b = a + st.top();
                st.push(a);
                st.push(b);
            }
            i++;
        }
        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
    return sum;
    }
};