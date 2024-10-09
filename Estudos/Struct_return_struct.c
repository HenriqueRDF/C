#include <stdio.h>

struct retangulo{
    float len, brd;
    double area;
};

struct retangulo area(float x, float y){
    double area = (double)(x*y);
    struct retangulo r = {x, y, area};

    return r;
};

int main(){
    struct return r;
    float x,y;

    x = 10.5; y = 20.5;
    r = area(x, y);

    printf("Length: %f \n Bradth: %f \n Area: %lf\n", r.len, r.brd, r.area);
    return 0;
}
