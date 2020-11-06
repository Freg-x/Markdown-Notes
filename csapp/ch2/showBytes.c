#include <stdio.h>
#include <string.h>

//Looks like a char pointer but actually a byte pointer
typedef unsigned char* bytes_pointer;
//typedef unsigned long size_t

//convert origin type pointer to a byte pointer in order to output a sequence of byte(despite of big endian/litte endian)
void show_bytes(bytes_pointer start, size_t len){
    size_t i;
    for(int i = 0;i < len;i++){
        //output as hexadecimal value, at least 2 number
        //can use array to represent the offset of a pointer
        printf( "%.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x){
    show_bytes((bytes_pointer) &x, sizeof(int));
}

void show_float(float x){
    show_bytes((bytes_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
    show_bytes((bytes_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val){
    int iVal = val;
    float fVal = (float) iVal;
    int *pVal = &iVal;

    show_int(iVal);
    show_float(fVal);
    show_pointer(pVal);
}

//12345 = 0x00003039
int main(){
    const char *s = "abcdef";
    show_bytes((bytes_pointer) s,strlen(s));

    printf("%d", 0^1);

    return 0;
}