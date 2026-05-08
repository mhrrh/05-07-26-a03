// ------------- FILE HEADER -------------
// Author ✅: Madison Harrah
// Assignment ✅: 3
// Date ✅: 05/07/26
// Citations: 

// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {

  // constants
  const float VEHICLE_USD = 57.90;
  const float ADULT_USD = 14.95;
  const float SENIOR_USD = 7.40;
  const float YOUTH_USD = 5.55;
  const float BICYCLE_USD = 4.00;

  const int MAX_PEOPLE = 20;
  const float FREE_TICKET_USD = 100.00;

  //variables
  char y_or_n = '\0';

  int adults = 0;
  int seniors = 0;
  int youths = 0;
  int bicycles = 0;

  int totalPeople = 0;

  float charge = 0.0;
  float amountNeeded = 0.0;

  // welcome message
  cout << "Welcome to the Washington State Ferries Fare Calculator!" << endl;

  // fare table
  cout << "Fare Description                                                             Ticket $" << endl;
  cout << " ----------------------                                         -------------------- " << endl;
  cout << "Vehicle under 14'(less than 168\") & Driver                                   $57.90"  << endl;
  cout << "Adult (age 19-64)                                                             $14.95" << endl;
  cout << "Senior (age 65 & over) / Disability                                           $7.40" << endl;
  cout << "Youth (age 6-18)                                                              $5.55" << endl;
  cout << "Bicycle Surcharge (included with vehicle)                                     $4.00" << endl;

  // vehicle question
  cout << "Are you riding a vehicle on the Ferry (Y/N): " << endl;
  cin >> y_or_n;

  y_or_n = tolower(y_or_n);

  //validate y/n
  if ((y_or_n!= 'y') && (y_or_n != 'n')){
    cout << endl;
    cout << "Error!! Invalid answer!! Please try again later!!" << endl;
  }
  else {
    //user input
    cout << endl;

    cout << "How many adults?" << endl;
    cin >> adults;

    cout << "How many seniors?" << endl;
    cin >> seniors;

    cout << "How many youths?" << endl;
    cin >> youths;
    
    // ask bikes only if no vehicle
    if (y_or_n == 'n'){
      cout << "How many bikes?" << endl;
      cin >> bicycles;
    }

    // validate negative numbers
    if (adults < 0 || seniors < 0 || youths < 0 || bicycles < 0){
      cout << "Error!! Invalid answer!! Please try again later!!" << endl;
    }
    else {
      totalPeople = adults + seniors + youths;
      // too many people
      if (totalPeople > MAX_PEOPLE){
        cout << "Uh oh!! Too many people in your group!! Split into 2 groups and try again!" << endl;
      }
      else {
        // calculate total
        if (y_or_n == 'y'){
          charge = VEHICLE_USD;
      }
      charge += adults * ADULT_USD;
      charge += seniors * SENIOR_USD;
      charge += youths * YOUTH_USD;
      charge += bicycles * BICYCLE_USD;

      // money formatting
      cout << fixed << setprecision (2);

      cout << endl;
      cout << "Your total charge is $" << charge << endl;
      cout << endl;

      //free ticket message
      if (charge > FREE_TICKET_USD){
        cout << "You are eligible for a free adult ticket for the next trip" << endl;
      }
      else {

        amountNeeded = FREE_TICKET_USD - charge;
        cout << "If you spend $" << amountNeeded << " more, you are eligible for a free adult ticket for the next trip." << endl;

      }
    }

    }
  }
// goodbye message
cout << endl;
cout << "Thank you for using Washington State Ferries Fare Calculator!" << endl;

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
