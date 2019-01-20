#include <stdio.h>

float fahrToCelsius(int fahr);
int main(){
int fahr,i;
fahr = 400;
for (i = 0; i < fahr ; i += 2)
    printf("fahr: %3d, celsius: %3.0f\n", i , fahrToCelsius(i));
return 0;
};
float fahrToCelsius(int fahr){
return 5*(fahr-32)/9;
}
