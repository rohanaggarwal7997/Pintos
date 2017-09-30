/* Assume that x and y are fixed-point numbers, and n is an integer. */
/* Fixed point numbers are in signed p : q format, where p + q = 31, and f is 1 << q. */
/* As in B.6 Fixed-Point Real Arithmetic, we assume p = 17, q = 14 here. */

#define f (1 << 14)
#define INT_MAX ((1 << 31) - 1)
#define INT_MIN (-(1 << 31))

int 
convert_n_to_fixed_point (int n)
{
  return n * f;
}

int 
convert_x_to_integer_zero (int x)
{
  return x / f;
}

int 
convert_x_to_integer_nearest (int x)
{
  if (x >= 0)
    return (x + f / 2) / f;
  else	
    return (x - f / 2) / f;
}

int 
add_x_and_y(int x, int y)
{
  return x + y;
}

int 
substract_y_from_x (int x, int y)
{
  return x - y;
}

int 
add_x_and_n (int x, int n)
{
  return x + n * f;	
}

int 
substract_n_from_x (int x, int n)
{
  return x - n * f; 
}

int 
multiply_x_by_y (int x, int y)
{
  return ((int64_t)x) * y / f;
}

int 
multiply_x_by_n (int x, int y)
{
  return x * y;
}

int 
divide_x_by_y (int x, int y)
{
  return ((int64_t)x) * f / y;	
}

int 
divide_x_by_n (int x, int y)
{
  return x / y;
}