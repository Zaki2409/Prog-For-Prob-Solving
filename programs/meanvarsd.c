#include <stdio.h>
#include <math.h>
int main()
{
    int j, k, i, z, retry = 0, user_choice, user_numbers[255], min = 999999, max = 0, sum = 0, temp1, sum1 = 0, variance, variance_sum = 0 , standard_deviation;

    do
    {
        printf("please enter number between 0 to 255 :");
        scanf("%d", &user_choice);
        retry++;
    } while ((user_choice > 255 || user_choice < 0) && retry <= 3);

    if (retry <= 3)
    {
        for (i = 0; i < user_choice; i++)
        {
            printf("enter number %d \n", i);
            scanf("%d", &user_numbers[i]);
            sum += user_numbers[i];
            if (user_numbers[i] < min)
                min = user_numbers[i];
            if (user_numbers[i] > max)
                max = user_numbers[i];
        }

        for (j = 0; j <= user_choice - 1; j++)
        {
            for (k = 0; k <= user_choice - 1; k++)
            {
                if (user_numbers[k] > user_numbers[k + 1])
                {
                    z = user_numbers[k];
                    user_numbers[k] = user_numbers[k + 1];
                    user_numbers[k + 1] = z;
                }
            }
        }

        printf("\n sorted number are :");
        for (i = 0; i < user_choice; i++)
        {
            printf("%d\t", user_numbers[i]);
        }

        printf("\n SUM IS %d", sum);
        printf("\n average is %d", sum / user_choice);
        printf("\n min is %d", min);
        printf("\n max is %d", max);

        printf("\n variance is :");

        for (i = 0; i < user_choice; i++)
        {
            temp1 = (sum / user_choice) - (user_numbers[i]);
            variance= temp1 * temp1;
            variance_sum += variance;
           
        }
        printf(" %d ", variance_sum);
        
    standard_deviation = sqrt(variance_sum);
        printf( "\n the standard deviation is %d" , standard_deviation );
    }
    else
    {
        printf("\n Sorry you retry attempts finished");
    }
    return 0;
}