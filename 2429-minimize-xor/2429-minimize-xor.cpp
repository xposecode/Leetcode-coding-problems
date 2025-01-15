class Solution
{
    public:

        int count_bits(int num)
        {
            int count = 0;
            while (num)
            {
                count += num &1;
                num >>= 1;
            }
            return count;
        }

    int add_Bits(int num, int bits_Add)
    {
        int bits_Posi = 0;
        while (bits_Add > 0)
        {
            while ((num >> bits_Posi) &1)
            {

                ++bits_Posi;
            }
            num |= (1 << bits_Posi);
            --bits_Add;
        }
        return num;
    }

    int remove_Bits(int num, int bits_remove)
    {
        while (bits_remove > 0)
        {
            num &= (num - 1);
            --bits_remove;
        }
        return num;
    }
    int minimizeXor(int num1, int num2)
    {
        int set_Bits_Num1 = count_bits(num1);
        int set_Bits_Num2 = count_bits(num2);

        if (set_Bits_Num1 == set_Bits_Num2) return num1;
        if (set_Bits_Num1 < set_Bits_Num2) return add_Bits(num1, set_Bits_Num2 - set_Bits_Num1);
        return remove_Bits(num1, set_Bits_Num1 - set_Bits_Num2);
    }
};