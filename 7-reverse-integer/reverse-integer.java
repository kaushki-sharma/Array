class Solution {
    public int reverse(int x) {
         long reversenum=0;
        while(x!=0)
        {
            int c=x%10;
            reversenum=reversenum*10+c;
            x=x/10;
            if(reversenum>Integer.MAX_VALUE || reversenum<Integer.MIN_VALUE )
            {
                return 0;
            }
        }
        return (int)reversenum;
    }
}