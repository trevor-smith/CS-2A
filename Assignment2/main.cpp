#include <iostream>

int main()
{
    const int myID = 20351575;
    const int myFirstNameLen = 6; //First name = Trevor
    const int myLastNameLen = 5; //Last name = Smith
    int a = myFirstNameLen;

    //Calculate ratio of length of first name to last name
    double d = (double) myFirstNameLen/myLastNameLen;

    //Calculate remainder after dividing myID by 1000
    int n = myID%1000;

    //Calculate the Arithmetic Progression
    double sum = ((double) n/2) * ((2*a) + (n-1)*d);

    std::cout << "The sum of the first " << n
              << " terms of the AP with first term " << a
              << " and difference " << d << " = " << sum << std::endl;
    return 0;
}
