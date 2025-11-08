//5.modify above code by reading avrage fuel consumption of a bike to travel the given distance.
//Fuel Needed (liters)=Fuel Efficiency (km/l)Distance (km)​
#include <stdio.h>

int main() {  
    double max_speed, distance, fuel_efficiency, time, fuel_needed;  // Declare variables

    printf("Enter the maximum speed of the motorbike (km/h): ");  // Prompt user for max speed
    scanf("%lf", &max_speed); // Read max speed input

    printf("Enter the distance to travel (km): ");  // Prompt user for distance
    scanf("%lf", &distance);   // Read distance input

    printf("Enter the average fuel consumption of the bike (km per liter): "); // Prompt user for fuel efficiency
    scanf("%lf", &fuel_efficiency); // Read fuel efficiency input

    if(max_speed > 0 && fuel_efficiency > 0) {  // Ensure speed and fuel efficiency are greater than 0
        time = distance / max_speed; // Calculate time
        fuel_needed = distance / fuel_efficiency; // Calculate fuel needed

        printf("\nTime required to travel %.2lf km at %.2lf km/h is %.2lf hours.\n", distance, max_speed, time); // Display time
        printf("Fuel needed to travel %.2lf km with %.2lf km/l efficiency is %.2lf liters.\n", distance, fuel_efficiency, fuel_needed); // Display fuel needed
    } else { // Handle invalid input
        printf("Speed and fuel efficiency must be greater than 0.\n"); // Error message for invalid input
    }

    return 0;
}
