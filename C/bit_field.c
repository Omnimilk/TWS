#include <stdio.h>
#include <stdlib.h>

typedef union {
    struct TextStyle_ {
        char color:3;
        char size:3;
        char style:2;
    } styleFields;
    char value;
} Style;
   

int main()
{
    Style a;
    a.value = 155; // 10011011
    printf("sizeof(a) : %d, a.color: %d, a.size: %d, a.style: %d\n", 
           sizeof(a), 
           a.styleFields.color,
           a.styleFields.size,
           a.styleFields.style);
    return 0;
}
