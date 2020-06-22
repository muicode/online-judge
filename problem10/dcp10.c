#include <stdio.h>
#include <unistd.h>

void hello_func(void)
{
  printf("Hello, World!\n");
}

void scheduler_func(void (*f)(void), int ms)
{
  sleep(ms/1000);
  (*f)();
}

int main(void)
{
  int n = 3000;
  scheduler_func(hello_func, n);
  return 0;
}
