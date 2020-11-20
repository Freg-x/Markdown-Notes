#include <stdio.h>
#include <string.h>
#include <limits.h>

int uadd_ok(unsigned x, unsigned y){
    return (x+y) >= x;
}

int tadd_ok(int x,int y){
    int sum = x+y;
    if((x > 0 && y > 0 && sum <= 0) || (x < 0 && y < 0 && sum >= 0))
    return 0;

    return 1;
}

//Be aware of Tmin
int tsub_ok(int x,int y){
    if(y == INT_MIN){
        if(x >= 0)return 0;
        else return 1;
    }
    return tadd_ok(x, -y);
}

int tmult_ok_1(int x, int y){
    int p = x*y;
    return !x || p/x == y;
}

int tmult_ok_2(int x, int y){
    u_int64_t tmult64 = (u_int64_t)x * y;
    return tmult64 == (int)tmult64;
}

int main(){
    short sx = -12345;
    unsigned short ux = sx;
    printf("%u",ux); //53191
    return 0;
}