// Name:business expenses calculator
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>

int main()

{
  double days, hotel, meal, total;
  std::cout << "Welcome to the business trip tracker!" << std::endl;
  std::cout << "" << std::endl;

  std::string location;
  std::cout << "What is the business trip loctaion?" << std::endl;
  std::cin >> location;

  std::cout << "How many days will the trip take?" << std::endl;
  std::cin >> days;

  std::cout << "what is the total hotel expense?" << std::endl;
  std::cin >> hotel;

  std::cout << "What is the total meal expense?" << std::endl;
  std::cin >> meal;

  //calculate
  total = hotel + meal;

  //display
  std::cout << "Location  " << " Days   " << "Hotel  "<< "Meal " << "Total" << std::endl;
  std::cout <<  location <<'\t'<<  days<< '\t' <<  hotel << '\t' <<  meal << '\t' << total  << std::endl;

  return 0;
}
