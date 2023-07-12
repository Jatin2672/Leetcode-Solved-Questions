class Solution {
private:
    char toLowercase(char ch){
        if((ch>='a' && ch<='z')|| (ch>='0' && ch<='9')){
            return ch;
        }
        else{
            ch=ch-'A'+'a';
        }
        return ch;
    }
    bool cheeckpalindrome(string s){
        int j=s.length()-1;
        int i=0;
        
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        } 
        return true;
    }
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
                ans.push_back(s[i]);
            }
        }
        for(int i=0;i<ans.length();i++){
            ans[i]=toLowercase(ans[i]);
        }
        return cheeckpalindrome(ans);
        
    }
};