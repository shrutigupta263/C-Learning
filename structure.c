#include <stdio.h>
#include <string.h>
 
struct book{
    char tittle[20];
    char author_name[100];
    float price;
    int pages;
};
int main()
{
    struct book book1 ={"c programming","ABC", 130.00, 550};
    printf("\n tittle = %s",book1.tittle);
    printf ("\n name = %s", book1.author_name);
    printf ("\n price = %f",book1.price);
    printf("\n pages = %d",book1.pages);
    
    return 0;
}