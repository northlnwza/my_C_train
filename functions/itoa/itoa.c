#include <stdlib.h>

int     count(long n, long *digit_ptr)
{
        long    i;
        int     count_digit;
        long    digit;

        i = 1;
        count_digit = 0;
        if (n <= 0)
        {
                n = n * -1;
                count_digit += 1;
        }
        while (n / i > 0)
        {
                count_digit += 1;
                i = i * 10;
        }
        digit = i / 10;
        *digit_ptr = digit;
        return (count_digit);
}

char    *check_str(char *str, int i, long n, int *i_ptr, long *n_ptr)
{
        if (str == 0)
        {
                str[0] = 0;
                return (str);
        }
        if (n <= 0)
        {
                n = n * (-1);
                if (n == 0)
                {
                        str[0] = '0';
                        return (str);
                }
                str[0] = '-';
                i++;
        }
        *i_ptr = i;
        *n_ptr = n;
        return (str);
}

char    *itoa(int nbr)
{
        int     i;
        int     int_l;
        long    n;
        long    digit;
        char    *str;

        i = 0;
        n = nbr;
        int_l = count(n, &digit);
        str = (char *)malloc(sizeof(char) * (int_l + 1));
        str = check_str(str, i, n, &i, &n);
        while (i < int_l)
        {
                str[i] = (n / digit) + '0';
                n = n % digit;
                digit = digit / 10; 
                i++;
        }
        str[i] = '\0';
        return (str);
}
