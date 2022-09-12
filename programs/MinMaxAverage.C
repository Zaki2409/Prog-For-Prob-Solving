#include <stdio.h>

int main()
{
  int j, k, i, z, sum = 0, retry = 0, retry1 = 0, user_choice, user_numbers[10], loop_count = 0;
  char user_select;
  int min = 999999999, max = 0;
  do
  {
    printf("please enter number between 5 to 10 :");
    scanf("%d", &user_choice);
    retry++;
  } while ((user_choice > 10 || user_choice < 5) && retry <= 3);

  if (retry <= 3)
  {
    for (i = 0; i < user_choice; i++)
    {
      printf("enter number %d \n", i + 1);
      scanf("%d", &user_numbers[i]);
      sum += user_numbers[i];
      if (user_numbers[i] < min) min = user_numbers[i];
      if (user_numbers[i] > max) max = user_numbers[i];
    }

    printf(" \n loop count is %d\n", loop_count);
    printf("\n SUM IS %d", sum);
    printf("\n average is %d", sum / user_choice);
    printf("\n min is %d", min);
      printf("\n max is %d", max);
   
  }
  else
  {
    printf("\n Sorry you retry attempts finished");
  }

  return 0;
}






#include <stdio.h>
#include <stdlib.h>

void myFunction()
{
    int n, i, *ptr, sum = 0 , min=999999 , max=0;
    printf("Enter number of indices: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf(" unable to allocate memory");
        exit(0);
    }
    else
    {
        printf("Enter elements of array:\n ");
        for (i = 0; i < n; ++i)
        {
            printf("enter number %d : ", i);
            scanf("%d", ptr + i);
            sum += *(ptr + i);
        }
        printf("Sum=%d\n", sum);
        free(ptr);
        
        for (i = 0; i <n; i++)
        {
            if (ptr + i < min)
                min = *(ptr + i);
            if (ptr + i > max)
                max = *(ptr + i);
        }
    printf(" min=%d\n" , min);
    printf("max=%d\n" , max);

    }
}



    int main()
    {
        myFunction();
        
        return 0;
    }