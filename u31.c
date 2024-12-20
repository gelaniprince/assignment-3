#include <stdio.h>

struct state
{
    char name[100];
    int noofdis;
    long totalpopulation;
};

int main()
{
    struct state states[5];

    for (int i = 0; i < 5; i++)
    {
        printf("State no is %d\n", i + 1);

        printf("enter the state name : ");
        scanf("%s", states[i].name);

        printf("Enter the number of districts : ");
        scanf("%d", &states[i].noofdis);

        printf("Enter the number of popolation : ");
        scanf("%f", &states[i].totalpopulation);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("State no is %d\n", i + 1);

        printf("the state name is = %s \n", states[i].name);

        printf("the number of districts is = %d \n", states[i].noofdis);

        printf("the number of popolation is = %f \n", states[i].totalpopulation);
    }
    return 0;
}  