//read max speed odf a motor bike per/her and read how many km  he want to travel find out average time taken to travel given distances.
#include <stdio.h>      

int main() {
    double max_speed, distance, time;   // Declare variables for speed, distance, and time

    printf("Enter the maximum speed of the motorbike (km/h): ");  // Prompt user for max speed
    scanf("%lf", &max_speed);  // Read max speed input

    printf("Enter the distance to travel (km): ");  // Prompt user for distance
    scanf("%lf", &distance);    // Read distance input

    if(max_speed > 0) {   // Ensure speed is greater than 0 to avoid division by zero
        time = distance / max_speed;  // Calculate time using the formula time = distance / speed
        printf("Time required to travel %.2lf km at %.2lf km/h is %.2lf hours.\n", distance, max_speed, time); // Display the calculated time
    } else { // Handle case where speed is not greater than 0
        printf("Speed must be greater than 0.\n");  // Error message for invalid speed
    }

    return 0;    
}
