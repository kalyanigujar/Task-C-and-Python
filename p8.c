#include <stdio.h>

int main() { 
    float capital[4], total_profit = 10000, total_capital = 0; // Declare array for capitals and variables for total profit and total capital

    for(int i = 0; i < 4; i++) { // Loop to read capitals of 4 partners
        printf("Enter capital of Partner %d: ", i+1); // Prompt user for capital
        scanf("%f", &capital[i]); // Read capital input
        total_capital += capital[i]; // Accumulate total capital
    }

    for(int i = 0; i < 4; i++) { // Loop to calculate and display profit for each partner
        float profit = (capital[i] / total_capital) * total_profit; // Calculate profit based on capital share
        printf("Profit of Partner %d: %.2f\n", i+1, profit); // Display profit for each partner
    }

    return 0;
}
    // 8. Four partners invest in a business. Read the capital invested by each partner and display the profit of each partner if the total profit is Rs 10,000.
    //The program first reads the capital invested by each of the four partners and calculates the total capital.
    //Then, it calculates each partner's share of the total profit based on their individual capital investment and displays it.