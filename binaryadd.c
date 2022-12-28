#include <stdio.h>
int main()
{
    int a[10], b[10];
    int i, j, tmp1, tmp2, tmp3, R, C, m, n;
    printf("\n Enter the no. of bits of 1st and 2nd binary numbers:");
    scanf("%d%d", &m, &n);
    if (m > n)
    {
        tmp2 = m - n;
        tmp1 = 0;
        tmp3 = m;
        for (i = 0; i < tmp2; i++)
        {
            b[i] = 0;
        }
    }
    else if (m < n)
    {
        tmp2 = 0;
        tmp1 = n - m;
        tmp3 = n;
        for (i = 0; i < tmp1; i++)
        {
            a[i] = 0;
        }
    }
    else
    {
        tmp1 = 0;
        tmp2 = 0;
        tmp3 = m;
    }
    printf("\n Enter 1st binary number:");
    for (i = tmp1; i < tmp3; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n Enter 2nd binary number:");
    for (i = tmp2; i < tmp3; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("\n 1st binary number is:");
    for (i = 0; i < tmp3; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n 2nd binary number is:");
    for (i = 0; i < tmp3; i++)
    {
        printf("%d", b[i]);
    }
}
