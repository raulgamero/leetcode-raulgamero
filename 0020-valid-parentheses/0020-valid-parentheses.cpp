class Solution {
public:
    bool isValid(string s) {
        stack<int> pila;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
                pila.push(s[i]);
            }
            else {
                if (!pila.empty()) {
                    if (s[i] == ']' and pila.top() == '[') pila.pop();
                    else if (s[i] == ')' and pila.top() == '(') pila.pop();
                    else if (s[i] == '}' and pila.top() == '{') pila.pop();
                    else pila.push(s[i]);   
                }
                else pila.push(s[i]);
            }
        }
        if (pila.size() == 0) return true;
        else return false;
    }
};