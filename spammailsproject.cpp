#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email;
    int spamScore = 0;

    cout << "Enter the email content:\n";
    getline(cin, email);

    // Check for common spam words
    if (email.find("win") != string::npos)
        spamScore++;

    if (email.find("free") != string::npos)
        spamScore++;

    if (email.find("prize") != string::npos)
        spamScore++;

    if (email.find("urgent") != string::npos)
        spamScore++;

    if (email.find("click here") != string::npos)
        spamScore++;

    if (email.find("money") != string::npos)
        spamScore++;

    // Display result
    if (spamScore >= 1)
        cout << "\nThis email is likely SPAM.\n";
    else
        cout << "\nThis email appears to be safe.\n";

    return 0;
}