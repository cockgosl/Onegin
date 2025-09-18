#include <stdio.h>

#include "readingbuffering.h"
// TODO: .gitignore что делает
int main() {
    FILE* text = fopen ("originaltext.txt", "r"); // TODO: если файл не открылся?
    // TODO: относительные пути .
    ReadBuffer(text);
}