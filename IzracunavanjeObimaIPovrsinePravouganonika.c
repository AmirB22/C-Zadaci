
// Primer: Izracunavanje obima i povrsine praugaonika 
//           ako su zadate stranice (celi brojevi)     
//           O=2(a+b), P=a*b                 
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
main()
{
  int o,p,a,b;
  // Poruka korisniku unesite stranicu a
  printf("Unesite stranicu a: ");
  // Unos stranice a
  scanf("%d", &a);
  // Poruka korisniku
  printf("Unesite stranicu b: ");
  // Unos stranice b
  scanf("%d", &b);
  // izracunavanje obima pravougaonika
  o=2*(a+b);
  // izracunavanje povrsine pravougaonika
  p=a*b;
  // stampa obima pravougaonika
  printf("Obim pravougaonika je %d", o);
  // stampa povrsine pravougaonika 
  printf("Povrsina pravouganika je %d",p);
}