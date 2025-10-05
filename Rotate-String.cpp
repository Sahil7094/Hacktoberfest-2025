class Solution {
public:
void rotate(string &s){
        char temp=s[0];
        int i=1;
        while(i<s.size()){
            s[i-1]=s[i];
            i++;
        }
        s[s.size()-1]=temp;
    }
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        string rotatestr = s;
        for(int i=0; i<s.size(); i++){
            rotate(rotatestr);
            if(rotatestr==goal){
                return true;
                break;
            }
        }
        return false;
       
    }
};
