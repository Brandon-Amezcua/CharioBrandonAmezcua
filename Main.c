
#include <stdio.h>

#define IN 1 //inside a word
#define OUT 0 //outside a word

int main(int argc, const char* argv[]) {

    long nc, nl, nw;
    int c, state = OUT;
    nc = nl = nw = 0;


    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') { ++nl; }
        if (c == ' ' || c == '\n' || c == '\t') { state = OUT; }
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("%ld chars, %ld words, and %ld lines \n", nc, nw, nl);
    return 0;
}


