#include <iostream>
#include <string>
using namespace std;

// method prototypes
char getKeyLetter();
string getString();
string maskLetter(string theString, char keyLetter);
string removeLetter(string theString, char keyLetter);
int countKey(string theString, char keyLetter);

int main()
{
    char keyLetter;
    string stringInput;
    string maskedOutput;
    string removedOutput;
    int countKeyOutput;

    keyLetter = getKeyLetter();
    stringInput = getString();

    maskedOutput = maskLetter(stringInput, keyLetter);
    removedOutput = removeLetter(stringInput, keyLetter);
    countKeyOutput = countKey(stringInput, keyLetter);
    cout << "\n";
    cout << "String with " << "'" << keyLetter << "'" << " masked: "
         << maskedOutput << endl;
    cout << "String with " << "'" << keyLetter << "'" << " removed: "
         << removedOutput << endl;
    cout << "Key count: " << countKeyOutput << endl;
}

char getKeyLetter()
{
    char keyLetter;
    string prompt;
    string userInput;
    const int requiredInputLen = 1;
    int lenUserInput = 0;

    while (lenUserInput != requiredInputLen)
    {
        // get key user wants to search for
        prompt = "Please enter a SINGLE letter to act as key: ";
        cout << prompt;
        getline(cin, userInput);
        lenUserInput = userInput.length();
    }
    keyLetter = userInput[0]; // our other functions are expecting a char value
    return keyLetter;
}

string getString()
{
    string prompt;
    string userInput;
    const int MIN_INPUT_LEN = 4;
    int lenUserInput = 0;

    while (lenUserInput < MIN_INPUT_LEN)
    {
        // get key user wants to search for
        prompt = "Please enter a phrase or sentence >= 4 letters: ";
        cout << prompt;
        getline(cin, userInput);
        lenUserInput = userInput.length();
    }
    return userInput;
}

string maskLetter(string theString, char keyLetter)
{
    int stringLen = theString.length();
    string maskedString;

    for (int i = 0; i <= stringLen-1; i++)
    {
        if (theString[i] == keyLetter)
        {
            maskedString = maskedString + "-";
        }
        else
        {
            maskedString = maskedString + theString[i];
        }
    }
    return maskedString;
}

string removeLetter(string theString, char keyLetter)
{
    int stringLen = theString.length();
    string removedKeyString;

    for (int i = 0; i <= stringLen-1; i++)
    {
        if (theString[i] == keyLetter)
        {
            continue;
        }
        else
        {
            removedKeyString = removedKeyString + theString[i];
        }
    }
    return removedKeyString;
}

int countKey(string theString, char keyLetter)
{
    int stringLen = theString.length();
    int keyCount = 0;

    for (int i = 0; i <= stringLen-1; i++)
    {
        if (theString[i] == keyLetter) keyCount++;
    }
    return keyCount;
}
