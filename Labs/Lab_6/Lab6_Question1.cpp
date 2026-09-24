#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>

// Declaring Functions
int monthCheck(std::string month); // Contains the months with their spelling and correct number of days then checks if input is acceptable
// int dateCheck(int date, int max_days, int prevDate, int i); // Checks if the day input is reasonable 
//bool snowCheck(double snowfall); // Checks if snowfall is non-negative 
std::string suffixFunction_max(int max_snow_day);
std::string suffixFunction_min(int min_snow_day);


//Global Variables 
std::string monthNamesArray[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int monthDaysArray[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main (){
    // Variables 
    std::string month;
    int monthIndex;
    int max_days;
    int attempt;
    
    // Arrays
    int dates[7];
    double snowInches[7];
    int dateRange[7];

    std::setprecision(2);
    
// ! Month Input and Validation
    for (attempt = 1; attempt <= 3; attempt++){
        std::cout << "Enter the month name: ";
        getline (std::cin, month);
    
        // Month Formatting
    // Lowercase conversion
    for (char& c : month) {
        c = std::tolower(c);
        }
    // Uppercase First Letter 
        month[0] = toupper(month[0]);
    
        monthIndex = monthCheck(month);
        if (monthIndex != -1){
            max_days = monthDaysArray[monthIndex];
            break;
        }
        if (monthIndex == -1){
            std::cout << "Invalid month! " << "\n";
            continue;
        }
    }
    if (attempt == 4){
        std::cout << "Exceeded the number of Invalid Attempts!" << '\n';
        return 1;
    }

    int prevDate = 0;

// ! Daily Data Input and Validation
    for (int i = 0; i < 7; i++){
        attempt = 1;

        for (int attempt = 1; attempt <= 3; attempt++){
            int date;
            double snowfall;
            int dayIndex;

            std::cout << "Enter the day of the month and snowfall (inches) for entry " << i + 1 << " (e.g., 12 8.750): ";
            std::cin >> date >> snowfall;
        
            // Making sure date is with range 
            int remainingDays = max_days - date;
            
            if (date < 0){
                std::cout << "Date must be non-negative\n"; continue;
            }
            else if (date > max_days){
                    std::cout << "Date is larger than number of days in the month!\n"; continue;
                }
            else if (i == 0 && remainingDays < 7){
                    std::cout << "Range exceeds the days in the month! \n"; continue;
                }
            else if (i > 0 && date != dates[i - 1] + 1) {
                std::cout << "Dates must be strictly consecutive!\n";
            }
            else if (snowfall < 0){
                std::cout << "Invalid snowfall!" << '\n'; continue;
            }
            else {            
                dates[i] = date;
                snowInches[i] = snowfall;
                break;
            }
        }
        if (attempt == 4){
            std::cout << "Exceeded the number of Invalid Attempts!" << '\n';
            return 1;
        }    
    }

// ! Calculations
    // Retrieving Highest Data 
        double max_snow;
        int max_snow_day;
        max_snow = 0;
        max_snow_day = 0;
    for (int i = 0 ; i < 7; i++){
        if (snowInches[i] > max_snow)
            {max_snow = snowInches[i];
            max_snow_day = dates[i];}
    }

    // Retrieving Lowest Data 
        double min_snow; 
        int min_snow_day;
        min_snow = snowInches[0];
        min_snow_day = dates[0];
    for (int i = 0 ; i < 7; i++){
        if (snowInches[i] < min_snow)
            {min_snow = snowInches[i];
            min_snow_day = dates[i];}
    }

    // Average 
    double averageSnow;
    double totalSnow = 0;
    for (int i = 0 ; i < 7; i++){
        totalSnow += snowInches[i];
    }
    averageSnow = totalSnow / 7;

// ! FINAL REPORT 
    std::cout << '\n' << "Snow report " << month << " " << dates[0] << " - " << dates[6]<< '\n';
    std::cout << "============\n";
    std::cout << "Date\tSnow Fall\n";
    for (int i = 0; i < 7; i++){
        std::cout << "  " << dates[i] << "\t" << snowInches[i] << '\n';
    }
    std::cout << "============\n";
    std::cout << "Highest snow fall is " << max_snow << " on " << max_snow_day << suffixFunction_max(max_snow_day) << '\n';
    std::cout << "Lowest snow fall is " << min_snow << " on " << min_snow_day << suffixFunction_min(min_snow_day) << '\n';
    std::cout << "The average snow fall is " << averageSnow << '\n';
    
    return 0;
}


int monthCheck(std::string month){
    for (int i = 0; i < 12; i++){
        if (monthNamesArray[i] == month){
            return i; 
        }
    }
            return -1;
}

// Suffix for numbers 1-31 (MAX)
std::string suffixFunction_max(int max_snow_day){
    if (max_snow_day == 1 || max_snow_day == 21 || max_snow_day == 31){
        return "st";
    }
    if (max_snow_day == 2 || max_snow_day == 22){
        return "nd";
    }
    if (max_snow_day == 3 || max_snow_day == 23){
        return "rd";
    }
    if (max_snow_day >= 4 && max_snow_day <= 20){
        return "th";
    }
        return "th";
}

// Suffix for numbers 1-31 (MIN)
std::string suffixFunction_min(int min_snow_day){
    if (min_snow_day == 1 || min_snow_day == 21 || min_snow_day == 31){
        return "st";
    }
    if (min_snow_day == 2 || min_snow_day == 22){
        return "nd";
    }
    if (min_snow_day == 3 || min_snow_day == 23){
        return "rd";
    }
    if (min_snow_day >= 4 && min_snow_day <= 20){
        return "th";
    }
        return "th";
}
