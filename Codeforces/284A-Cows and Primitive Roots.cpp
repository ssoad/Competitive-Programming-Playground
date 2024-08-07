#include <cstdio>

/*
    Author- Sohanuzzaman Soad
    University of Asia Pacific (UAP),BD

*/

int main()
{
    int p;
    scanf("%d", &p);
    int n = p - 1;
    int c= n;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            do
            {
                n /= i;
            } while (n % i == 0);
            c = c / i * (i - 1);
        }
    }
    if (n != 1)
    {
        c = c / n * (n - 1);
    }
    printf("%d\n", c);
    return 0;
}
