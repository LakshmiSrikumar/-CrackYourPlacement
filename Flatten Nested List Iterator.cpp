class NestedIterator {
public:
stack<NestedInteger>st;
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(int i=nestedList.size()-1;i>=0;i--){
            st.push(nestedList[i]);
        }
    }
    
    int next() {
        if(hasNext()){
            NestedInteger result = st.top(); 
            st.pop();
            return result.getInteger();          
        }
        return -1;
    }
    
    bool hasNext() {
        while(!st.empty()){
            NestedInteger top=st.top();
            if (top.isInteger()) return true;
            st.pop();
             vector<NestedInteger>&nestedList=top.getList();;
            for(int i=nestedList.size()-1;i>=0;i--){
                st.push(nestedList[i]);
            }
        }
        return false;
    }
};