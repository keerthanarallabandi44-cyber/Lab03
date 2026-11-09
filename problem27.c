#include <stdio.h>
#include <string.h>

struct reportcard {
    char name[50];
    int roll;
    float marks;

};

void read_reportcard(struct reportcard student[], int n) {

for(int i=0;i<n;i++){
printf("Enter details of sudent %d)\nEnter Name: ",i+1);
fgets(student[i].name,sizeof(student),stdin);
student[i].name[strcspn(student[i].name,"\n")]='\0';

printf("\nEnter roll no. ");
scanf("%d",student[i].roll);

printf("\nEnter Marks: ");
scanf("%f",student[i].marks);}

}

void display_reportcard(struct reportcard student[], int n) {
    printf("\n--- Students with marks greater than 500 ---\n");
    for (int i = 0; i < n; i++) {
        if (student[i].marks > 500) {
            printf("Name: %s\n", student[i].name);
            printf("Roll no.: %d\n", student[i].roll);
            printf("Marks: %.2f\n\n", student[i].marks);
        }
    }
}
int main(){
    struct reportcard student[10];
    read_reportcard(student,10);
    display_reportcard(student,10);
    return 0;
}
