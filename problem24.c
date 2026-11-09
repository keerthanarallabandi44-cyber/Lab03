#include <stdio.h>
#include <string.h>
struct book {
    char title[100];
    int pages;
    float price;

};
void readbook( struct book *b){
    printf("Enter title: ");
    fgets(b->title,sizeof(b->title),stdin);
    b->title[strcspn(b->title,"\n")]='\0';

    printf("Enter Price: ");
    scanf("%f",&b->price);

    printf("Enter Number Of Pages: ");
    scanf("%d",&b->pages);
}

void displaybook(struct book *b){
 printf("\n----- Book Details -----\n");
 printf("Title : %s\n", b->title);
 printf("Price : %.2f\n", b->price);
 printf("Pages : %d\n", b->pages);
}
int main(){
    struct book favbook;
    readbook(&favbook);
    displaybook(&favbook);
    return 0;
}