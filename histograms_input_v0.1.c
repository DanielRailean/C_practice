#include <stdio.h>

//count digits , white space, others
main(){
  int c , i, j, nwhite, nother, max, td, div, total, sb;//td = total digits , max = max nubmer of items, div = division of the histogram
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i)
      ndigit[i] = 0;

  while ((c = getchar()) != EOF)
    if (c >= '0' && c <= '9'){
       ++ndigit[c-'0'];
       ++td;
    }
    else if (c == ' ' || c == '\n' || c == '\t')
        ++nwhite;
    else
        ++nother;

  if ((nwhite >= nother )&&(nwhite >= td))
      max = nwhite;
  else if ((nother >= nwhite )&&(nother >= td))
      max = nother;
  else
      max = td;

  total = nother+nwhite+td;
  div = total/max;
  while (max >=10){
    sb ++;
    max = max /10;
  }
//debugging
printf("max=%d,sb=%d,total=%d\n", max,sb,total);

  printf("digits:\n");
  for (i = 0; i < 10; ++i){
    printf(" %d", ndigit[i]);
    for (j = 0; j < ndigit[i] ; j++){
          printf("-");
    }
    printf("\n");
  };
  printf("white space:\n %d",nwhite );
  for (i = 0; i < nwhite; ++i)
    printf("-");
  printf("\nother sym:\n %d",nother);
  for (i = 0; i < nother; ++i)
    printf("-");

}
// works
