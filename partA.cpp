
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

//int readFromFile(string fileName);
//bool containsLetter(string s);

// pressEnterToContinue: used to keep the console window open long enough to see your program's output
void pressEnterToContinue(void) {
	char c;
	cout << "Press Enter to continue...";
	cin.ignore(1024, '\n');
	do { cin.get(c); } while (c != '\n' && c != EOF);
	return;
}


int main() {
	
	double values[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i2 = 0;
	int j = 0;
	int k = 0;
	int l = 0;
	int m = 0;
	int n = 0;
	int o = 0;
	int p = 0;
	int q = 0;
	int r = 0;
	int s2 = 0;
	int t = 0;
	int u = 0;
	int v = 0;
	int w = 0;
	int x = 0;
	int y = 0;
	int z = 0;

	string datafile;
	cout << "Enter file name: ";
	getline(cin, datafile);
	//int numLetters = readFromFile(datafile);

	ifstream inFile;
	string line;
	string letter;
	int numWords = 0;
	int numCharacters = 0;


	inFile.open(datafile);
	if (inFile.fail())
	{
		cout << "read error - sorry\n";
		return false;
	}

	while (true)
	{
		getline(inFile, line);
		if (inFile.fail())
		{
			break;
		}

		for (int i = 0; i < line.length(); i++)
		{
			letter = line.substr(i, 1);
			if (letter == " ")
			{
				i++;
				letter = line.substr(i, 1);
				if (letter != "-")
					numWords++;
				else
				{
					numWords++;
					i++;
				}

				while (letter == " " && i < line.length())
				{
					i++;
					letter = line.substr(i, 1);
				}
				//numCharacters++;
			}
			/*else if (letter == "-")
				numCharacters++;*/
			else if (i == line.length() - 1)
			{
				//numCharacters++;
				numWords++;
			}
			//if (containsLetter(letter))
				numCharacters++;

		

			
				if (letter == "A" || letter == "a")
					a++;
				else if (letter == "B" || letter == "b")
					b++;
				else if (letter == "C" || letter == "c")
					c++;
				else if (letter == "D" || letter == "d")
					d++;
				else if (letter == "E" || letter == "e")
					e++;
				else if (letter == "F" || letter == "f")
					f++;
				else if (letter == "G" || letter == "g")
					g++;
				else if (letter == "H" || letter == "h")
					h++;
				else if (letter == "I" || letter == "i")
					i2++;
				else if (letter == "J" || letter == "j")
					j++;
				else if (letter == "K" || letter == "k")
					k++;
				else if (letter == "L" || letter == "l")
					l++;
				else if (letter == "M" || letter == "m")
					m++;
				else if (letter == "N" || letter == "n")
					n++;
				else if (letter == "O" || letter == "o")
					o++;
				else if (letter == "P" || letter == "p")
					p++;
				else if (letter == "Q" || letter == "q")
					q++;
				else if (letter == "R" || letter == "r")
					r++;
				else if (letter == "S" || letter == "s")
					s2++;
				else if (letter == "T" || letter == "t")
					t++;
				else if (letter == "U" || letter == "u")
					u++;
				else if (letter == "V" || letter == "v")
					v++;
				else if (letter == "W" || letter == "w")
					w++;
				else if (letter == "X" || letter == "x")
					x++;
				else if (letter == "Y" || letter == "y")
					y++;
				else if (letter == "Z" || letter == "z")
					z++;
			
			int nums[26] = {a,b,c,d,e,f,g,h,i2,j,k,l,m,n,o,p,q,r,s2,t,u,v,w,x,y,z};
			for (int i = 0; i < 26; i++)
				values[i] = (double)nums[i] / numCharacters * 100;

		}
	}

	//cout << "Words:      " << numWords << endl;
	cout << "Total Number of Letters: " << numCharacters << endl;
	inFile.close();



	//here
	cout << "Frequency: " << endl;

	string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (int i = 0; i < letters.length(); i++)
	{
		cout << "'" << letters.substr(i, 1) << "': " << values[i] << endl;
	}

	/*if (status) cout << "Success!\n";
	else cout << "failure. :-(\n";*/
	pressEnterToContinue();
}

//int readFromFile(string filename)
//{
//	ifstream inFile;
//	string line;
//	string letter;
//	int numWords = 0;
//	int numCharacters = 0;
//
//	inFile.open(filename);
//	if (inFile.fail())
//	{
//		cout << "read error - sorry\n";
//		return false;
//	}
//
//	while (true)
//	{
//		getline(inFile, line);
//		if (inFile.fail())
//		{
//			break;
//		}
//
//		for (int i = 0; i < line.length(); i++)
//		{
//			letter = line.substr(i, 1);
//			if (letter == " ")
//			{
//				i++;
//				letter = line.substr(i, 1);
//				if (letter != "-")
//					numWords++;
//				else
//				{
//					numWords++;
//					i++;
//				}
//
//				while (letter == " " && i < line.length())
//				{
//					i++;
//					letter = line.substr(i, 1);
//				}
//				//numCharacters++;
//			}
//			/*else if (letter == "-")
//				numCharacters++;*/
//			else if (i == line.length() - 1)
//			{
//				//numCharacters++;
//				numWords++;
//			}
//			if (containsLetter(letter))
//				numCharacters++;
//
//			int a = 0;
//			int b = 0;
//			int c = 0;
//			int d = 0;
//			int e = 0;
//			int f = 0;
//			int g = 0;
//			int h = 0;
//			int i2 = 0;
//			int j = 0;
//			int k = 0;
//			int l = 0;
//			int m = 0;
//			int n = 0;
//			int o = 0;
//			int p = 0;
//			int q = 0;
//			int r = 0;
//			int s2 = 0;
//			int t = 0;
//			int u = 0;
//			int v = 0;
//			int w = 0;
//			int x = 0;
//			int y = 0;
//			int z = 0;
//
//			for (int i = 0; i < s.length(); i++)
//			{
//				string letter = s.substr(i, 1);
//				if (letter == "A" || letter == "a")
//					a++;
//				else if (letter == "B" || letter == "b")
//					b++;
//				else if (letter == "C" || letter == "c")
//					c++;
//				else if (letter == "D" || letter == "d")
//					d++;
//				else if (letter == "E" || letter == "e")
//					e++;
//				else if (letter == "F" || letter == "f")
//					f++;
//				else if (letter == "G" || letter == "g")
//					g++;
//				else if (letter == "H" || letter == "h")
//					h++;
//				else if (letter == "I" || letter == "i")
//					i2++;
//				else if (letter == "J" || letter == "j")
//					j++;
//				else if (letter == "K" || letter == "k")
//					k++;
//				else if (letter == "L" || letter == "l")
//					l++;
//				else if (letter == "M" || letter == "m")
//					m++;
//				else if (letter == "N" || letter == "n")
//					n++;
//				else if (letter == "O" || letter == "o")
//					o++;
//				else if (letter == "P" || letter == "p")
//					p++;
//				else if (letter == "Q" || letter == "q")
//					q++;
//				else if (letter == "R" || letter == "r")
//					r++;
//				else if (letter == "S" || letter == "s")
//					s2++;
//				else if (letter == "T" || letter == "t")
//					t++;
//				else if (letter == "U" || letter == "u")
//					u++;
//				else if (letter == "V" || letter == "v")
//					v++;
//				else if (letter == "W" || letter == "w")
//					w++;
//				else if (letter == "X" || letter == "x")
//					x++;
//				else if (letter == "Y" || letter == "y")
//					y++;
//				else if (letter == "Z" || letter == "z")
//					z++;
//			}
//			double nums[26] = { a,b,c,d,e,f,g,h,i2,j,k,l,m,n,o,p,q,r,s2,t,u,v,w,x,y,z };
//
//		}
//	}
//
//	//cout << "Words:      " << numWords << endl;
//	cout << "Total Number of Letters: " << numCharacters << endl;
//	inFile.close();
//	return numCharacters;
//}
//
//
//bool containsLetter(string s)
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	int f = 0;
//	int g = 0;
//	int h = 0;
//	int i2 = 0;
//	int j = 0;
//	int k = 0;
//	int l = 0;
//	int m = 0;
//	int n = 0;
//	int o = 0;
//	int p = 0;
//	int q = 0;
//	int r = 0;
//	int s2 = 0;
//	int t = 0;
//	int u = 0;
//	int v = 0;
//	int w = 0;
//	int x = 0;
//	int y = 0;
//	int z = 0;
//
//	for (int i = 0; i < s.length(); i++)
//	{
//		string letter = s.substr(i, 1);
//		if (letter == "A" || letter == "a")
//			a++;
//		else if (letter == "B" || letter == "b")
//			b++;
//		else if (letter == "C" || letter == "c")
//			c++;
//		else if (letter == "D" || letter == "d")
//			d++;
//		else if (letter == "E" || letter == "e")
//			e++;
//		else if (letter == "F" || letter == "f")
//			f++;
//		else if (letter == "G" || letter == "g")
//			g++;
//		else if (letter == "H" || letter == "h")
//			h++;
//		else if (letter == "I" || letter == "i")
//			i2++;
//		else if (letter == "J" || letter == "j")
//			j++;
//		else if (letter == "K" || letter == "k")
//			k++;
//		else if (letter == "L" || letter == "l")
//			l++;
//		else if (letter == "M" || letter == "m")
//			m++;
//		else if (letter == "N" || letter == "n")
//			n++;
//		else if (letter == "O" || letter == "o")
//			o++;
//		else if (letter == "P" || letter == "p")
//			p++;
//		else if (letter == "Q" || letter == "q")
//			q++;
//		else if (letter == "R" || letter == "r")
//			r++;
//		else if (letter == "S" || letter == "s")
//			s2++;
//		else if (letter == "T" || letter == "t")
//			t++;
//		else if (letter == "U" || letter == "u")
//			u++;
//		else if (letter == "V" || letter == "v")
//			v++;
//		else if (letter == "W" || letter == "w")
//			w++;
//		else if (letter == "X" || letter == "x")
//			x++;
//		else if (letter == "Y" || letter == "y")
//			y++;
//		else if (letter == "Z" || letter == "z")
//			z++;
//	}
//	int nums[26] = {a,b,c,d,e,f,g,h,i2,j,k,l,m,n,o,p,q,r,s2,t,u,v,w,x,y,z};
//
//	return false;
//}