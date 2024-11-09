#include<iostream>    
#include <math.h>   

using namespace std;    

  

float displaypricing (int& Ppax, int& Spax, int& Bpax); 

float ticket_total (double ticket, int& Ppax, int& Spax, int& Bpax); 

int food_beverage (int totalfood);   

double customerstatus (double member); 

  

int main()    

{  

int Ppax=0, Spax=0, Bpax=0; 

 

for (int i= 0; i < 50; i++)  

{  

displaypricing (Ppax, Spax, Bpax); 

 

double price_ticket, ticket;  

price_ticket = ticket_total(ticket, Ppax, Spax, Bpax); 

  

int totalfood;    

double price_food, totalprice;   

 

cout << "\nFood & Beverage"<< endl;    

cout << "---------------------------------------------------------------"<< endl;    

cout << "\nCombo A (Big)     : 1x Popcorn and 1x Softdrink      | RM 20 "<< endl;    

cout << "Combo B (Regular) : 1x Popcorn and 1x Softdrink      | RM 10 "<< endl;    

cout << "Enter C           : No, thanks"<< endl;    

cout << "\n---------------------------------------------------------------"<< endl;    

 

price_food = food_beverage (totalfood); 

 

totalprice = price_food + price_ticket;   

 

cout << "\n\nYour total price is RM " << totalprice << endl;   

 

cout << "\nCustomer status" << endl; 

cout << "----------------------------------------------------" << endl; 

cout << "Members will get 15% discount of overall price"	 << endl; 

cout << "----------------------------------------------------" << endl; 

 

double new_price, member_price, member; 

 

member_price = customerstatus (member); 

 

new_price = totalprice - (totalprice * member_price); 

  

cout << "\nThe total price : RM" << new_price << endl; 

 

double rounding;   

 

rounding = ceil(new_price);   

 

cout << "Your total price after rounding is RM " << rounding << endl << endl << endl; 

cout << "_________________________________________________________________" << endl; 

cout << "                              NEXT                               " << endl; 

cout << "_________________________________________________________________" << endl; 

cout << endl;   

cout << endl; 

cout << endl; 

}  

return 0; 

  

}  

  

   

  

float ticket_total (double ticket, int& Ppax, int& Spax, int& Bpax) // AFIQAH NAJWA 

{  

char seatcode, category;   

cout << "Please enter your seat code here (P/S/B): ";   

cin >> seatcode;   

 

cout << "\nEnter category." << endl;   

cout << "A for adult or C for children: ";   

cin >> category;   

 

if (seatcode == 'P'||seatcode == 'p') 

   

{   

if (category =='A'||seatcode == 'a')   

ticket = 45;   

 

else if (category =='C'||seatcode == 'c')   

ticket = 40;   

 

Ppax = Ppax + 1;  

}   

 

   

 

else if (seatcode == 'S'||seatcode == 's')   

{   

if (category =='A'||seatcode == 'a')   

ticket = 35;   

 

else if (category == 'C'||seatcode == 'c')   

ticket = 30;   

 

Spax = Spax + 1;  

}   

 

else if (seatcode == 'B'||seatcode == 'b')   

{   

if (category =='A'||seatcode == 'a')   

ticket = 25;   

 

else if (category == 'C'||seatcode == 'c')   

ticket = 20; 

 

Bpax = Bpax + 1; 	   

}   

 

cout << "\nThe ticket price is: RM" << ticket << endl;   

return ticket;	 

return Ppax, Spax, Bpax;  

}  

  

int food_beverage (int totalfood) // AIN NADHIRAH	 

{   

char combo;    

int setamount, foodprice;    

 

cout << "\nEnter your combo code (A/B/C) : ";    

cin >> combo;    

 

if (combo == 'A' || combo == 'a')    

foodprice = 20;    

 

else if (combo == 'B'|| combo == 'b')    

foodprice = 10;    

 

else if (combo == 'C'|| combo == 'c')    

foodprice = 0;    

 

cout << "Please enter amount of set(s) wanted : ";    

cin >> setamount;    

 

totalfood  = foodprice * setamount;    

cout << "\nTotal for food and beverage(s) : RM " << totalfood << endl;    

return totalfood;   

} 

  

double customerstatus (double member) // BATRISYA MIZA 

{ 

int select; 

string select_new[2] = {"member", "non-member"}; 

 

cout << "\nAre you a member? If yes enter 1, if not a member enter 2 : "; 

cin >> select; 

 

switch (select) 

{ 

case 1: 

cout << "\nYou are a " << select_new[0]; 

member = 0.15; //member 

break; 

 

default : 

cout << "\nYou are a " << select_new[1]; 

member = 0; //non member 

break; 

} 

 

return member; 

} 

  

float displaypricing (int& Ppax, int& Spax, int& Bpax) // FATEN ALYA 

{ 

cout << "                     Welcome to Aurora Theatre!" << endl << "---------------------------------------------------------------------" << endl;   

cout << "                        NOW SHOWING : Pulang" << endl << endl;    

cout << "  Remaining seat : Premium > "<< Ppax << "/16 : Standard > " << Spax << "/17 : Balcony > " << Bpax << "/17" << endl << endl; 

cout << "Please enter the seat category by entering the code given" << endl;   

cout << " Premium seat --> P  |   Standard seat --> S   |   Balcony --> B" << endl;   

cout << "   Adult - RM 45.00  |     Adult - RM 35.00    |  Adult - RM 25.00 " << endl;   

cout << " Children - RM 40.00 |   Children - RM 30.00   | Children - RM 20.00" << endl << endl;   

return Ppax, Spax, Bpax;	 

} 