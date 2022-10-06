class Solution {
    public String minWindow(String s, String t) {
        String ans = "";
        HashMap<Character,Integer> hm2 = new HashMap<>(); 
        for(int i = 0;i<t.length();i++){
            hm2.put(t.charAt(i),hm2.getOrDefault(t.charAt(i),0)+1); 
        }
        int i = -1;
        int j = -1; 
        int mct = 0; 
        int dmct = t.length();
        
        HashMap<Character,Integer> hm1 = new HashMap<>(); 
       
        
        while(true){
            boolean f1 = false; 
            boolean f2 = false;
            while(i<s.length()-1 && mct<dmct){
                i++;
                char c = s.charAt(i); 
                hm1.put(c,hm1.getOrDefault(c,0)+1);
                if(hm1.getOrDefault(c,0)<=hm2.getOrDefault(c,0)){
                    mct++;
                }
                f1 = true;
            }
           
            while(j<i && mct == dmct){
                String tans = s.substring(j+1,i+1);
                if(ans.length() == 0 || tans.length()<ans.length())
                    ans = tans; 
                j++;
                char c = s.charAt(j); 
     
                if(hm1.get(c) == 1){
                    hm1.remove(c);
                }
                else{
                    hm1.put(c,hm1.get(c)-1);
                }
                if(hm1.getOrDefault(c,0)<hm2.getOrDefault(c,0)){
                    mct--;
                }
                f2 = true;
            }
            if(f1==false && f2==false){
             
                break;
            }
        }
        return ans;
    }
}
