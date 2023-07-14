class Solution {
public:
    string trim(string s){
         if(s.size()==0){
            return "";
        }
        else if(s==" "){
         return "";
        }
        int i=0;
       int j=s.size()-1;
       
       while(1){
           if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9' || s[i]>='A' && s[i]<='Z'){
               break;
           }
           i++;
       }
         while(1){
           if(s[j]>='a' && s[j]<='z' || s[j]>='0' && s[j]<='9' || s[j]>='A' && s[j]<='Z'){
               break;
           }
           j--;
       }
        string ans="";
        for(int k=i;k<=j;k++){
            ans=ans+s[k];
        }
        return ans;
    }
    string reverseWords(string s) {
       string sen=trim(s);
    sen.push_back(32);
        stack<string>st;
        string word="";
        for(int i=0;i<sen.size();i++){
            
            
            if(sen[i]==32){
                if(word!="" && word!=" "){
                    st.push(word);
                }
                word="";
            }
            word=word+sen[i];
}
        string ans="";
        while(!st.empty()){
            string temp=st.top();
            ans=ans+trim(temp)+" ";
            st.pop();
        }
        return trim(ans);
    }
};