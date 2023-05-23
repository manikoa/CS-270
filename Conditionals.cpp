/* Maniko Anthony
Assignment HW02 */

#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to Social Media Trends!\n";
    cout << "Was your post shared? Yes or No.\n";
    string response;
    cin >> response;
    cout << "You've entered " << response << ". " << endl;

    if (tolower(response[0]) == 'y')
    {
        cout << "How many times was your post shared on Instagram?\n";
        int numShared;
        cin >> numShared;
        cout << "You entered " << numShared << ".\n";

        if (numShared > 100000)
        {
            cout << "Congratulations! Your post is hot.\n";
            if (numShared > 5000)
                cout << "Wow! Your post is exciting.\n";
            if (numShared > 1000)
                cout << "Your post is awesome!\n";
        }
        else if (numShared <= 1000) // Changed else(numShared <= 1000) to else if (numShared <= 1000)
        {
            cout << "Sorry! your post is boring.";
        }
    }

    return 0;
}
