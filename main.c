#include <stdio.h>

int main() {
  printf("Hello, World!");
  for (int i = 0; i < 10; ++i) {
    if (i % 2 == 0) {
      printf("%d ", i);
    }
  }
  printf("\n");
  int a;
  scanf("%d", &a);
  int *a_ptr;
  a_ptr = &a;
  printf("a_ptr -> %d\n", *a_ptr);
  return 0;
}

