#include <stdio.h>
int main() {
  // An array of ASCII values that represent the name
  int name[] = {97, 109, 105, 114, 104, 111, 115, 115, 101, 114, 105, 110, 32, 103, 111, 108, 98, 97, 104, 97, 114, 122, 97, 100, 101, 104};
  int i;
  // Loop through the array and print each character
  for (i = 0; i < 26; i++) {
    printf("%c", name[i]);
  }
  printf("\n");
  return 0;
}