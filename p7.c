 //This code reads temperatures for three cities and prints the highest (hottest) and lowest (coolest) values.
 #include <stdio.h>

int main() {
    float t1, t2, t3; // Declare variables for temperatures It declares three float variables: t1, t2, and t3 to store the temperatures of three cities.

    printf("Enter temperature of City 1: "); // Prompt user for temperature of City 1
    scanf("%f", &t1); // Read temperature input

    printf("Enter temperature of City 2: "); // Prompt user for temperature of City 2
    scanf("%f", &t2); // Read temperature input

    printf("Enter temperature of City 3: "); // Prompt user for temperature of City 3
    scanf("%f", &t3); // Read temperature input

    // Find hottest
    float hottest = t1; // Assume t1 is the hottest initially It finds the hottest temperature by initializing hottest to t1 and then comparing it with t2 and t3.
    if (t2 > hottest) hottest = t2; // If t2 is greater than current hottest, update hottest
    if (t3 > hottest) hottest = t3; // If t3 is greater than current hottest, update hottest

    // Find coolest
    float coolest = t1; // Assume t1 is the coolest initially It finds the coolest temperature by initializing coolest to t1 and then comparing it with t2 and t3.
    if (t2 < coolest) coolest = t2; // If t2 is less than current coolest, update coolest
    if (t3 < coolest) coolest = t3; // If t3 is less than current coolest, update coolest

    printf("Hottest temperature: %.2f\n", hottest); // Print hottest temperature
    printf("Coolest temperature: %.2f\n", coolest); // Print coolest temperature

    return 0;
}
