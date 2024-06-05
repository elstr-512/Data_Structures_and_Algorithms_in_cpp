#include "CreditCard.h"                      // provides CreditCard
using namespace std;                         // make std:: accessible

CreditCard::CreditCard(const string& no, const string& nm, int lim, double bal) {
  number = no;
  name = nm;
  balance = bal;
  limit = lim;
}
bool CreditCard::chargeIt(double price) {   // make a charge
  if (price + balance > double(limit))
    return false;                          // over limit
  
  balance += price;
  return true;                              // the charge goes through
}

void CreditCard::makePayment(double payment) { // make a payment
  balance -= payment;
}
                                            // print card information
ostream& operator<<(ostream& out, const CreditCard& c) {
  out << "Number = "  << c.getNumber()  << "\n"
      << "Name = "    << c.getName()    << "\n"
      << "Balance = " << c.getBalance() << "\n"
      << "Limit = "   << c.getLimit()   << "\n";
  return out;
}