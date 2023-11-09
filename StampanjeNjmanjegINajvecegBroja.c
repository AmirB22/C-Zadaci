// Primer: Program za ucitavanje n realnih brojeva i stampanje
//           najveceg i najmanjeg broja
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
main()
{
  int n=1;
  int i; double a, min, max;
  // spoljasnja petlja
  while(n>0)
  {
    // poruka korisniku
    printf("Koliko brojeva zelite da unesete? n= ");
    scanf("%d",&n);
    //unos prvog broja
    printf("Unesite prvi realan broj: ");
    scanf("%lf",&a);
    min = max = a;
    // poredjenje svakog sledeceg broja sa min i max
    for(i=2; i<=n; i++)
    {
      printf("Unesite sledeci realan broj: ");
      scanf("%lf",&a);
      if(a < min) min = a;
      if(a > max) max = a;
    }
    // stampanje brojeva
    printf("Minimum = %f",min);
    printf("Maximum = %f",max);
    printf("Da li zelite novi unos?");
    printf("(unesite 0 za kraj ili pozitivan broj za nastavak)");
    scanf("%d",&n);
  }
}