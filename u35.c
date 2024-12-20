#include <stdio.h>

struct state
{
    char name[100];
    int engclg;
    int medclg;
    int manclg;
    int universities;
    int total;
};

void calculatetotal(struct state states[]);
void highest(struct state states[]);

int main()
{
    struct state states[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\n state number - %d\n", i + 1);

        printf("Enter the state name : ");
        scanf("%s", states[i].name);

        printf("Enter the engineering colleges : ");
        scanf("%d", &states[i].engclg);

        printf("Enter the Medical colleges : ");
        scanf("%d", &states[i].medclg);

        printf("Enter the Management colleges : ");
        scanf("%d", &states[i].manclg);

        printf("Enter the Universities : ");
        scanf("%d", &states[i].universities);
    }

    calculatetotal(states);

    highest(states);

    return 0;
}

void calculatetotal(struct state states[])
{
    for (int  i = 0; i < 3; i++)
    {
        states[i].total= states[i].engclg + states[i].manclg + states[i].medclg + states[i].universities;
    }
      
}

void highest(struct state states[])
{
    int maxindex=0;

    for (int i = 0; i < 3; i++)
    {
        if (states[i].total > states[maxindex].total)
        {
            maxindex = i;
        }
        
    }
    printf("\n The highest colleges \n");
    printf("State name %s\n", states[maxindex].name);
    printf("Total college %d\n", states[maxindex].total);
    printf("engineering colleges %d\n", states[maxindex].engclg);
    printf("Medical colleges %d\n", states[maxindex].medclg);
    printf("Management colleges %d\n", states[maxindex].manclg);
    printf("universities %d\n", states[maxindex].universities);
}
