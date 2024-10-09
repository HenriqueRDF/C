#include <stdio.h>

struct retangulo{
    float len, brd;
    double area;
};

int area(struct retangulo *r){
    r -> area = (double)(r -> len * r -> brd);
    printf("Tamanho: %f \nBreadth: %f \nArea: %lf\n",r -> len, r -> brd, r -> area);
    return 0;
}

int main(){
    struct retangulo r;
    r.len = 10.50; r.brd = 20.5;
    area(&r);

    return 0;
}
