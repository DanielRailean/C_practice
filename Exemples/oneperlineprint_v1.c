// version 1, has an error, outputing one more new-line at the end
#include <stdio.h> // standard in out library;

int main() {
int c;
while ((c=getchar()) != EOF) {
  printf("%c",c);
  if(c == ' ' || c == '\n' || c == '\t')
  printf("\n" );
};
return 0;
};
