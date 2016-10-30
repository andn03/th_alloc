/* COMP530 Lab2 Tar Heels Allocator
 * HONORS PLEDGE: We certify that no unauthorized assistance has been received or given in the completion of this work.
 ~signed: Andy Ngo, Cameron McCullers
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
#include <stdio.h>
*/
void print();

int main() {
  void *u = malloc(8);
  void *v = malloc(68);
  void *x = malloc(5);
  void *y = malloc(33);
  void *z = malloc(33);
  // ex1: malloc(int) test
  print(u,v,x,y,z); 

  //ex2: free(*) test
  free(u);
  free(v);
  free(x);
  free(y);
  free(z);
  print(u,v,x,y,z);

  //ex3: memory poison

  //ex4
  u = malloc(8);
  v = malloc(68);
  x = malloc(5);
  free(u);
  free(v);
  free(x);
  printf("Hello %p\n", u);
  printf("Hello %p\n", v);
  printf("Hello %p\n", x);

  return (errno);
}

void print(void *u, void *v, void *x, void *y, void *z){
  printf("Hello %p\n", u);
  printf("Hello %p\n", v);
  printf("Hello %p\n", x);
  printf("Hello %p\n", y);
  printf("Hello %p\n", z);
     // void *a = malloc(32);
  // printf("Hello %p\n", a);
}