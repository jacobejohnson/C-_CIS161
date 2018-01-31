// Chapter 6, Programming Challenge 14: Order Status
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getStockInfo(int &, int &, double &);
void displayStatus(int, int, double = 10.00);

int main()
{
   int ordered;                // To hold the spools ordered
   int inStock;                // To hold the spools in stock
   double specialShipping;    // To hold any special shipping charges

   // Get the order and stock information.
   getStockInfo(ordered, inStock, specialShipping);

   // Determine whether there are special charges
   // and display the order status.
   if (specialShipping > 0)
      displayStatus(ordered, inStock, specialShipping);
   else
      displayStatus(ordered, inStock);

   return 0;

} 

//*********************************************************
// The getStockInfo function asks the user for the number *
// of spools ordered, the number of spools in stock, and  *
// any special shipping charges. The values are validated *
// and stored in reference parameters.                    *
//*********************************************************

void getStockInfo(int &ordered, int &inStock, double &specialShipping)
{
    char choice;    // To hold 'y' or 'n'

    // Get the number of spools ordered.
    cout << "How many spools were ordered? ";
    cin  >> ordered;
   
    // Validate the number of spools ordered.
    while (ordered < 1)
    {  
        cout << "The number of spools ordered "
             << "must be one or more.\n"
             << "How many spools were ordered? ";
        cin  >> ordered;
    } 

    // Get the number of spools in stock.
    cout << "How many spools are in stock? ";
    cin  >> inStock;
   
    // Validate the number of spools in stock.
    while (inStock < 0)
    {  
        cout << "The number of spools in stock "
             << "must be zero or more.\n"
             << "How many spools are in stock? ";
        cin  >> inStock;
    }


    // Get the special shipping charges, if any.
    cout << "Are special shipping charges required? (y or n): ";
    cin >> choice;

    if (choice == 'Y' || choice == 'y')
    {
        cout << "Enter the amount of any special "
             << "shipping charges: ";
        cin  >> specialShipping;
   
        // Validate the special shipping charges.
        while (specialShipping < 0)
        {  
            cout << "Special shipping charges "
                 << "must be zero or more. "
                 << "Enter the amount of any special "
                 << "shipping charges: ";
            cin  >> specialShipping;
        }
    }
    else
        specialShipping = 0;
} 

//*********************************************************
// The displayStatus function accepts as arguments the    *
// number of spools ordered, the number in stock, and the *
// shipping charges per spool.                            *
//*********************************************************

void displayStatus(int ordered, int inStock, double specialShipping)
{
    const double UNIT_SPOOL_COST = 100.00;

    int available = ordered;    // Number of spools available to ship
    int backOrder = 0;            // Number of spools back ordered
         
    double spoolCost;        // Charges for spools shipping now
    double shipCharges;        // Shipping charges for this shipment
    double totalCharges;    // Cost of shipped spools + shipping chgs 
   
    // Determine whether any spools are back ordered.
    if (ordered > inStock)
    {  
        available = inStock;
        backOrder = ordered - inStock;
    }
   
    // Calculate the charges.
    spoolCost = available * UNIT_SPOOL_COST;
    shipCharges = available * specialShipping;
    totalCharges = spoolCost + shipCharges;

    // Display the order summary.
    cout << "\nOrder Summary\n"
         << "==================\n"
         << "\nItems ordered: " << ordered
         << "\nReady to ship: " << available;
        
    if (available < ordered)
    {
        cout << "\nOn backorder:  " << backOrder;
    }
   
    cout << fixed << showpoint << setprecision(2)
         << endl
         << "\nSubtotal:  $" << setw(8) << spoolCost
         << "\nShipping:  $" << setw(8) << shipCharges
         << "\nTotal Due: $" << setw(8) << totalCharges
         << endl;
}
