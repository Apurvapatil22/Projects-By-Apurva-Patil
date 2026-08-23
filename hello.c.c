#include <stdio.h>
#include<string.h>

struct student {
       int roll;
       char name[50];
       float marks;
};

int main() {
       struct student s;
       FILE *fp;

       printf("apurva ka c final project\n");
       printf("roll no daal: ");
       scanf("%d", &s.roll);
       printf("name daal: ");
       scanf("%s", s.name);
       printf("marks daal: ");
       scanf("%f", &s.marks);

       fp = fopen("apurva_records.txt","a");
       fprintf(fp,"roll:%d,name:%s,marks:%.2f\n",s.roll,s.name,s.marks);
       fclose(fp);

       printf("\nho gaya! apurva_records.txt me save ho gaya! c complete!");
       return 0;
}