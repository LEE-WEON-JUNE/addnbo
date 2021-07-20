#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <netinet/in.h>

int main(int argc, char *argv[]){
    FILE *fd;
    uint32_t num0, num1, result;
    
    fd = fopen(argv[1], "r");
    fread(&num0, sizeof(num0), 1, fd);
    fd = fopen(argv[2], "r");
    fread(&num1, sizeof(num1), 1, fd);

    num0 = ntohl(num0);
    num1 = ntohl(num1);
    result = num0 + num1;

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)", num0, num0, num1, num1, result, result);
    
    return 0;
}
