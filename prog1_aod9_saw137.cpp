 /*
   File: prog1_aod9_saw137.cpp

   Author: Andrew Daly & Samuel Wienecke
   C.S.1428.001
   Lab Section: L08 & L01
   Program: #1
   Due Date: 09/18/19

   Prix fixe (pronounced "prefix") menus are common in Europe. Prix fixe
   menus typically include several pre-determined items presented as a
   multi-course meal at a set price. For example, one evening, a restaurant
   may offer a four-course prix fixe menu of escargot for the first course,
   beef bourguignon (boor-geen-yuhn) for the second, a cheese platter for
   the third, and creme brulee for dessert. The prix fixe menu for the
   evening, along with its cost, is typically posted on a message board
   outside the restaurant.

   =======================================================================

   This program prompts the user for the number of prix fixe meals ordered
   by the customer(s). The program calculates the total cost of the meal(s),
   the sales tax, the tip, and the total amount due. The program then prints
   in receipt form the individual price of a prix fixe meal, the number of
   prix fixe meals ordered, the total for all prix fixe meals ordered, the
   sales tax, the tip and the total amount due. Sample layout of a receipt
   is shown below.

   Input (keyboard): meals_ordered      (integer)
   Constants:
          Sample Values:
              PRIX_FIXE = 50.00         (double)
              SALES_TAX_RATE = .0825    (double)
              TIP_PERCENTAGE = .15      (double)
   Output (console):
          Sample Layout:

          Author's Name
          C.S.1428.?       // '?' represents three-digit lecture section number
          Lab Section: L?  // '?' represents two-digit lab section number
          --/--/--         // dashes represent due date, month/day/year
               <blank line>
          Prix Fixe Price:    $   50.00
                                x     8
          Total for 8 meals:     400.00
          Sales Tax @8.25%        33.00
          15% Tip                 64.95
          Total Due:          $  497.95

   =======================================================================

   <Output will vary based on actual input and values used for constants.>
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main( )
{
    const double PRIX_FIXE = 75.50,
                 SALES_TAX_RATE = .085,
                 TIP_PERCENTAGE = .15;

    double subtotal,
           sales_tax,
           total_with_tax,
           tip_amount,
           total_price;

    int meals_ordered;

    cout << "Enter the amount of prix fixe meals that you ordered: ";
    cin >> meals_ordered;
    cout << endl << endl;

    subtotal = meals_ordered * PRIX_FIXE,
    sales_tax = subtotal * SALES_TAX_RATE,
    total_with_tax = subtotal + sales_tax,
    tip_amount = total_with_tax * TIP_PERCENTAGE,
    total_price = total_with_tax + tip_amount;

    cout << "Andrew Daly & Samuel Wienecke" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L08 & L01" << endl
         << "09/18/19" << endl << endl;

    cout << fixed << setprecision(2)
         << "Prix Fixe Price:    $  " << setw(6) << PRIX_FIXE << endl
         << "                      x" << setw(6) << meals_ordered << endl
         << "Total for " << meals_ordered << " meals:     "
         << setw(6) << subtotal << endl
         << "Sales tax @" << SALES_TAX_RATE * 100 << "%       " << setw(6)
         << sales_tax << endl
         << setprecision(0) << TIP_PERCENTAGE * 100 << "% Tip                "
         << setprecision(2) << setw(6) << tip_amount << endl
         << "Total Due:          $  " << setw(6) << total_price << endl;

    system("PAUSE>NUL");

    return 0;
}
