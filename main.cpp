#include <iostream>
using namespace std;
int display()
{
	int Name = 0;
	int Standard = 0;
	int Division = 0;
	int Class = 0;
	cout << "\nName\tStandard\tDivision\tClass\n";
	cout << Name <<"\t"<< Standard<<"\t\t"<< Division<< "\t\t"<< Class<<endl;
};
int search()
{
	ifstream input;
	size_t pos;
	string line;
	string SEARCH_WORD;

	input.open("student_info.txt");
	if (input.is_open())
	{
		cout << "Whom do you want to search? ";
		cin >> SEARCH_WORD;
		while (getline(input, line))
		{
			pos = line.find(SEARCH_WORD);
			if (pos != string::npos) // string::npos is returned if string is not found
			{
				cout << "Found " << SEARCH_WORD;
				display();
			}
		}
    }
}

int main()
    for (;;)	{
	cout << "$ " << flush;
	string cmd;
	string word;
		getline(cin, cmd);
		if (cmd == "kill")
			break;
		if (cmd == "search")
			search();
	}
	return 0;
}
