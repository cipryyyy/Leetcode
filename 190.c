int reverseBits(int k)
{
    uint32_t temp = k;
    uint32_t value = 0;

    for (int i = 31; i >= 0; i--)
    {
        if (temp >= UINT32_C(1) << i)
        {
            temp -= UINT32_C(1) << i;
            value += UINT32_C(1) << (31-i);
        }
    }

    return (int)value;
}
