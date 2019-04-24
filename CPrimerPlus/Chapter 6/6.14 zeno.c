#include <stdio.h>

int main(void)
{
    int t_ct;
    double times, power_of_2;
    int limit;

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for (times = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
    {
        times += 1.0 / power_of_2;
        printf("time = %f when terms = %d.\n", times, t_ct);
    }
    return 0;
}