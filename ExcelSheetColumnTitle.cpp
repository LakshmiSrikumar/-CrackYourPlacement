class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while (columnNumber>0){
            columnNumber--;
            int n = columnNumber %26;
            char ch  =  'A'+ n;
            result = ch +result ; 
            columnNumber/=26;
        }
        
      
        return result;
    }
};