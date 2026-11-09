#include <stdio.h>
#include <string.h>

struct book {
    char title[100];
    int pages;
    float price;
};
struct book readbook (){
    struct book b; 
    printf("Enter Title: ");
    fgets(b.title,sizeof(b.title),stdin);
    b.title[strcspn(b.title,"\n")]='\0';

    printf("Enter number of pages: ");
    scanf("%d",&b.pages);

    printf("Enter the Price: ");
    scanf("%f",&b.price);
    return b;
 }
void displaybook(struct book b){
printf("\n----BOOK DETAILS----\n");
printf("Title:  %s\n",b.title);
printf("Pages:  %d\n",b.pages);
printf("Price:  %.2f\n",b.price);

}

int main(){
    struct book book;
    book = readbook();
    displaybook(book);
    return 0;

}


