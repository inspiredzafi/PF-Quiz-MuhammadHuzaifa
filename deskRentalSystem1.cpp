// Write a program for a co-working space to calculate desk rentals. Read N clients and days used for each client. Charge 800 per day. If days > 10 apply a 10% discount for that client. Print bill per client and total revenue. Use variables, loops, IO and conditions. Push your program to GitHub and paste the repository URL as the answer in Moodle.

#include <iostream>
#include <string>
using namespace std;

float getDiscount (int actuallBill){

    return ( (actuallBill / 100.0) * 10 );    // 10% discount.

}

int main(){

// Cost per day = 800
int costPerDay = 800;
int n;

cout<< "Enter the number of clients: " ;
cin>> n;

string clients[n];
int daysUsed[n];
int actuallBills[n];
float discounts[n];
float discountedBills[n];

for (int i = 0 ; i < n ;  i++){
cout<< "\n\nEnter name of the " << i + 1 << " client: " ;

// Ye do bar isliye hy ku k, jab N clients input kr k ENTER press kia jata hay to ye getline trigger hojata. To ek skip hojaye ga aur ek input lay lay ga.

getline(cin, clients[i]);
getline(cin, clients[i]);

cout<< "\nEnter the number of days used: " ;
cin >> daysUsed[i] ;


actuallBills[i] = costPerDay * daysUsed[i] ;

if (daysUsed[i] > 10){

      discounts[i] = getDiscount( actuallBills[i] );

}
else{
      discounts[i] = 0 ;
}

discountedBills[i] = actuallBills[i] - discounts[i] ;


} 

// Loops for printing the Bills for clients and total Revenue;

float revenue = 0.0 ;

for (int i = 0; i < n ; i++){

cout<< "\n\n__Bill Receipt\n" ;
cout << "Name: " << clients[i] << endl;
cout<< "Number of days used: " << daysUsed[i] << endl ;
cout<< "Actual Bill (800 per day)  : " << actuallBills[i] << endl ;
cout<< "Discount: " << discounts[i]  << endl;
cout<< "Amount to be paid: " << discountedBills[i] << endl ;

}


return 0;
}
