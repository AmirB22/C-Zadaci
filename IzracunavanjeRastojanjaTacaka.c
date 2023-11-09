// Primer: Izracunati rastojanje izmedu dve tacke u prostoru
//         ako su zadate koordinate krajnjih tacaka      
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>
main()
{
  // koordinate tacaka i trazeno rastojanje
  double x1, x2, y1, y2, z1, z2, d;
  // poruka korisniku
  printf("Unesite koordinate prve tacke <x1,y1,z1>:");
  // unos prve tacke
  scanf("%lf%lf%lf",&x1,&y1,&z1);
  // poruka korisniku
  printf("Unesite koordinate druge tacke <x2,y2,z2>:");
  // unos druge tacke
  scanf("%lf%lf%lf",&x2,&y2,&z2);
  // izracunavanje trazenog rastojanja
  d=sqrt(pow(x2-x1,2)+pow(y2-y1,2)+pow(z2-z1,2));
  // ispis trazenog  rastojanja
  printf("d = %.2f", d);
  //D = √((x2 - x1)² + (y2 - y1)²)
}