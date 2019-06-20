#include <iostream>
using namespace std;
#include <map>
#include <string>
/*
Solution to the problem
by Ahmed A. Hassan

date: 09/09/2018

*/

int main()
{
	/*
	declaring instance variables including  a map variable
	*/
	std::map < string, int> mymap;
	int j = 0;
	string str, r, s, sol, b;
	string alphabet[] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" };


	/* for loop to assign each key with value,
	for ex: {["a" = 1], ["b = 2"]}

	*/

	for (int i = 1; i < 27; i++) {
		j++;
		string a = alphabet[i - 1];
		mymap[a] = j;

	}
	/*
	prompting for input
	*/
	cout << "please enter a valid input: " << endl;
	getline(cin, str);
	b = str[0];
	int number = 0;
	number = stoi(b);

	if (number > 9 || number < 1) {
		cout << " error: please enter number between 1 and 9" << endl;
	}

	// for loop to iterate through the string
	for (int i = 1; i < str.length(); ++i) {

		s = str[i];
		//cout << "letter is :" << s << endl;

		std::map<string, int>::const_iterator it;
		string  key;

		//finding key asscociated with value
		for (it = mymap.begin(); it != mymap.end(); ++it) {
			string solution;
			if ((mymap[s] + number) > 26) { // case needed for wraparound

				int x = (mymap[s] + number) - 26;
				int y = x;

				if (it->second == y) {
					key = it->first;
					
					sol.append(key); //append key to string

					break;
				}

			}
			else {

				if (it->second == mymap[s] + number)
				{

					key = it->first;
					
					sol.append(key);//append key to new string
					break;
				}
			}
         
			

		}



	}//end of for loop

	cout << "answer is: " << sol << endl;
	system("pause");

}