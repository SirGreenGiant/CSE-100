#include <iostream>
#include <iomanip>

// Functions 
//double getDeposit(int month);
//double getWithdrawal(int month, double balance);
//double calculateMonthlyInterest(double annualRate, double startingBalance, double endingBalance);



int main(){
std:: cout << std::fixed << std::setprecision(2);
// Variables
int month;
double balance;
double annualRate;
double monthlyInterest;
double startingBalance;
double endingBalance;
double averageBalance;
double deposit;
double withdrawal;
double currentBalance = startingBalance; // This is a running total of what is available
double currentInterest = 0;
double totalInterest = 0;

double startOfMonthBalance = startingBalance; // This is only used for calculating interest
double endOfMonthBalance = startingBalance; // This is only used for calculating interest 
double averageMonthlyBalance;
//double monthlyBalance[3];
double deposits[3];
double withdrawals[3];


    //Ask for Starting balance and Annual Interest Rate (as a decimal)
    std::cout << "Enter starting balance: ";
    std::cin >> startingBalance;
    std::cout << "Enter annual interest rate (as decimal, e.g., 0.05 for 5%): ";
    std::cin >> annualRate;
    monthlyInterest = annualRate / 12;




for (month = 0; month < 3; month++){

// ! Deposits
bool validDeposit = false;
bool validWithdrawal = false;
startOfMonthBalance = endOfMonthBalance;

    for (int attempt = 1; attempt <= 3; attempt++){
        std::cout << "Enter total deposits for month " << month + 1 << ": ";
        std::cin >> deposit;
        
        if (deposit < 0){
            std::cout << "Invalid input! Value should be non-negative." << "\n"; continue;
        }       
        else{
            deposits[month] = deposit; 
            validDeposit = true;
            break;
        }
    }

    if (!validDeposit){
        std::cout << "Too many invalid attempts!" << '\n';
        return 1;
    }

    currentBalance += deposit;


// ! Withdrawals
    for (int attempt = 1; attempt <= 3; attempt++){
        std::cout << "Enter total withdrawals for month " << month + 1 << ": ";
        std::cin >> withdrawal;
            if (withdrawal < 0){
                std::cout << "Invalid input! Value should be non-negative." << "\n"; continue;
            }
            else if (withdrawal > currentBalance){
                std::cout << "Withdrawal cannot be negative or exceed current balance!" << '\n'; continue;
            }
            else {
                withdrawals[month] = withdrawal;
                validWithdrawal = true;
                break;
            }
    }

    if (!validWithdrawal){
        std::cout << "Too many invalid attempts!" << '\n';
        return 1;
    }

    currentBalance -= withdrawal;


    // Calculating Monthly Interest 
    endOfMonthBalance = currentBalance;
    averageMonthlyBalance = (startOfMonthBalance + endOfMonthBalance) / 2;
    currentInterest = averageMonthlyBalance * monthlyInterest;
    totalInterest += currentInterest;


}

// Calculations 
//    double totalBalance = 0;
  //  double totalInterest = 0;
    double totalDeposits = 0;
    double totalWithdrawals = 0;
    double finalBalance = 0;
    
    // Total Deposits and Withdrawals
    for (int i = 0; i < 3; i++){
        totalDeposits += deposits[i];
        totalWithdrawals += withdrawals[i];
    }

    finalBalance = startingBalance + totalDeposits - totalWithdrawals;
    
//    averageBalance = (startingBalance + totalBalance) / 2;
//    totalInterest = (averageBalance * monthlyInterest) * 3;
//    finalBalance = totalInterest + currentBalance;

    // OUTPUT 
    std::cout << '\n' << "Savings Account Report" << '\n';
    std::cout << "----------------------" << '\n';
    std::cout << "Starting Balance: $" << startingBalance << '\n';
    std::cout << "Total Deposits:   $" << totalDeposits << '\n';
    std::cout << "Total Withdrawals:$" << totalWithdrawals << '\n';
    std::cout << "Total Interest:   $" << totalInterest << '\n';
    std::cout << "Final Balance:    $" << finalBalance << '\n';

return 0;
}

/*
double getDeposit(int month){
    double deposit;
    std::cout << "Enter total deposits for month " << month << ": ";
    std::cin >> deposit;

    if (deposit < 0){
        return std::cout << "Invalid input! Value should be non-negative." << "\n";
    }
    return deposit;
}

void getWithdrawal(int month, double balance){
    double withdrawal;
    std::cout << "Enter total withdrawals for month " << month << ": ";
    std::cin >> withdrawal;

    
    if (withdrawal < 0){
        return std::cout << "Invalid input! Value should be non-negative." << "\n";
    }
    if (withdrawal > balance){
        return std::cout << "Withdrawal cannot be negative or exceed current balance!" << '\n';
    }
    return withdrawal;
    
}

double calculateMonthlyInterest(double annualRate, double startingBalance, double endingBalance){}
*/