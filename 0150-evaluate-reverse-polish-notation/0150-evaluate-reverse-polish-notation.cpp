class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int n = tokens.size()-1;
        int i = 0;
        while(i <= n){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.pop();
                if(tokens[i] == "+"){
                    st.push(first+second);
                }else if(tokens[i] == "-"){
                    st.push(second-first);
                }else if(tokens[i] == "*"){
                    st.push(first*second);
                }else{
                    // ["4","13","5","/","+"]
                    st.push(second/first);
                }

            }else{
                st.push(stoi(tokens[i]));
            }
            i++;
        }
        return st.top();
    }
};