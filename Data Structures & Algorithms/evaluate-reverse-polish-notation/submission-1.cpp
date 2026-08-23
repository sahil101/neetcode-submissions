class Solution {
public:

    int calculate (string s, int x, int y) {
        if (s == "+")
        return x + y;
        if (s == "-")
        return x - y;
        if (s == "*")
        return x * y;
        return x / y;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto s: tokens) {
            if (s == "+" || s == "-" || s == "/" || s == "*") {
                int num2 = st.top();
                st.pop();
                int num1 = st.top();
                st.pop();
                int value = calculate(s, num1, num2);
                st.push(value);
                continue;
            }
            st.push(stoi(s));
        }
        return st.top();   
    }
};
