#include <stdio.h>
#include <stdlib.h>

struct library {
    char bookname[50];
    char author[50];
    int noofpages;
    float price;
};

int main() {
    struct library lib[100];
    int i = 0, choice, keepcount = 0;
    
    while (1) {
        printf("<br>=== Library Management System ===<br>");
        printf("1. Add book information<br>");
        printf("2. Display book information<br>");
        printf("3. Number of books in library<br>");
        printf("4. Exit<br>");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("\nEnter book name: ");
                scanf("%s", lib[keepcount].bookname);
                printf("Enter author name: ");
                scanf("%s", lib[keepcount].author);
                printf("Enter number of pages: ");
                scanf("%d", &lib[keepcount].noofpages);
                printf("Enter price: ");
                scanf("%f", &lib[keepcount].price);
                keepcount++;
                printf("Book added successfully!<br>");
                break;
                
            case 2:
                if (keepcount == 0) {
                    printf("\nNo books in the library!<br>");
                } else {
                    printf("<br>=== Book Information ===<br>");
                    for (i = 0; i < keepcount; i++) {
                        printf("\nBook %d:<br>", i + 1);
                        printf("Name: %s<br>", lib[i].bookname);
                        printf("Author: %s<br>", lib[i].author);
                        printf("Pages: %d<br>", lib[i].noofpages);
                        printf("Price: %.2f<br>", lib[i].price);
                    }
                }
                break;
                
            case 3:
                printf("\nTotal books in library: %d<br>", keepcount);
                break;
                
            case 4:
                printf("Exiting program. Thank you!<br>");
                exit(0);
                
            default:
                printf("Invalid choice! Please try again.<br>");
        }
    }
    
    return 0;
}
