class Solution { 
public:
    string largestOddNumber(string num) {
        int j = num.size() - 1;
        int i = 0;
        while (j >= 0) {
            if (num[j] % 2 != 0) {
                return num.substr(i, j - i + 1);
            } else {
                j--;
            }
        }
        return "";
    }
};
