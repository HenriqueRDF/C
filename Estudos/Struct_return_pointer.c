#include <stdio.h>

struct retangulo{
    float len, brd;
    double area;
};

struct retangulo * area(float x, float y){
    double area = (double)(x*y);
    static struct retangulo r;
    r.len = x; r.brd = y; r.area = area;

    return &r;
};

int main(){
    struct retangulo *r;
    float x,y;

    x = 10.5; y = 20.5;
    r = area(x, y);
    printf("Tamanho: %f  \n Breadth: %f \n Area: %lf\n", r->len, r->brd,r->area);

    return 0;
}
