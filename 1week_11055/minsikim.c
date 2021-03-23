#include <stdio.h>

int main(void) {
  int   count;
  int   i;
  int   j;
  int   k;
  int   num[1001];
  int   use[1001];
  int   big;
  int   temp;
  int   bignum;
  int   start;

  scanf("%d", &count);
  i = 0;
  while (i < count)
  {
    scanf("%d", &num[i]);
    i++;
  }
  i = 0;
  big = 0;
  start = 0;
  
  while (i < count)
  {
    j = start;
    bignum = 0;
    temp = 0;
    
    k = start;
    while (k < count)
      use[k++] = 0;
    while (j < count)
    {
      if (bignum < num[j] && ((i != j) || (j == 0)))
      {
        bignum = num[j];
        temp = temp + num[j];
        use[j] = 1;
      }
      j++;
    }
    k = 0;
    while (use[k] != 0)
      start = (k++);
    printf("k = %d\n", k); //////
    if (big < temp)
      big = temp;
    i++;
  }
  printf("%d", big);
  return 0;
}
