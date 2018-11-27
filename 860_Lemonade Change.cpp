class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;
        for(int bill : bills){
            switch(bill){
                case 5:
                    five++;
                    break;
                case 10:
                    ten++;
                    five--;
                    if(five < 0)
                        return false;
                    break;
                case 20:
                    if(ten > 0){
                        five--;
                        ten--;
                        if(five < 0)
                            return false;
                        if(ten < 0)
                            return false;
                    }else{
                        five = five - 3;
                        if(five < 0)
                            return false;
                    }
                    break;
                default:
                    break;
            }
        }
        return true;
    }
};
