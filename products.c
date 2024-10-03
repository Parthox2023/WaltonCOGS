#include <stdio.h>

int items = 100, scn = -1;

struct Product {
    char catagory[10];
    char modalName[20];
    int Price;
    int stock;
};

void initialStock() {
    printf("Updating inital Stock\n");
}

void show(struct Product pdt[]) {
    printf("Updating showing operation\n");
}

void purches(struct Product pdt[]) {
    printf("Updating purchesing operation\n");
}

void sell(struct Product pdt[]) {
    printf("Updating selling operation\n");
}

int main() {
    struct Product pdt[items];
    initialStock(pdt);
    
    while(scn != 0) {
        printf("\n\n");
        printf("0. Exit\n");
        printf("1. Show Stock\n");
        printf("2. Purches Item\n");
        printf("3. Sell Item\n");
        printf("Select Option: ");
        scanf("%d", &scn);

        switch(scn) {
            case 0: printf("Program Closed!\n");
            break;

            case 1: show(pdt);
            break;

            case 2: purches(pdt);
            break;

            case 3: sell(pdt);
            break;

            default: printf("Invalid Option!\n");
        }
    }

    return 0;
}