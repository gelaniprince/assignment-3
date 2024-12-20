#include <stdio.h>

struct data
{
    int date;
    int month;
};

void display(int date, int month);

int main()
{
    struct data date1, date2;

    printf("Enter first date(dd/mm) : ");
    scanf("%d%d", &date1.date, &date1.month);

    printf("Enter second date(dd/mm) : ");
    scanf("%d%d", &date2.date, &date2.month);

    printf("FOr the fist date: \n");
    display(date1.date,date1.month);

    printf("FOr the second date: \n");
    display(date2.date,date2.month);
}

void display(int date, int month)
{
    switch (month)
    {
    case 1 : printf("January / %d\n", date);
        break;
    case 2 : printf("February / %d\n", date);
        break;
    case 3 : printf("March / %d\n", date);
        break;
    case 4 : printf("April / %d\n", date);
        break;
    case 5 : printf("May / %d\n", date);
        break;
    case 6 : printf("June / %d\n", date);
        break;
    case 7 : printf("July / %d\n", date);
        break;
    case 8 : printf("August / %d\n", date);
        break;
    case 9 : printf("September / %d\n", date);
        break;
    case 10 : printf("October / %d\n", date);
        break;
    case 11 : printf("October / %d\n", date);
        break;
    case 12 : printf("December / %d\n", date);
        break;
    
    default: printf("Invaild month ");
        break;
    }
}