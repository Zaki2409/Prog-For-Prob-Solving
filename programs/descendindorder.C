#include <stdio.h>

int main()
{
  int j, k, i, z, retry = 0, retry1 = 0, user_choice, user_numbers[10], loop_count = 0;
  char user_select;
  do
  {
    printf("please enter number between 5 to 10 :");
    scanf("%d", &user_choice);
    retry++;
  } while ((user_choice > 10 || user_choice < 5) && retry <= 3);

  do
  {
    printf("choose D for descending order and A for acesending order :");
    scanf("%c", &user_select);
    retry1++;

  } while ((user_select != 'A' && user_select != 'D') && retry1 <= 3);

  if (retry <= 3 && retry1 <= 3)
  {
    for (i = 0; i < user_choice; i++)
    {
      printf("enter number %d \n", i + 1);
      scanf("%d", &user_numbers[i]);
    }

    for (j = 0; j < user_choice - 1; j++)
    {
      for (k = 0; k < user_choice - 1 - j; k++)
      {
        loop_count++;
        if (user_numbers[k] < user_numbers[k + 1] && user_select == 'D')
        {
          z = user_numbers[k];
          user_numbers[k] = user_numbers[k + 1];
          user_numbers[k + 1] = z;
        }
        else if (user_numbers[k] > user_numbers[k + 1] && user_select == 'A')
        {
          z = user_numbers[k];
          user_numbers[k] = user_numbers[k + 1];
          user_numbers[k + 1] = z;
        }
      }
    }
    printf(" sorted number are \n");
    for (i = 0; i < user_choice; i++)
    {
      printf("%d\n", user_numbers[i]);
    }
    
    printf(" \n loop count is %d\n", loop_count);
  
    if (user_select == 'A')
    {
      printf("\n min is %d", user_numbers[0]);
      printf("\n max is %d", user_numbers[user_choice - 1]);
    }
    else
    {
      printf("\n min is %d", user_numbers[user_choice - 1]);
      printf("\n max is %d", user_numbers[0]);
    }
  
  }
  else
  {
    printf("\n Sorry you retry attempts finished");
  }

  return 0;
}