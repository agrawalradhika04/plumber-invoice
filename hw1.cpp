//
//Radhika Agrawal
//CS110 - HW1 titled 'Calling the Plumber'
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	// Program to compute the total bill that a plumber has to charge their customer for the services offered.
	// Assume that all numerical input values in the program are positive integers.
    cout << "Enter the name of your plumbing company: ";
    string company_name;
    cin >> company_name;
    
    cout << "Enter the address where bill needs to be paid by the customer: ";
    string address;
    cin >> address;
    
    cout << "What is your trip fee? ";
	int trip_fee;
	cin >> trip_fee;
	
	cout << "What is your hourly rate? ";
	int hourly_rate;
	cin >> hourly_rate;
	
	cout << "What is the cost of materials? ";
	int materials_cost;
	cin >> materials_cost;
	
	cout << "How many hours did you work? ";
	int number_of_hours;
	cin >> number_of_hours;
	
    int hours_worked = hourly_rate * number_of_hours; //To calculate the total hourly pay according to the number of hours worked.
    
    double total_cost = trip_fee + materials_cost + hours_worked;
    
	cout << endl << "The total cost is " << total_cost << endl;
    
    double final_bill = total_cost + (total_cost * 8/100); //Assume that the sales tax to be levied is 8% of the total bill.
    cout << fixed << setprecision(2) << endl << "Inclusive of sales tax, the final bill is " << final_bill << endl;
    
    string total_hourly_pay = to_string (number_of_hours); //Converting the datatype of number_of_hours from int to string by storing it as a new variable.
        
    //Creating an invoice from all the data above.
    cout << endl << "---------------------------------------------" << endl;
    cout << "      INVOICE" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Plumbing Company: " << company_name << endl;
    cout << "Address: " << address << endl;
    cout << "---------------------------------------------" << endl;
    cout << setw(30) << left << "Description" << setw(10) << "Amount" << endl;
    cout << "---------------------------------------------" << endl;
    cout << setw(30) << left << "Trip Fee" << "$" << setw(10) << trip_fee << endl;
    cout << setw(30) << left << "Total Hourly Charge (" + total_hourly_pay + " hours)" << "$" << setw(10) << hours_worked << endl;
    cout << setw(30) << left << "Materials Cost" << "$" << setw(10) << materials_cost << endl;
    cout << setw(30) << left << "Sales Tax" << "$" << setw(10) << total_cost * 8/100 << endl;
    cout << "---------------------------------------------" << endl;
    cout << setw(30) << left << "Total Amount" << "$" << setw(10) << final_bill << endl;
    cout << "---------------------------------------------" << endl;
        
        return 0;
    
	return 0;
}
