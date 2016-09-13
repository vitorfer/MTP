#include <stdio.h>

#define RECEBEPONTO(c, ptA) \
    ({printf("Entre coord x de %c: ", c); \
      scanf("%f", &ptA.x); \
      printf("Entre coord Y de %c: ", c); \
      scanf("%f", &ptA.y); \
      printf("Entre coord z de %c: ", c); \
      scanf("%f", &ptA.z); })
#define MOSTREPONTO(ponto) \
    ({ printf("(%g, %g, %g)\n", ponto.x, ponto.y, ponto.z); })

#define SOMA(ptA, ptB, ptC, soma) \
    ({ soma.x = ptA.x + ptB.x; \
       soma.y = ptA.y + ptB.y; \
       soma.z = ptA.z + ptB.z;})
#define DISTANCIA(ptA, ptB,d ) \
    ({ d = sqrt(pow(ptA.x - ptB.x, 2.f) + \
                pow(ptA.y - ptB.y, 2.f) +\
                pow(ptA.z - ptB.z, 2.f)); })

struct Ponto {
    float x;
    float y;
    float z;
};
int main(){
    struct Ponto A, B, C, S;
    float distancia;
    RECEBEPONTO('A', A);
    RECEBEPONTO('B', B);
    SOMA(A,B,C,S);
    MOSTREPONTO(S);
    DISTANCIA(A, B, distancia); printf("A distancia entre eles: %g", distancia);

    return 0;
}
