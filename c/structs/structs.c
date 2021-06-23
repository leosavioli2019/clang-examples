#include <stdio.h>

typedef struct{
    char title[50];
    int page;
} Book;


int main(int argc, char const *argv[])
{

    Book MyBook = {"Curtains",280}; 
    printf("Eu estou lendo o livro %s, ele tem %d páginas",MyBook.title,MyBook.page);
    return 0;
}
