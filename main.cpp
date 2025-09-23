#include <stdio.h>

#include "reading_buffering.h"
#include "pointer_array.h"
#include "comparator.h"
#include "my_strcmp.h"
#include "bubble_sort.h"
// TODO: .gitignore что делает . COMMIT IT HELLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLll
// How to compile from different folders
int main() {
    char* buffer = NULL;
    char** pointer_array = NULL;
    size_t nLines = 0;
    size_t size = 0;
    FILE* text = fopen ("onegin.txt", "rb"); // TODO: если файл не открылся? //Why is there a problem with "r"
    // TODO: относительные пути .
    buffer = ReadBuffer(text, &size);
    pointer_array = Initpointerarr(buffer, &nLines); //creat_pointer_arr
    /*for (int k = 0; k < 10; k++) {
        printf ("pointer_array[%d]: %p\n", k, pointer_array[k]);
    }*/
    //printf("the amount of strings:%d\n", nLines);
    /*for (int j = 0; j < 10; j++) {
        printf ("%s\n", pointer_array[j]);
    }*/
    //qsort (pointer_array, nLines, sizeof(pointer_array[0]), Comparator1);
    //printf("sizeof: %d \n", sizeof(char*) );
    bubbles1 (pointer_array, nLines);
    /*for (int k = 0; k < 10; k++) {
        printf ("pointer_array[%d]: %p\n", k, pointer_array[k]);
    }*/
    for (unsigned int j = 0; j < nLines; j++) {
        printf ("%s\n", pointer_array[j]);
    }
}