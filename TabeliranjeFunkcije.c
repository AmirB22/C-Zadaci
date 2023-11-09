// Primer: Program za tabeliranje funkcije:
//           y = (1+x+x2) u opsegu od xmin do
//           xmax sa korakom dx
///////////////////////////////////////////////////////////////////////

#include <stdio.h>
main()
{
  double x, xmin, xmax, dx,y;
  // unos parametara
  printf("Unesite xmin, xmax i dx:");
  scanf("%lf%lf%lf",&xmin,&xmax,&dx);
  // radi lepseg prikaza
  printf("     x          y");
  printf(" ========== ==========");
  // tabeliranje funkcije
  for(x=xmin;x<xmax;x+=dx)
  {
    y= 1+x+x*x;
    printf(" %10.6f %10.6f",x,y);
  }
}