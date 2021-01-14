/*
   File: prog4_aod9_saw137.cpp

   Author: Andrew Daly & Samuel Wienecke
   C.S.1428.001
   Lab Section: L08 & L01
   Program: #4
   Due Date: 10/30/19

   This program prompts the user for the number of items purchased. If no
   items were purchased, the program terminates after printing an appropriate
   message to the screen; otherwise, the program repeatedly prompts the
   user for the price of the specified number of items and calculates the
   total of all purchased items. It then calculates the shipping charge,
   discounted total, tax on the discounted total, and the total amount due.

   After all calculations are performed, the program prints the author's
   identifying information followed by the total of all purchased items,
   the discounted total, the tax rate, the tax on the discounted total,
   shipping charges and the total amount due as shown below. Output is
   written in receipt form to both the console and to an output file.

   With the exception of the tax rate, the numeric data is formatted to
   two decimal places. The tax rate is formatted to four decimal places.

   Input (keyboard): number of items purchased, integer
                     item price, double

   Constants:        discount amount, double (sample: 0.20)
                     cut off amount for free shipping, double
                     shipping charge, double
                     tax rate, double (sample: 0.0825)

   Output (console):
          Sample Console Output (These samples do not reflect prompts.)

          Author's Name
          C.S.1428.?        // '?' represents three-digit lecture section number
          Lab Section: L?   // '?' represents two-digit lab section number
          --/--/--          // dashes represent due date, month/day/year
               <blank line>
          Total Purchases:    $ ??.??
          Discounted Total:     ??.??
          Tax Rate:              ?.????
          Tax:                   ?.??
          Shipping:              ?.??
               <blank line>
          Total Amount Due:   $ ??.??
               <blank line>
               <blank line>
          A copy for your records can be found in prog4_00?out.txt.

   Output (file - prog4_?out.txt):

          Author's Name
          C.S.1428.?        // '?' represents three-digit lecture section number
          Lab Section: L?   // '?' represents two-digit lab section number
          --/--/--          // dashes represent due date, month/day/year
               <blank line>
          Total Purchases:    $ ??.??
          Discounted Total:     ??.??
          Tax Rate:              ?.????
          Tax:                   ?.??
          Shipping:              ?.??
               <blank line>
          Total Amount Due:   $ ??.??

          ================================================

          <Output will vary based on actual input values.>
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ( )
{
    const double DISCOUNT = 0.2,
                 SHIPPING_PRICE = 8.5,
                 TAX_RATE = 0.0825,
                 SHIPPING_CUTOFF = 150;

    int items_purchased;

    double price_of_items = 0,
           item_price,
           discounted_price,
           tax_charge,
           shipping_charge,
           amount_owed;

    ofstream fout;
    fout.open("prog4_001out.txt");

    if ( !fout )
    {
        cout << endl << endl
             << " ***Program Terminated.*** " << endl << endl
             << "Output file failed to open." << endl;

        system("PAUSE>NUL");

        return 1;
    }

    cout << "Enter the number of items purchased: ";
    cin >> items_purchased;
    cout << endl;

    if ( items_purchased == 0 )
        cout << "Come back again soon!";

    else
    {
        for ( int i = 0; i < items_purchased; i++ )
        {
            cout << "Enter the item price: ";
            cin >> item_price;

            price_of_items += item_price;
        }

    discounted_price = price_of_items - ( price_of_items * DISCOUNT );

    if ( discounted_price >= SHIPPING_CUTOFF )
        shipping_charge = 0;
    else
        shipping_charge = SHIPPING_PRICE;

    tax_charge = discounted_price * TAX_RATE;

    amount_owed = discounted_price + shipping_charge + tax_charge;

    fout << "Andrew Daly & Samuel Wienecke" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L08 & L01" << endl
         << "10/30/19" << endl << endl;

    fout << fixed << setprecision(2)
         << "Total Purchases:    $" << setw(6) << price_of_items << endl
         << "Discounted Total:    " << setw(6) << discounted_price << endl
         << setprecision(4)
         << "Tax Rate:            " << setw(8) << TAX_RATE << endl
         << setprecision(2)
         << "Tax:                 " << setw(6) << tax_charge << endl
         << "Shipping:            " << setw(6) << shipping_charge << endl << endl
         << "Total Amount Due:   $" << setw(6) << amount_owed << endl;

    cout << endl << endl
         << "Andrew Daly & Samuel Wienecke" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L08 & L01" << endl
         << "10/30/19" << endl << endl;

    cout << fixed << setprecision(2)
         << "Total Purchases:    $" << setw(6) << price_of_items << endl
         << "Discounted Total:    " << setw(6) << discounted_price << endl
         << setprecision(4)
         << "Tax Rate:            " << setw(8) << TAX_RATE << endl
         << setprecision(2)
         << "Tax:                 " << setw(6) << tax_charge << endl
         << "Shipping:            " << setw(6) << shipping_charge << endl << endl
         << "Total Amount Due:   $" << setw(6) << amount_owed << endl
         << endl << endl;

    cout << "A copy for your records can be found in prog4_001out.txt." << endl;
    }

    fout.close( );

    system("PAUSE>NUL");

    return 0;
}
