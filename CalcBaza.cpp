#include <iostream>
#include <iomanip>

int main() {
    int totalAmount, guys, girls;

    std::cout << "Enter the total amount: ";
    std::cin >> totalAmount;

    std::cout << "Enter the number of guys: ";
    std::cin >> guys;

    std::cout << "Enter the number of girls: ";
    std::cin >> girls;

    double guysNumber = guys * 0.7;
    double girlsNumber = girls * 0.5;
    double allNumbersPerson = guysNumber + girlsNumber;
    double onePointAmount = totalAmount / allNumbersPerson;
    double guysAmount = onePointAmount * 0.7;
    double girlsAmount = onePointAmount * 0.5;

    std::cout << std::endl;

    // find how many guys owe
    double guysAllAmount = guysAmount * guys;
    std::cout << "All Guys Amount: " << std::fixed << std::setprecision(2) << guysAllAmount << std::endl;

    // find how many girls owe
    double girlsAllAmount = girlsAmount * girls;
    std::cout << "All Girls Amount: " << std::fixed << std::setprecision(2) << girlsAllAmount << std::endl;

    // find how much one guy owes
    double oneGuysAmount = guysAllAmount / guys;
    std::cout << "One Guys Amount: " << std::fixed << std::setprecision(2) << oneGuysAmount << std::endl;

    // find how much one girl owes
    double oneGirlsAmount = girlsAllAmount / girls;
    std::cout << "One Girls Amount: " << std::fixed << std::setprecision(2) << oneGirlsAmount << std::endl;

    std::cout << "\nPress Enter to exit the program...";
    std::cin.ignore(); // waiting for user input
    std::cin.get(); // waiting for the Enter key to be pressed

    return 0;
}
