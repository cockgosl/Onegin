#include "my_strcmp.h"

int mystrcmp(const char* str1, const char* str2) {
    assert (str1);
    assert (str2);
    int difference = 0; 
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    for (unsigned int i = 0; i < len1 && i < len2; i++) {
        if ( tolower(str1[i]) == tolower(str2[i])) {
            ;
        }
        else {
            /*if (str1[i] == 'h' || str2[i] == 'h')
                printf("%c != %c\n", str1[i], str2[i]);*/
            difference = tolower(str1[i]) - tolower(str2[i]); 
            break;
        }
    }
    return difference;
}