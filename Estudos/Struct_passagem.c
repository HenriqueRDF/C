#include <stdio.h>

struct retangulo{
    float len, brd;
};

int area(float a, float b){
    double area = (double)(a*b);
    printf("Length: %f \nBreadth: %f \nArea: %lf\n", a, b, area);

    return 0;
}

int main(){
    struct retangulo r;
    r.len = 10.50; r.brd = 20.5;
    area(r.len, r.brd);

    return 0;
}


