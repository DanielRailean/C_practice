#include <stdio.h>
#include <power.c>

int main(){
int i;

for (i = 0; i < 10; ++i){
printf("%d %d %d", i , power(2,i), power(3, i ));
}

return 0;
}
