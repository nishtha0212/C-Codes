#include <stdio.h>

void main()
{
    int yr;

    printf("Enter year: ");
    scanf("%d",&yr);

    if(yr%4 == 0)
    {
        if(yr%100 == 0)
        {
            if (yr%400 == 0)
                printf("%d is a Leap Year", yr);
            else
                printf("%d is not a Leap Year", yr);
        }
        else
            printf("%d is a Leap Year", yr);
    }
    else
        printf("%d is not a Leap Year", yr);

}
