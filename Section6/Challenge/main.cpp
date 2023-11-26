
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;


const int price_small_room {25};
const int price_large_room {35};
const float sales_tax_rate {0.06};
const int estimate_expiration {30};

int main() {

    int numberSmallRooms;
    int numberLargeRooms;


    cout <<"Welcome to Brett's carpet cleaning service quote generation tool." << endl;
    cout << "How many small rooms would you liked cleaned?:  [type number and press enter] ";
    cin >> numberSmallRooms;


    cout << "How many large rooms would you liked cleaned?:  [type number and press enter] ";
    cin >> numberLargeRooms;
 
// estimate the cost of the cleaning.

    double estimate_pre_tax;
    double estimate_total;
    double sales_tax; 


    estimate_pre_tax = price_small_room * numberSmallRooms + price_large_room * numberLargeRooms;

    sales_tax = estimate_pre_tax * sales_tax_rate;

    estimate_total = estimate_pre_tax + sales_tax;

//print console output for the estimate

    cout << "We have generated the following quote for your cleaning" << endl;
    cout << "number of small rooms:  " << numberSmallRooms << endl;
    cout << "number of large rooms:  " << numberLargeRooms<< endl;

    cout << "-------------------------------------------------------" <<endl;
    cout << "Cost: " << estimate_pre_tax << endl;
    cout << "Tax:  " << sales_tax << endl;
    cout << "=======================================================" <<endl;

    cout << "total Cost:  " << estimate_total << endl << endl;



    cout << endl;
    return 0;
}

