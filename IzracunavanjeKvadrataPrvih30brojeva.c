// Predmet: Osnovi Programiranja – Programski jezik C
//
// Primer: Ispisati prvih 30 prirodnih brojeva (1,2,…,30)
//           i izracunati njihove kvadrate
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
main()
{
  int number;
  // radi lepseg prikaza
  printf("Broj Kvadrat");
  printf("— —");
  // ispis brojeva i njihovih kvadrata
  for(number=1;number<31;number++)
  {
    printf("%d %d",number,number*number);
  }
}