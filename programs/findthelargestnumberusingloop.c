#include <stdio.h>

int main()
{
  int i, retry = 0, n, numbers[10];
  
  do {
    printf("please enter number between 5 to 10 :");
    scanf("%d", &n);
    retry++;
  } while ((n > 10 || n < 5) && retry <= 3);

  if (retry <= 3) {
    for (i = 0; i < n; i++) {
      printf("enter number %d \n", i);
      scanf("%d", &numbers[i]);
    }

    int max = 0;

    for (i = 0; i < n; i++) {
      if (max < numbers[i]) {
        max = numbers[i];
      }
    }
    printf("the greateset number is%d", max);
  }
  else {
    printf("\n Sorry you retry attempts finished");
  }
  
  return 0;
}