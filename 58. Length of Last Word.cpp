class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        int len=0;
        int flag=0;

        for(int i=size-1;i>=0;i--){
            if(s[i]==' ' && flag){
                break;
            }
            if(s[i]!=' '){
                len++;
                flag=1;
            }
        }
        return len;
    }
};