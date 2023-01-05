#include <iostream>
using namespace std;

int main()
{
    for (;;)
    {
        cout << "$ " << flush;
        string input;
        getline(cin, input);
        cout << endl;
        if (input == "kill")
        break;
    }
    return 0;
}
