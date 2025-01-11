int factorial(int x)
{
    int result = 1;
    for (int i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
}
int power(int x, int n)
{
    if (n == 0)
        return 1;
    int result = 1;
    for (int i = 0; i < n; i++)
        result *= x;
    return result;
}
int is_prime(int x)
{
    if (x > 0)
    {
        if (x == 1)
            return 0;
        int i = 2;
        while(power(i, 2) <= x && i < x)
        {
            if (x % i == 0)
                return 0;
            else
                i++;
        }
        return 1;
    }
    else
    {
        printf("invalid\n");
        return 0;
    }
}