class SolutionV2{
    public int[] plusOne(int[] digits) {
        int remainder;
        int temp = 0;
        int digit_length = digits.length;
        int count_nine = 0;
        int all_nine=0;
        int [] result;
        for (int i = 0; i < digit_length; i++) {
            if (digits[i] == 9) count_nine++;
        }
        if (count_nine == digit_length) result = new int[digit_length + 1];
        else result = new int[digit_length];
        int flag = 0;
        int sum=0;
        boolean haate_ahce_ek=true;
        if (count_nine == digit_length) {
            all_nine = 1;
            result[0] = 1;
            for (int i = 1; i < result.length; i++) {
                result[i] = 0;
            }
        }
        else if(digits[digit_length-1]!=9)
        {
            result[result.length-1]=digits[digit_length-1]+1;
            for(int i=digit_length-2;i>=0;i--)
            {
                result[i]=digits[i];
            }
        }
        else
        {
            int jogfol=0;
            int haater_ek=1;
            for(int i=digit_length-1;i>=0;i--)
            {
                jogfol=digits[i]+haater_ek;
               /// System.out.println("Jogfol "+jogfol);
                if(jogfol==10)
                {
                    result[i]=0;
                    haater_ek=1;
                   /// System.out.println("IF "+result[i]);
                    haate_ahce_ek=true;
                }
                else
                {
                    result[i]=jogfol;
                    haater_ek=0;
                  ///  System.out.println("Else "+result[i]);
                    haate_ahce_ek=false;
                }
            }

        }
        return result;

    }
    public static void main(String[] args) {
        SolutionV2 solution=new SolutionV2();
        int[] input={7,2,8,5,0,9,1,2,9,5,3,6,6,7,3,2,8,4,3,7,9,5,7,7,4,7,4,9,4,7,0,1,1,1,7,4,0,0,6};
        int []final_result= solution.plusOne(input);
        System.out.print("Resultant List : ");
        for(int i=0;i<final_result.length;i++)
        {
            System.out.print(final_result[i]+" ");
        }
    }

}
