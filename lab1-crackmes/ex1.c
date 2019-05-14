#include <stdio.h>

int main(int argc, char **argv)
{
  int password = 0;
  printf("What's the password?\n");
  int res = scanf("%d", &password);
  if (res == 1) {
    if (password % 7 == 0) {
      printf("Correct!\n");
    }
  }
}
