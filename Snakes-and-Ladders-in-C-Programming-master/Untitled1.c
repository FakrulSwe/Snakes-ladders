#include<stdio.h>
int main()
{
  int n, c;

  printf("Enter a number to check if it's prime\n");
  scanf("%d", &n);

  for (c = 2; c <= n/2; c++)
  {
    if (n%c == 0)
    {
      printf("%d is a composite number.\n", n);
      break;
    }
  }

  if (c == n/2 + 1)
    printf("%d is prime.\n", n);

  return 0;
}
