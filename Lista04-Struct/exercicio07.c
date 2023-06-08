#include <stdio.h>
#include <math.h>

typedef struct cartesiano{
    float x;
    float y;
} Cartesiano;

typedef struct polar{
    float r;
    float a;
} Polar;

int main() {
    Polar p1;
    Cartesiano p2;

    printf("Digite as coordenadas polares (raio e angulo em radianos): ");
    scanf("%f %f", &p1.r, &p1.a);

    p2.x = p1.r * cos(p1.a);
    p2.y = p1.r * sin(p1.a);

    printf("Coordenadas cartesianas do ponto: (%.2f, %.2f)\n", p2.x, p2.y);

    return 0;
}
