#include <stdio.h>

int main(void) {
  int i, j;

  for (i = 0; i <= 9; i++) {
    for (j = 0; j <= 9; j++) {
      if (i == 0 && j == 0) {
        putchar('0');
        putchar('0');
      } else if (i == 0 && j != 0) {
        putchar('0');
        putchar(j + '0');
      } else if (i != 0 && j == 0) {
        putchar(i + '0');
        putchar('0'); 
      } else { 
        putchar(i + '0');  
        putchar(j + '0'); 

      }

      if (!(i == 9 && j == 9)) {
	      printf(" , ");   
      }  

    }

  }

  return 0;
}
