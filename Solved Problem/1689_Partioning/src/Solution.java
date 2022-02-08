class Solution {
    public int minPartitions(String n) {
        int _length=n.length();
        int _max=-99999;
        for(int i=0;i<_length;i++)
        {
            int convert_number=n.charAt(i)-'0';
            if(_max<convert_number)
            {
                _max=convert_number;
            }
        }
        return _max;
    }

    public static void main(String[] args) {
        Solution solution=new Solution();
        System.out.println(solution.minPartitions("82734"));
    }
}