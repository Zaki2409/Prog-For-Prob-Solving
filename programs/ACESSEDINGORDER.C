#include <stdio.h>

int main()
{
  int j, k, i, z, retry = 0, user_choice, user_numbers[10];

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
    }
    for (j = 0; j < user_choice; j++)
    {
      for (k = 0; k < user_choice; k++)
      {
        if (user_numbers[k] > user_numbers[k + 1])
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
  }
  else
  {
    printf("\n Sorry you retry attempts finished");
  }

  return 0;
}