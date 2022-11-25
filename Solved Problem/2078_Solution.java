/*
Problem 2078
 */
class Solution2078 {
    public int maxDistance(int[] colors) {
        int _max = -1;
        int result ;
        for (int i=0 ; i< colors.length ;i++)
        {
            for(int j=0; j<colors.length;j++)
            {
                if(colors[i] != colors[j])
                {
                    result = Math.abs(i-j);
                    if(result > _max) _max = result ;
                }
            }
        }
        return _max;
    }
    public static void main(String[] args)
    {
        Solution2078 solution = new Solution2078();
        int [] array = {1,1,1,6,1,1,1};
        System.out.println(solution.maxDistance(array));
    }
}
