#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // food #1 constants
    const string FOOD_1_NAME = "avocado";
    const int FOOD_1_CALORIES_P100G = 167; // in calories
    const double FOOD_1_CARBS_P100G = 8.6; // in grams
    const double FOOD_1_PROTEIN_P100G = 2.0; // in grams
    const double FOOD_1_FAT_P100G = 15.4; // in grams
    const double FOOD_1_SUGAR_P100G = 0.3; // in grams
    // food #2 constants
    const string FOOD_2_NAME = "tomato";
    const int FOOD_2_CALORIES_P100G = 18; // in calories
    const double FOOD_2_CARBS_P100G = 3.9; // in grams
    const double FOOD_2_PROTEIN_P100G = 0.9; // in grams
    const double FOOD_2_FAT_P100G = 0.2; // in grams
    const double FOOD_2_SUGAR_P100G = 2.6; // in grams
    // food #3 constants
    const string FOOD_3_NAME = "sharp cheddar";
    const int FOOD_3_CALORIES_P100G = 403; // in calories
    const double FOOD_3_CARBS_P100G = 1.3; // in grams
    const double FOOD_3_PROTEIN_P100G = 24.9; // in grams
    const double FOOD_3_FAT_P100G = 33.1; // in grams
    const double FOOD_3_SUGAR_P100G = 0.5; // in grams
    // food #4 constants
    const string FOOD_4_NAME = "chicken breast";
    const int FOOD_4_CALORIES_P100G = 282; // in calories
    const double FOOD_4_CARBS_P100G = 1.75; // in grams
    const double FOOD_4_PROTEIN_P100G = 1.75; // in grams
    const double FOOD_4_FAT_P100G = 1.75; // in grams
    const double FOOD_4_SUGAR_P100G = 1.75; // in grams
    // food #5 constants
    const string FOOD_5_NAME = "whole wheat bread";
    const int FOOD_5_CALORIES_P100G = 266; // in calories
    const double FOOD_5_CARBS_P100G = 47.5; // in grams
    const double FOOD_5_PROTEIN_P100G = 10.9; // in grams
    const double FOOD_5_FAT_P100G = 3.6; // in grams
    const double FOOD_5_SUGAR_P100G = 5.8; // in grams
    // food #6 constants
    const string FOOD_6_NAME = "egg";
    const int FOOD_6_CALORIES_P100G = 143; // in calories
    const double FOOD_6_CARBS_P100G = 0.8; // in grams
    const double FOOD_6_PROTEIN_P100G = 12.6; // in grams
    const double FOOD_6_FAT_P100G = 9.9; // in grams
    const double FOOD_6_SUGAR_P100G = 0.8; // in grams

    string recipeName, userInputStr;
    int userInputInt, numOfServings;
    double totalCals, totalCarbs, totalProtein, totalFat, totalSugar;
    // initialize accumulator variables
    totalCals = 0;
    totalCarbs = 0.;
    totalProtein = 0.;
    totalFat = 0.;
    totalSugar = 0.;

    // print menu
    cout << "---------- List of Possible Ingredients ---------" << endl;
    cout << " Food #1: " << FOOD_1_NAME << endl;
    cout << " Food #2: " << FOOD_2_NAME << endl;
    cout << " Food #3: " << FOOD_3_NAME << endl;
    cout << " Food #4: " << FOOD_4_NAME << endl;
    cout << " Food #5: " << FOOD_5_NAME << endl;
    cout << " Food #6: " << FOOD_6_NAME << endl << endl;

    // name of recipe
    cout << "What are you calling this recipe? ";
    getline(cin, recipeName);

    // food #1 ---------------------------------------------------------
    // number of servings
    cout << "How many servings does this recipe make? ";
    getline(cin, userInputStr);
    istringstream(userInputStr) >> numOfServings;
    // check if user input is between 1 and 10
    if ( (numOfServings < 1) ||(numOfServings > 10))
    {
        cout << "ERROR: Value out of range.  Must be between 1 and 10";
        return 1;
    }
    cout << "How many grams of " << FOOD_1_NAME << "? ";
    getline(cin, userInputStr);
    istringstream(userInputStr) >> userInputInt;
    // check if user input is between 0 and 1000
    if ( (userInputInt < 0) ||(userInputInt > 1000))
    {
        cout << "ERROR: Value out of range.  Must be between 0 and 1000";
        return 1;
    }
    // update accumulators
    totalCals += userInputInt * (FOOD_1_CALORIES_P100G/100.);
    totalCarbs += userInputInt * (FOOD_1_CARBS_P100G/100.);
    totalProtein += userInputInt * (FOOD_1_PROTEIN_P100G/100.);
    totalFat += userInputInt * (FOOD_1_FAT_P100G/100.);
    totalSugar += userInputInt * (FOOD_1_SUGAR_P100G/100.);

    // food #2 ---------------------------------------------------------
    cout << "How many grams of " << FOOD_2_NAME << "? ";
    getline(cin, userInputStr);
    istringstream(userInputStr) >> userInputInt;
    // check if user input is between 0 and 1000
    if ( (userInputInt < 0) ||(userInputInt > 1000))
    {
        cout << "ERROR: Value out of range.  Must be between 0 and 1000";
        return 1;
    }
    // update accumulators
    totalCals += userInputInt * (FOOD_2_CALORIES_P100G/100.);
    totalCarbs += userInputInt * (FOOD_2_CARBS_P100G/100.);
    totalProtein += userInputInt * (FOOD_2_PROTEIN_P100G/100.);
    totalFat += userInputInt * (FOOD_2_FAT_P100G/100.);
    totalSugar += userInputInt * (FOOD_2_SUGAR_P100G/100.);

    // food #3 ---------------------------------------------------------
    cout << "How many grams of " << FOOD_3_NAME << "? ";
    getline(cin, userInputStr);
    istringstream(userInputStr) >> userInputInt;
    // check if user input is between 0 and 1000
    if ( (userInputInt < 0) ||(userInputInt > 1000))
    {
        cout << "ERROR: Value out of range.  Must be between 0 and 1000";
        return 1;
    }
    // update accumulators
    totalCals += userInputInt * (FOOD_3_CALORIES_P100G/100.);
    totalCarbs += userInputInt * (FOOD_3_CARBS_P100G/100.);
    totalProtein += userInputInt * (FOOD_3_PROTEIN_P100G/100.);
    totalFat += userInputInt * (FOOD_3_FAT_P100G/100.);
    totalSugar += userInputInt * (FOOD_3_SUGAR_P100G/100.);

    // food #4 ---------------------------------------------------------
    cout << "How many grams of " << FOOD_4_NAME << "? ";
    getline(cin, userInputStr);
    istringstream(userInputStr) >> userInputInt;
    // check if user input is between 0 and 1000
    if ( (userInputInt < 0) ||(userInputInt > 1000))
    {
        cout << "ERROR: Value out of range.  Must be between 0 and 1000";
        return 1;
    }
    // update accumulators
    totalCals += userInputInt * (FOOD_4_CALORIES_P100G/100.);
    totalCarbs += userInputInt * (FOOD_4_CARBS_P100G/100.);
    totalProtein += userInputInt * (FOOD_4_PROTEIN_P100G/100.);
    totalFat += userInputInt * (FOOD_4_FAT_P100G/100.);
    totalSugar += userInputInt * (FOOD_4_SUGAR_P100G/100.);

    // food #5 ---------------------------------------------------------
    cout << "How many grams of " << FOOD_5_NAME << "? ";
    getline(cin, userInputStr);
    istringstream(userInputStr) >> userInputInt;
    // check if user input is between 0 and 1000
    if ( (userInputInt < 0) ||(userInputInt > 1000))
    {
        cout << "ERROR: Value out of range.  Must be between 0 and 1000";
        return 1;
    }
    // update accumulators
    totalCals += userInputInt * (FOOD_5_CALORIES_P100G/100.);
    totalCarbs += userInputInt * (FOOD_5_CARBS_P100G/100.);
    totalProtein += userInputInt * (FOOD_5_PROTEIN_P100G/100.);
    totalFat += userInputInt * (FOOD_5_FAT_P100G/100.);
    totalSugar += userInputInt * (FOOD_5_SUGAR_P100G/100.);

    // food #6 ---------------------------------------------------------
    cout << "How many grams of " << FOOD_6_NAME << "? ";
    getline(cin, userInputStr);
    istringstream(userInputStr) >> userInputInt;
    // check if user input is between 0 and 1000
    if ( (userInputInt < 0) ||(userInputInt > 1000))
    {
        cout << "ERROR: Value out of range.  Must be between 0 and 1000";
        return 1;
    }
    // update accumulators
    totalCals += userInputInt * (FOOD_6_CALORIES_P100G/100.);
    totalCarbs += userInputInt * (FOOD_6_CARBS_P100G/100.);
    totalProtein += userInputInt * (FOOD_6_PROTEIN_P100G/100.);
    totalFat += userInputInt * (FOOD_6_FAT_P100G/100.);
    totalSugar += userInputInt * (FOOD_6_SUGAR_P100G/100.);
    // report results --------------------------------------------------
    cout << "\nNutrition for " << recipeName << " ------------" << endl;
    cout << "Calories: " << totalCals << endl;
    cout << " Calories: " << totalCals/numOfServings << endl;
    cout << " Carbohydrates: " << totalCarbs/numOfServings << endl;
    cout << " Protein: " << totalProtein/numOfServings << endl;
    cout << " Fat: " << totalFat/numOfServings << endl;
    cout << " Sugar: " << totalSugar/numOfServings << endl;

    return 0;
}
