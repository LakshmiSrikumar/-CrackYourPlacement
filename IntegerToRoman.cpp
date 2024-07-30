class Solution {
public:
    string intToRoman(int num) {
        string Thousand[]={"","M","MM","MMM"};
        string Hundred[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string Tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string Ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        return Thousand[num/1000]+ Hundred[(num%1000)/100] + Tens[(num%100)/10] + Ones[num%10];
    }
};