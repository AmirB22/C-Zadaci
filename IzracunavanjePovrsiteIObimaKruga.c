// Predmet: Osnovi Programiranja – Programski jezik C
//
// Primer: Izracunavanje obima i povrsine kruga
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
// simbolicka konstanta
#define PI 3.14
main()
{
  double r;
  // Poruka korisniku
  printf("Unesite poluprecnik kruga: ");
  // Unos poluprecika kruga
  // Ulazna konverzija za tip double %lf
  scanf("%lf", &r);
  // Izracunavanje i ispis obima kruga
  printf("Obim kruga je: %.3f", 2*r*PI);
  // Izracunavanje i ispis povrsine kruga
  printf("Povrsina kruga je: %.3f", r*r*PI);
}