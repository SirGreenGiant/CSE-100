#include <iostream>
#include <cctype>
#include <string>

// Declaring Functions
int monthCheck(std::string month); // Contains the months with their spelling and correct number of days then checks if input is acceptable
int dateCheck(int date, int max_days, int prevDate); // Checks if the day input is reasonable 
bool snowCheck(double snowfall); // Checks if snowfall is non-negative 
int findDate(std::string userInput);
double findSnowfall(std::string userInput);
std::string suffixFunction_max(int max_snow_day);
std::string suffixFunction_min(int min_snow_day);


//Global Variables 
std::string monthNamesArray[12] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
int monthDaysArray[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


int main (){
    // Variables 
    std::string month;
    int monthIndex;
    int max_days;
    int attempt;
    int prevDate;
    
    // Arrays
    int dates[7];
    double snowInches[7];


    // Month Input and Validation
    for (int attempt = 1; attempt <= 3; attempt++){
        std::cout << "Enter the month name: ";
        getline (std::cin, month);
    // Lowercase conversion
        for (char& c : month) {
        c = std::tolower(c);
    }

        if (monthIndex != -1){
            monthIndex = monthCheck(month);
            max_days = monthDaysArray[monthIndex];
            break;
        }
        if (monthIndex == -1){
            std::cout << "Invalid month! " << " ";
            continue;
        }
    }
    if (attempt == 3){
        std::cout << "Exceeded the number of Invalid Attempts!" << '\n';
        return 1;
    }

    // ! CHECKPOINT 
    std::cout << "\n Checkpoint 1 \n\n";

    /* ! This code takes the user input, day_snowfall, then states if its valid or not. 
    If both checks come back as valid, those numbers will be input into the arrays.
    Otherwise, if even one check comes back as false the user is told what is wrong and prompted to re-enter values ! */

    for (int i = 0; i < 7; i++){
        for (int attempt = 1; attempt <= 3; attempt++){
            int date; 
            double snowfall;
            double  userInput;
            bool dateValid = false;
            bool snowValid = false;
            int dateCode;

            std::cout << "Enter the day of the month and snowfall (inches) for entry " << i << " (e.g., 12 8.750): ";
            std::cin >> userInput;

            date = findDate(userInput);
            snowfall = findSnowfall(userInput);
            dateCode = dateCheck(date, max_days, prevDate);
            
            switch (dateCode){
                case 1 : dateValid = true; break;
                case 2 : std::cout << "Date must be non-negative\n"; break;
                case 3 : std::cout << "Date is larger than number of days in the month!\n"; break;
                case 4 : std::cout << "Dates must be strictly consecutive!\n";break;
            }

            snowValid = snowCheck(snowfall);

            // Both Checks come back valid
            if (dateValid = true && snowValid = true){
                prevDate = date;
                dates[i] = date;
                snowInches[i] = snowfall;
                break;
            }
        }
            if (attempt == 3){
                std::cout << "Exceeded the number of Invalid Attempts!" << '\n';
                return 1;
            }
        }

    // ! CHECKPOINT 
    std::cout << "\n Checkpoint 2 \n\n";


    // Retrieving Highest Data 
        int max_snow;
        int max_snow_day;
    for (int i = 0 ; i < 7; i++){
        max_snow = 0;
        max_snow_day = 0;
        if (snowInches[i] > max_snow)
            {max_snow = snowInches[i];
            max_snow_day = dates[i];}
    }

    // Retrieving Lowest Data 
        int min_snow;
        int min_snow_day;
    for (int i = 0 ; i < 7; i++){
        min_snow = snowInches[0];
        min_snow_day = snowInches[0];
        if (snowInches[i] < min_snow)
            {min_snow = snowInches[i];
            min_snow_day = dates[i];}
    }

    // Average 
    double averageSnow =0 ;
    for (int i = 0 ; i < 7; i++){
        averageSnow += snowInches[i];
    }
    
    // ! CHECKPOINT 
    std::cout << "\n Checkpoint 3 \n\n";

    // FINAL REPORT 
    std::cout << "Snow report " << month << " " << dates[0] << " - " << dates[6]<< '\n';
    std::cout << "============\n";
    std::cout << "Date\tSnow Fall\n";
    for (int i = 0; i < 7; i++){
        std::cout << "  " << dates[i] << "\t" << snowInches[i] << '\n';
    }
    std::cout << "============\n";
    std::cout << "Highest snow fall is " << max_snow << " on " << max_snow_day << suffixFunction_max(max_snow_day);
    std::cout << "Lowest snow fall is " << min_snow << " on " << min_snow_day << suffixFunction_min(min_snow_day);
    std::cout << "The average snow fall is " << averageSnow;
    
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

int inputLength;
int date;

// TODO : Rewrite this but instead of using strings, figure out a way to get both numbers out 
// ? Use algorithms or turn it into an array ?
// ! Remember to change the previous values from strings to whatever 

int findDate(std::string userInput){
    int spaceIndex;
    // Find the String Length
    inputLength = userInput.length();
    // Find the Index of the space
    spaceIndex = userInput.find(" ");
    // Get date from before space
    date = userInput.substr(0,spaceIndex);
}

// TODO : Rewrite this but instead of using strings, figure out a way to get both numbers out 
// ? Use algorithms or turn it into an array ?
// ! Remember to change the previous values from strings to whatever 

double findSnowfall(std::string userInput){
    int spaceIndex;
    int snowfall;
    // Find the String Length
    inputLength = userInput.length();
    // Find the Index of the space
    spaceIndex = userInput.find(" ");
    // Get Snowfall from after space
    snowfall = userInput.substr(spaceIndex + 1);
}

//Day Input and Validation Function
int dateCheck(int date, int max_days, int prevDate){
    // ? Is date a non-negative number ? 
    // ? Does date exceed max_days ?
    // ? Is date consecutive and Ascending ?

    if (date > 0 && date <= max_days && date = prevDate + 1){
        return 1;
    }
    if (date !> 0){
        return 2;
    }
    if (date !< max_days && date != max_days){
        return 3;
    }
    if (date = prevDate + 1){
        return 4;
    }
}

// Snowfall Input and Validation Function
bool snowCheck(double snowfall){
 // ? Is snowfall a positive number ?
    if (snowfall > 0){
        return true;}
    else {return false;}
}

// Suffix for numbers 1-31 (MAX)
std::string suffixFunction_max(int max_snow_day){
    if (max_snow_day == 1 || max_snow_day == 21 || max_snow_day == 31){
        return "st";
    }
    if (max_snow_day == 2 || max_snow_day == 22){
        return "nd";
    }
    if (max_snow_day || max_snow_day == 23){
        return "rd";
    }
    if (max_snow_day >= 4 && max_snow_day <= 20){
        return "th";
    }
    if (max_snow_day >= 24 && max_snow_day <= 29){
        return "th";
    }
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
    if (min_snow_day >= 24 && min_snow_day<= 29){
        return "th";
    }
    }
