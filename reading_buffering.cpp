#include "reading_buffering.h"

char* ReadBuffer(FILE* text, size_t* size) {
    assert (text);
    assert (size);
    struct stat statistic = {};

    char* buffer = NULL;
    int descriptor = fileno(text); // TODO: fseek, ftell 
    fstat (descriptor, &statistic); // errors analyse   

    //printf ("size : %ld", size); printing size
    *size = statistic.st_size;;
    buffer = (char*) calloc(sizeof (char), *size + 1);
    buffer[*size] = '\0';
    fread (buffer, sizeof(char), *size, text); // TODO: error processing
    //realloc
    /*for (int i = 0; i < *size; i++) {   printing buffered text
        printf ("%c", buffer[i]);
    }*/
    return buffer;   
}