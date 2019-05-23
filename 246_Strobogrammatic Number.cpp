class Solution {
public:
    bool isStrobogrammatic(string num) {
        int i = 0; 
        int j = num.size() - 1;
        if(num.size() % 2 == 1 && num[(j + 1) / 2] != '0' && num[(j + 1) / 2] != '1' && num[(j + 1) / 2] != '8'){
            return false;
        }
        while(i < j){
            if(num[i] == '0' || num[i] == '1' || num[i] == '8'){
                if(num[i] == num[j]){
                    i++;
                    j--;
                }else{
                    return false;
                }
            }else if(num[i] == '6'){
                if(num[j] == '9'){
                    i++;
                    j--;
                }else{
                    return false;
                }
            }else if(num[i] == '9'){
                if(num[j] == '6'){
                    i++;
                    j--;
                }else{
                    return false;
                }
            }else return false;
        }
        return true;
    }
};
