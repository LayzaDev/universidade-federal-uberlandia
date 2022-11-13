// EXERCISE 1

#include <stdio.h>
#include <math.h>

int main(){

    float C, F, K;

    while (C > 0 && F < 200)
    {
        F = C * 1.8 + 32;

        K = C + 273.15;

        printf("C: %.2f k: %.2f F: %.2f", C, K, F);
    }
    
    return 0;
}

// EXERCISE 2

#include <stdio.h>
#include <math.h>

int main(){

   float C, F, K;


   for(int C = -10; C < 100; C++){

      F = (9 * C + 160) / 5;
      
      K = C + 273.15;

      printf("Valor de F: %2.f Fahrenheit\n", F);

      printf("Valor de K: %2.f  Kelvin \n", K);

   }

   return 0;
}
