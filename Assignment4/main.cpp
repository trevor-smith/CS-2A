#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {

    int stampCount = 0;
    // 10 stamps makes a customer eligible for free yogurt
    const int freeYogurtStampCost = 10;
    // when customer uses stamps for yogurt, reduce their stampCount
    const int reduceStampCount = 10;
    string userInput;
    int userInputInt;
    bool exitProgram = false;
    int maxYogurts = 5;
    int minYogurts = 1;
    char firstChar;

    cout << "Welcome to Foothill FroYo!" << std::endl;

    while (!exitProgram)
    {
        cout << "Menu \n";
        cout << "   P (process) \n";
        cout << "   S (shut down) \n";

        cout << "   Your choice: ";
        getline(cin, userInput);
        // store first character of input
        firstChar = userInput[0];

        if (toupper(firstChar) == 'S')
        {
            cout << "Shutting down Foothill FroYo";
            exitProgram = true;
            break;
        }
        // check if first character entered is a letter
        if (!isalpha(firstChar))
        {
            cout << "First character must be a letter \n";
            continue;
        }
        else if (toupper(firstChar) != 'P')
        {
            cout << "Please enter P or S only \n";
            continue;
        }
            // input has been validated, now lets process transaction
        else
        {
            // if the customer has enough stamps for a free yogurt
            if (stampCount >= freeYogurtStampCost)
            {
                cout << "Would you like a free yogurt? Y or N: ";
                getline(cin, userInput);
                firstChar = userInput[0];

                // check if first character entered is a letter
                if (!isalpha(firstChar))
                {
                    cout << "Entry must be a letter \n";
                    continue;
                }
                if (toupper(firstChar) == 'Y')
                {
                    stampCount = stampCount - freeYogurtStampCost;
                    cout << "Enjoy your yogurt! \n";
                    cout << "You now have " << stampCount << " stamp(s)\n";
                }
                    // repetitive code block, but I couldn't figure out how to accept
                    // 'N' as an input and have the code continue straight to the last
                    // else loop below
                    // if they have 10+ stamps, but choose not to use them
                else
                {
                    cout << "How many yogurts would you like to buy? \n";
                    getline(cin, userInput);
                    istringstream(userInput) >> userInputInt;
                    if (userInputInt > maxYogurts || userInputInt < minYogurts)
                    {
                        cout << "You can only purchase between " << minYogurts
                             << " and " << maxYogurts << " yogurts at once \n";
                        continue;
                    }
                    stampCount = stampCount + userInputInt;
                    cout << "You now have " << stampCount << " stamp(s)\n\n";
                }
            }
                // if the customer didn't have enough stamps for a free yogurt
            else
            {
                cout << "How many yogurts would you like to buy? \n";
                getline(cin, userInput);
                istringstream(userInput) >> userInputInt;
                if (userInputInt > maxYogurts || userInputInt < minYogurts)
                {
                    cout << "You can only purchase between " << minYogurts
                         << " and " << maxYogurts << " yogurts at once \n";
                    continue;
                }
                stampCount = stampCount + userInputInt;
                cout << "You now have " << stampCount << " stamp(s)\n\n";
            }

        }

    }
    return 0;
}
