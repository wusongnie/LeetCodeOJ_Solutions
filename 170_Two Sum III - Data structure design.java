class TwoSum {
    HashMap<Integer, Integer> map;
    /** Initialize your data structure here. */
    
    public TwoSum() {
        map = new HashMap<Integer,Integer>();
    }
    
    /** Add the number to an internal data structure.. */
    public void add(int number) {
        if(map.get(number) == null)
            map.put(number,1);
        else
            map.put(number,map.get(number) + 1);
    }
    
    /** Find if there exists any pair of numbers which sum is equal to the value. */
    public boolean find(int value) {        
        for (HashMap.Entry<Integer, Integer> entry : map.entrySet()) {
            if(map.get(value - entry.getKey()) != null){
                if(value - entry.getKey() != entry.getKey())
                    return true;
                else if(map.get(value-entry.getKey()) > 1)
                    return true;
            }
        }
        return false;
    }
}

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum obj = new TwoSum();
 * obj.add(number);
 * boolean param_2 = obj.find(value);
 */
