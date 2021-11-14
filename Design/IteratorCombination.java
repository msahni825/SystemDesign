class CombinationIterator {

    ArrayList<String> a=new ArrayList<>();
    int count=0;
    
    private void computeCombination(String str, StringBuilder sb, int len, int n){
        if(sb.length()==n){
            a.add(sb.toString());
            return;
        }
        for(int i=len;i<str.length();i++){
            sb.append(str.charAt(i));
            computeCombination(str,sb,i+1,n);
            sb.deleteCharAt(sb.length()-1);
        }
        return;
        
    }
    public CombinationIterator(String characters, int combinationLength) {
        computeCombination(characters, new StringBuilder(), 0 ,combinationLength);
    }
    
    public String next() {
        return a.get(count++);
    }
    
    public boolean hasNext() {
        return count<a.size();
    }
   // return;
}

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator obj = new CombinationIterator(characters, combinationLength);
 * String param_1 = obj.next();
 * boolean param_2 = obj.hasNext();
 */
