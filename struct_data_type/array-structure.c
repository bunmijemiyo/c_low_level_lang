#include <stdio.h>
#include <stdlib.h>

/*
A Structure is a user defined data type that can be used to group elements of
different types into a single type
Structure tag helps to identify a particular kind of structure*/

struct car
{
    int fuel_tank_cap;
    int seating_cap;
    float city_mileage;
};

int main()
{
    struct car c[2];
    int i;
    for(i = 0; i < 2; i++)
    {
        printf("Enter the car %d fuel tank capacity: ", i+1);
        scanf("%d", &c[i].fuel_tank_cap);
        printf("Enter the car %d seating capacity: ", i+1);
        scanf("%d", &c[i].seating_cap);
        printf("Enter the car %d city_mileage: ", i+1);
        scanf("%f", &c[i].city_mileage);
    }
    printf("\n");
    for(i = 0; i < 2; i++)
    {
        printf("\nCar %d details: \n", i+1);
        printf("fuel tank capacity: %d\n", c[i].fuel_tank_cap);
        printf("seating capacity: %d\n", c[i].seating_cap);
        printf("city_mileage: %f\n", c[i].city_mileage);

    }
    return 0;
}
