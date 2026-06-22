class Solution {
public:
    const int INT_MIN_VAL=-2147483648;
    const int INT_MAX_VAL=2147483647;
    //helper is only to convert string into digit and handle overflow condition
    
    int helper(const string&s, int i, long long num, int sign){
        //base line code
        if(i>=s.size()|| !isdigit(s[i])){
            return (int)sign*num;
        }
        //building the number
        num=num*10+(s[i]-'0');

        //handling overflow condition
        if(sign*num<=INT_MIN_VAL){
            return INT_MIN_VAL;
        }
        if(sign*num>=INT_MAX_VAL){
            return INT_MAX_VAL;
        }
        //returning the recursive function
        return helper(s,i+1,num,sign);
    }


    int myAtoi(string s, int i=0) {
        //skipping leading zeroes
        while(i<s.size() && s[i]==' '){
            i++;
        }
        //handling sign
        int sign=1;
        if(i<s.size() && (s[i]=='+' || s[i]=='-')){
            sign=(s[i]=='-')? -1:1;
            i++;
        }

        //calling helper recursive function
        return helper(s,i,0,sign);
    }
};