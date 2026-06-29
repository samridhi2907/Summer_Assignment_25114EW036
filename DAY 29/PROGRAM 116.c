#include <stdio.h>
#include <string.h>

int main() {
    struct date {
        int day;
        int month;
        int year;
    };
    
    struct details {
        char name[20];
        int price;
        int code;
        int qty;
        struct date mfg;
    };
    
    struct details item[50];
    int n, i;
    
    printf("Enter number of items: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        printf("\nItem %d:<br>", i + 1);
        printf("Item name: ");
        scanf("%s", item[i].name);
        printf("Item code: ");
        scanf("%d", &item[i].code);
        printf("Quantity: ");
        scanf("%d", &item[i].qty);
        printf("Price: ");
        scanf("%d", &item[i].price);
        printf("Manufacturing date (dd mm yyyy): ");
        scanf("%d %d %d", &item[i].mfg.day, &item[i].mfg.month, &item[i].mfg.year);
    }
    
    printf("<br> ***** INVENTORY *****<br>");
    printf("------------------------------------------------------------------<br>");
    printf("S.N.| NAME      | CODE | QUANTITY | PRICE | MFG.DATE<br>");
    printf("------------------------------------------------------------------<br>");
    
    for(i = 0; i < n; i++) {
        printf("%-4d%-11s%-6d%-10d%-7d%02d/%02d/%d<br>", 
               i + 1, item[i].name, item[i].code, 
               item[i].qty, item[i].price,
               item[i].mfg.day, item[i].mfg.month, item[i].mfg.year);
    }
    
    printf("------------------------------------------------------------------<br>");
    
    return 0;
}
