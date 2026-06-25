class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word="";
        for(int i=0; i<s.size(); i++){
            //skipping leading zeroes
            if(s[i]!=' '){
                word+=s[i];
            }
            //pushing word in vector words if space is found
            else if(!word.empty()){
                words.push_back(word);
                word="";
            }
        }
        //pushing the last word in words vector
        if(!word.empty()){
            words.push_back(word);
        }
        //reversing the vector
        reverse(words.begin(),words.end());

        //adding the reversed vector of string words in the actual string
        string result="";
        for(int i=0; i<words.size(); i++){
            result+=words[i];
            if(i<words.size()-1){
                result+=' ';//adding spaces 

            }
        }
        return result;
    }
};