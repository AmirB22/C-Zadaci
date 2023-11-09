// Predmet: Osnovi Programiranja – Programski jezik C
//
// Primer: Izracunavanje n-tog stepena celog broja a.
//         Oba broja se unose sa tastature
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
  int a, n, i=1, stepen=1;
  // poruka korisniku
  printf("Unesite broj a: ");
  // unos broja a
  scanf("%d",&a);
  // poruka korisniku
  printf("Unesite broj n: ");
  // unos broja n
  scanf("%d",&n);
  // izracunavanje n-tog stepena broja a
  while(i<=n)
  {
    stepen*=a; i++;
  }
  // ispis n-tog stepena
  printf("Broj %d na %d-ti stepen je : %d",a,n,stepen);
}