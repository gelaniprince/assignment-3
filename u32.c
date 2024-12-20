#include <stdio.h>

struct item
{
    int code;
    float price;
    char name[100];
};

    void incPrice(struct item items[]);

int main()
{
    struct item items[5];
    incPrice(items);

    return 0;
}

void incPrice(struct item items[])
{

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the item code : ");
        scanf("%d", &items[i].code);

        printf("Enter the item price : ");
        scanf("%f", &items[i].price);

        printf("Enter the item name : ");
        scanf("%s", items[i].name);

    }

    for (int i = 0; i < 5; i++)
    {
        float newprice = items[i].price + (0.10 * items[i].price);
        printf("For item %d\n",i+1);

        printf("This is name = %s\n", items[i].name);
        printf("This is code = %d\n", items[i].code);
        printf("This is price = %f\n", newprice);
    }
    
    
}