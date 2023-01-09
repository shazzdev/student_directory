#include <iostream>
using namespace std;
void search () {
    ifstream input;
	size_t pos;	string line;
	string SEARCH_WORD;
	input.open("student_info.txt");
	if (input.is_open())
	{
		cin >> SEARCH_WORD;
		while (getline(input, line))
		{
			pos = line.find(SEARCH_WORD);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				cout << "Found "<<SEARCH_WORD<<endl;
				break;
			}
		}
	}
}
int main()
{
    for (;;)
    {
        cout << "$ " << flush;
        string cmd;
        string word;
        getline(cin, cmd);
        if cmd==("search")
            search();
        if (input == "kill")
        break;
    }
    return 0;
}
