#include <stdio.h>

  int main ()
  {
      int einwurf = 0;
      
      printf("Bitte werfen Sie 1€ ein: ");
      scanf("%d", &einwurf);
      
      if(einwurf == 1){
         printf("\nBitte wählen Sie ihr Getränk.\n");
         }
      else{
         printf("\nKein 1€ Stück eingeworfen!\n");
         }
  }
