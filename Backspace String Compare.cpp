bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>st2;
        for(auto c : s){
            if( c!='#') st.push(c);
            else{
                if(!st.empty() && c=='#')
                    st.pop();
            }
        }
        for(auto c : t){
            if( c!='#') st2.push(c);
            else{
                if(!st2.empty() && c=='#')
                    st2.pop();
            }
        }
        if (st.size()==st2.size() && st==st2) return true;
        return false;
    }