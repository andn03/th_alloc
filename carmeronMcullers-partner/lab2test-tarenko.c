#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>

int main() {
  void *x = malloc(5);
  printf("Hello %p\n", x);
  void *y = malloc(33);
  printf("Hello %p\n", y);
  // void *a = malloc(32);
  // printf("Hello %p\n", a);
  void *z = malloc(33);
  printf("Hello %p\n", z);

  return (errno);
}