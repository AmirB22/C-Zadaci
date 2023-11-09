// Predmet: Osnovi Programiranja – Programski jezik C
//
// Primer: Izracunavanje vrednosti izraza:
//         z=(min(x,y)+0.5)/(1+(max(x,y))^2)
//         na dva nacina
///////////////////////////////////////////////////////////////////////

//////////////
// prvi nacin
//////////////


#include <stdio.h>
main()
{
  double x, y, z, min, max;
  printf("Unesite vrednosti za x: ");
  scanf("%lf",&x);
  printf("Unesite vrednosti za y: ");
  scanf("%lf",&y);
  if(x>y)
  {
    max =x; min =y;
  }
  else
  {
    max=y; min=x;
  }
  printf("Maksimum je: %f",max);
  printf("Minimum je: %f",min);
  z =(min+0.5)/(1+max*max);
  printf("z= %.2f",z);
}