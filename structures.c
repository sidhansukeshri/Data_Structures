//this program takes the input from user for two students and print the data using structures 
#include <stdio.h>
#include <stdlib.h>

struct address {
    int houseno;
    char city[30];
    int pincode;
};
struct student {
    char name[30];
    int roll_no;
    float cgpa;
    char remark[30];
    struct address add;
};

void main(){
    struct student s1,s2;
    printf("Enter the name of the student : ");
    scanf("%s",&s1.name);
    printf("Enter the roll no of the student : ");
    scanf("%d",&s1.roll_no);
    printf("Enter the cgpa of the student : ");
    scanf("%f",&s1.cgpa);
    printf("Enter the remark of the student : ");
    scanf("%s",&s1.remark);
    printf("Enter the house number of the student : ");
    scanf("%d",&s1.add.houseno);
    printf("Enter the city of the student : ");
    scanf("%s",&s1.add.city);
    printf("Enter the pincode of the student : ");
    scanf("%d",&s1.add.pincode);
    printf("\n\nFill the details of the second student .....\n\n");
    printf("Enter the name of the student : ");
    scanf("%s",&s2.name);
    printf("Enter the roll no of the student : ");
    scanf("%d",&s2.roll_no);
    printf("Enter the cgpa of the student : ");
    scanf("%f",&s2.cgpa);
    printf("Enter the remark of the student : ");
    scanf("%s",&s2.remark);
    printf("Enter the house number of the student : ");
    scanf("%d",&s2.add.houseno);
    printf("Enter the city of the student : ");
    scanf("%s",&s2.add.city);
    printf("Enter the pincode of the student : ");
    scanf("%d",&s2.add.pincode);
    printf("\n\nThe data of the first student are : \n");
    printf("Name: %s\n",s1.name);
    printf("Roll_no: %d\n",s1.roll_no);
    printf("CGPA: %.2f\n",s1.cgpa);
    printf("Remark: %s\n",s1.remark);
    printf("House_no : %d\n",s1.add.houseno);
    printf("City : %s\n",s1.add.city);
    printf("Pincode : %d\n",s1.add.pincode);
    printf("\nThe data of the second student are : \n");
    printf("Name: %s\n",s2.name);
    printf("Roll_no: %d\n",s2.roll_no);
    printf("CGPA: %.2f\n",s2.cgpa);
    printf("Remark: %s\n",s2.remark);
    printf("House_no : %d\n",s2.add.houseno);
    printf("City : %s\n",s2.add.city);
    printf("Pincode : %d\n",s2.add.pincode);
}
