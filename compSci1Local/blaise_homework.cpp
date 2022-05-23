// Libraries needed for output and calculations
#include <iostream>
#include <cmath>
#include <iomanip>

// Makes using std not necessary
using namespace std;

// Main function, returns an integer
int main() {

    // Constant variables for Carton capacity, Cost per liter, and Profit
    const double CARTON_CAPACITY = 3.78;
    const double COST_OF_ONE_LITER = 0.38;
    const double PROFIT_ON_A_CARTON = 0.27;

    // Double variables for inputs that will be extracted later in program
    double milk_produced, cost_of_milk, profit_milk;
    // Int variable for data that will be extracted later
    int num_of_cartons;
    
    // Prompts user for the amount of milk produced in liters and saves it to milk_produced variable
    cout << "Enter milk produced in liters: ";
    cin >> milk_produced;

    // Calculation and output for number of cartons needed
    num_of_cartons = milk_produced / CARTON_CAPACITY;
    cout << "Number of cartons needed: " << num_of_cartons << "\n";

    // Calculation and output for cost of milk
    cost_of_milk = milk_produced * COST_OF_ONE_LITER;
    cout << fixed << setprecision(2) << "Production cost is: $" << cost_of_milk << "\n";

    // Calculation and output for the total profit
    profit_milk = PROFIT_ON_A_CARTON * num_of_cartons;
    cout << fixed << setprecision(2) << "Total Profit: $" << profit_milk << "\n";

    // 0 is returned at end of program
    return 0;
    


}