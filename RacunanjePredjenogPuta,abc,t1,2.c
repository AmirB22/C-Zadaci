#include <stdio.h>
#include <math.h>

float a, b, c, t1, t2, dt, s;

float v(float t)
{
    return a * t + b * sin(c * t);
}

int main()
{
    int n;
    float t, E;

    printf("Predjeni put u intervalu vremena (t1, t2)\n");
    printf("Zadajte parametre a, b, i c: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Zadajte vremenski interval (t1, t2): ");
    scanf("%f %f", &t1, &t2);
    dt = (t2 - t1) / 1000;

    s = v(t1) + v(t2);

    for (t = t1 + dt; t <= t2 - dt; t += dt)
        s += 2 * v(t);
    s = s * dt / 2;

    printf("Predjeni put u zadatom intervalu je %9.4f\n", s);

    return 0;
}
