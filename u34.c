#include <stdio.h>

struct hotel
{
    char name[100];
    char address[100];
    int grade;
    float roomcharge;
    int roomnumber;
};

    void lowroomcharge(struct hotel hotels[], float maxcharge);

int main()
{
    struct hotel hotels[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter hotel number : %d \n",i+1);

        printf("Enter the name : ");
        scanf("%s", hotels[i].name);

        printf("Enter the address : ");
        scanf("%s", hotels[i].address);

        printf("Enter the grade(1 to 5) : ");
        scanf("%d", &hotels[i].grade);

        printf("Enter the roomcharges : ");
        scanf("%f", &hotels[i].roomcharge);

        printf("Enter the number of room : ");
        scanf("%d", &hotels[i].roomnumber);
    }

    float maxcharge;

    printf("\nEnter the maxcharges to filter hotels : ");
    scanf("%f", &maxcharge);

    lowroomcharge(hotels,maxcharge);
}

void lowroomcharge(struct hotel hotels[], float maxcharge)
{
    int i =0;

    for (i = 0; i < 3; i++)
    {
        if (hotels[i].roomcharge < maxcharge)
        {
            printf("\nHotel number = %d\n",i+1);

            printf("hotel name is %s\n", hotels[i].name);
            printf("Hotel address is %s\n", hotels[i].address);
            printf("Hotel grade is %d\n", hotels[i].grade);
            printf("Number of room avaible is %d\n", hotels[i].roomnumber);
            printf("room charge %.2f\n", hotels[i].roomcharge);
        }
        
    }
        if (hotels[i].roomcharge > maxcharge)
        {
            printf("This kind of hotel is not availble");
        }

}