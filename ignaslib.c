#include  "ignaslib.h"

bool isint(double x)
{
  int trunked = (int)x;
  return (x == trunked);
}

int xdigit(long long int x, int y)
{
  int digit = (int)fmod((x/(pow(10, y))), 10);  // Add parentheses around pow(10, y) to specify correct order of operations
  return digit;
}

void TEXT_COLOUR(int red, int green, int blue)
{
  printf("\e[38;2;%d;%d;%dm", red, green, blue);
}

void BACKGROUND_COLOUR(int red, int green, int blue)
{
  printf("\e[48;2;%d;%d;%dm", red, green, blue);
}

void NORMAL_COLOUR(void)
{
  printf("\e[m");
}