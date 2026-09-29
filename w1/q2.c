#include <stdio.h>

char *s1 = "abc"; // global


void foo() {
	puts(s1);
}

int main(void) {
  char *s2 = "def"; // local 
  foo();
}
  

