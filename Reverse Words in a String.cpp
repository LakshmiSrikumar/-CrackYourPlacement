class Solution {
public:
    string reverseWords(string s) {
        int n= s.size();
        stack<string>st;
        string out;
        string word;
        for (int i=0;i<n;i++){
            if (s[i]!=' ') word+=s[i];
            else if (!word.empty()){
                st.push(word);
                word.clear();
            }
        }
        if(!word.empty()){
            st.push(word);
        }
        while (!st.empty()){
            out+=st.top();
            st.pop();
            if(!st.empty()) out+=" ";
        }
        return out;

        
    }
};