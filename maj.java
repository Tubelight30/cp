import java.util.HashMap;
class maj {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> mp = new HashMap<>();
        for(int i = 0;i<nums.length;i++){
            if(mp.containsKey(nums[i])){
                mp.put(nums[i],mp.get(nums[i])+1);
            }
            else {
 
                mp.put(nums[i], 1);
            }
        }
        int ans = 0;
        for (int i : mp.keySet()) {
            if(mp.get(i)>nums.length/2){
                ans = i;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        maj m = new maj();
        int[] arr = {7, 0, 0, 1, 7, 7, 2, 7, 7};
        System.out.println(m.majorityElement(arr));
    }
}