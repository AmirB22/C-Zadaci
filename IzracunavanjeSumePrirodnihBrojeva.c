// Predmet: Osnovi Programiranja – Programski jezik C
//
// Primer: Program za izracunavanje sume prirodnih brojeva od 1 do n.
//           Broj n se unosi sa tastature.
///////////////////////////////////////////////////////////////////

#include <stdio.h>
main() 
{
  int suma=0, n, i=1;
  // unos broja n
  printf("Unesite ceo broj n do koga zelite sumu: ");
  scanf("%d",&n);
  // izracunavanje sume
  while(i <= n)
  { 
    suma+= i; 
    i++;
  }
  // ispis sume prirodnih brojeva
  printf("Suma prirodnih brojeva od 1 do %d je: %d",n,suma);
}
