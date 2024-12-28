#include <stdio.h>

int main(void) {
    // Declare individual subway cars
    // int subway_1 = 30;
    // int subway_2 = 40;
    // int subway_3 = 50;

    // // Print the number of passengers in each subway car
    // printf("지하철 1호차에는 %d명이 타고 있습니다.\n", subway_1);
    // printf("지하철 2호차에는 %d명이 타고 있습니다.\n", subway_2);
    // printf("지하철 3호차에는 %d명이 타고 있습니다.\n", subway_3);

    // // Store the number of passengers in an array
    // int subway_array[3] = {30, 40, 50};

    // // Print the number of passengers for each subway car using the array
    // for (int i = 0; i < 3; i++) {
    //     printf("지하철 %d호차에는 %d명이 타고 있습니다.\n", i + 1, subway_array[i]);
    // }

    // // Initializing and printing the 'arr' array with some default values
    // int arr[10] = {0}; // Initializing all elements to 0
    // for (int i = 0; i < 10; i++) {
    //     printf("%d\n", arr[i]);
    // }

    // // Initializing 'arr1' with values
    // int arr1[10] = {1, 2}; // Remaining elements will be 0
    // for (int i = 0; i < 10; i++) {
    //     printf("%d\n", arr1[i]);
    // }

    // // Working with a character variable
    // char c = 'A';
    // printf("%c\n", c);

    // // Working with a string
    // char str[] = "coding";
    // printf("%s\n", str);

    char c_array[10] = {'c','o','d','i','n','g'};
    for(int i = 0;i <sizeof(c_array);i++){
        printf("%c\n", c_array[i]);
    }

    return 0;
}
