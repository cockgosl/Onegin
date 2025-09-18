#include "readingbuffering.h"
 // TODO: global

char* ReadBuffer(FILE* text) {
    struct stat statistic = {};
    char* buffer = NULL;
    long int size = 0;
    int descriptor = fileno(text); // TODO: fseek, ftell 
    fstat (descriptor, &statistic);
    size = statistic.st_size;
    printf ("size : %ld", size);
    buffer = (char*) malloc(size);
    fread (buffer, sizeof(char), size, text);
    for (int i = 0; i < size; i++) {
        printf ("%c", buffer[i]);
    }    
}