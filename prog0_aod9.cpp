/*
   File: prog0_aod9.cpp

   Author: Andrew Daly
   C.S.1428.001
   Lab Section: L08
   Program: #0
   Due Date: 09/04/19

   This program
       - writes the student's full name on the 1st line of output
         e.g. John M. Smith
       - writes 'C.S.1428.?' (without quotation marks) on the 2nd line of
         output with the student's three-digit lecture section number in place
         of the question mark
       - writes 'Lab Section: L?' (without quotation marks) on the 3rd line of
         output with the student's two-digit lab section number in place of the
         question mark
       - writes this program's due date on the fourth line of output
       - leaves line five blank
       - writes 'Major: <student's major>'(without quotation marks)
         on the 6th line of output with the student's major in place of
         <student's major>
       - writes 'Minor: <student's minor or specialization>' (without quotation
         marks)on the 7th line of output with the student's minor or
         specialization in place of <student's minor or specialization>
         Note: The keyword 'Minor:' might be replaced with the keyword
         'Specialization:' or 'Concentration:' depending on the student.
       - leaves line eight blank
       - writes 'Favorite Beverage: <student's favorite beverage>'
         (without quotation marks) on the 9th line of output with the student's
         favorite beverage in place of <student's favorite beverage>

   Input: none
   Constants: none
   Output (screen): Sample Output:

          Betty Boop
          C.S.1428.?        // '?' represents three-digit lecture section number
          Lab Section: L?   // '?' represents two-digit lab section number
          --/--/--          // dashes represent due date, month/day/year
             <blank line>
          Major: ?
          Minor: ?
             <blank line>
          Favorite Beverage: ?
*/

#include <iostream>

using namespace std;

int main ( )
{
   cout << "Andrew O Daly" << endl
        << "C.S.1428.001" << endl
        << "Lab Section: L08" << endl
        << "09/04/19" << endl << endl;

   cout << "Major: Applied Math" << endl
        << "Minor: Computer Science" << endl << endl;

   cout << "Favorite Beverage: Mello Yello" << endl;

   return 0;
}
