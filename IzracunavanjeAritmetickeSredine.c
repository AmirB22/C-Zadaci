// Predmet: Osnovi Programiranja – Programski jezik C
//                                                          AmirB   
// Primer: Program za izracunavanje aritmeticke sredine prvih n brojeva.
//           Unos broja n vrsi se sa tastature
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
void arSred(int n);
main()
{
  int x;
  printf ("Unesite broj do kojeg zelite aritmeticku sredinu:");
  scanf("%d", &x);
  arSred(x);
}
//funkcija koja vrsi izracunavanje aritmeticke sredine
void arSred(int n)
{
  float zbir=0.0;
  int i;
  // provera da li je unet broj manji od 1
  if(n<1)
  {
    printf("Morate uneti broj veci od 0");
    return;
  }
  for (i=1; i<=n; i++)
  {
    zbir += i;
  }
  zbir = zbir/n;
  printf("Aritmeticka sredina prvih %d brojeva je %.2f",n, zbir);
}