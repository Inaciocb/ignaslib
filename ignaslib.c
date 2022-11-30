#include  "ignaslib.h"

bool isint(double x)
{
    int trunked = (int)x;
  return (x == trunked);
}

int xdigit(int x, int y)
{
    int digit = (int)fmod((x/(pow(10, y))), 10);
  return digit;
}

