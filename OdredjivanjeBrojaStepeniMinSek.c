// Primer: Odredjivanje broja stepeni, minuta i sekundi
//           u uglu koji je zadat u radijanima
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define PI 3.141592
main()
{
  // ugao u radijanima
  double x;
  // stepeni, minuta i sekundi u zadatom uglu
  int stepen,minut,sekund;
  // poruka korisniku
  printf("Unesite ugao u radijanima: ");
  // unos ugla u radijanima
  scanf("%lf",&x);
  // konverzija u stepene
  x*=180/PI;
  // zaokruzivanje broja stepeni
  stepen=(int)x;
  // izracunavanje koliko delova stepena je preostalo
  x-=stepen;
  // izracunavanje broja minuta
  x*=60;
  // zaokruzivanje broja minuta
  minut=(int)x;
  // koliko delova minuta je ostalo
  x-=minut;
  // izracunavanje broja sekundi
  x*=60;
  // zaokruzivanje broja sekundi
  sekund=(int)x;
  // ispis broja stepeni, minuta i sekundi
  printf("Stepena, minuta, sekundi [%d,%d,%d]",stepen,minut,sekund);
}
