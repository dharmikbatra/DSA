class Solution {
public:
    string convertToTitle(int cn) {
        string ans = "";
        while(cn){
            if(cn%26 == 0){ans = 'Z' + ans;cn /= 26;cn--;}
            else
            {ans = (char)('A'+cn%26 - 1) + ans;cn /= 26;}
        }
        return ans;
    }
};