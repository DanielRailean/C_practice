// corrected the unwanted new line at the end ow printing words as is v1
#include <stdio.h>// including standard library in out;

int main() {

int c,cc;// cc = current carracter; c = caracter;

while ((c=getchar()) != EOF) {
  if (c == ' ' || c == '\n' || c == '\t')// checking if we ard dealing with a new word
  cc = '\n';
  else
  cc = c;
  printf("%c",cc );
};
return 0;
};
