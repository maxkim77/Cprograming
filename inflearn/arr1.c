#include <stdio.h>
int main(void){
    // Declare individual subway cars
    int subway_1 = 30;
    int subway_2 = 40;
    int subway_3 = 50;

    // Print the number of passengers in each subway car
    printf("지하철 1호차에는 %d명이 타고 있습니다.\n", subway_1);
    printf("지하철 2호차에는 %d명이 타고 있습니다.\n", subway_2);
    printf("지하철 3호차에는 %d명이 타고 있습니다.\n", subway_3);

    // Store the number of passengers in an array
    int subway_array[3];
    subway_array[0] = 30;
    subway_array[1] = 40;
    subway_array[2] = 50;

    // Print the number of passengers for each subway car using the array
    for(int i = 0; i < 3; i++){
        printf("지하철 %d호차에는 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
    }

    int arr[10];
    for(int i =0; i<10;i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
