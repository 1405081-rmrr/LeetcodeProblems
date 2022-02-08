 class Solution{
    public int[] plusOne(int[] digits)
    {
        int remainder;
        int temp=0;
        int digit_length=digits.length;
        System.out.println(digit_length);
        int [] result = new int[digit_length+1];
        long new_number=0;
        int index=0;
        int plusone_number=0;
        for(int i=0;i<digits.length;i++)
        {
            new_number=new_number*10+digits[i];
        }
        System.out.println("Inputted Number "+new_number);
        new_number+=1;
        System.out.println("New Number : "+new_number);
        while(new_number!=0)
        {
            remainder= (int) (new_number%10);
            result[index]=remainder;
            new_number/=10;
            index++;
        }
        int [] ebar_hois_na_error= new int[index];
        for(int i=0;i<index;i++)
        {
            ebar_hois_na_error[i]=result[index-i-1];
        }
        return ebar_hois_na_error;

    }

    /*public static void main(String[] args) {
        Solution solution=new Solution();
        int[] input={9,9,9,9};
        int []final_result= solution.plusOne(input);
        System.out.print("Resultant List : ");
        for(int i=0;i<final_result.length;i++)
        {
            System.out.print(final_result[i]+" ");
        }
    }*/
     ////Solution up to 32 bit
}
