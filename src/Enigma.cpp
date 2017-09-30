#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <iomanip>
 //\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//  \\
 //\\//\\//\\Resource where we got how to do Enigma//\\//\\//\\// \\
 //http://www.counton.org/explorer/codebreaking/enigma-cipher.php  \\
 //\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\// \\
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//

using namespace std;

static int subtr; //A global variable that will be the change for the encryption after the string goes through the rotors

class encryption_ 
{
public:
	string texter;

	void changenum()
		{
		cout << "What would you like the encryption number to be. The number must be between 1 and 35: " << endl; //Number has to be 1-35 because the ascii values will be wrong if it is inputed anyother number
		cout << "Remember the number entered because it will be needed for the decryption." << endl; 
		cin >> subtr;
		if(subtr < 0 || subtr > 35)
			{
			cout << "Sorry that is not in the parameters" << endl;
			changenum();
			}

		}

	void encrypter()
		{
		ifstream normiereader;
		normiereader.open("Norm.txt");

		ofstream encryptmaker("Encrypted.txt");

		while (normiereader.eof() == 0)
			{
			getline(normiereader, texter);
			//For Enigma there are 7 rotors
			//Rotor I, Rotor II, Rotor III, Reflected Rotor, Reflected Rotor III, Reflected Rotor II, Reflected Rotor III
			//We made our own index for the text change. 


			//Rotor 1. It is both upper and lower case because its a raw text the user inserted and it will make it capital and change the letter completely
			for(int ii = 0; ii < texter.length(); ii++)
				{
				if(texter.at(ii) == 'A' || texter.at(ii) == 'a') //For example, if the character in the string is A or a it will change it to 'C'
					{
					texter.at(ii) = 'C';
					}
				
				else if(texter.at(ii) == 'B' || texter.at(ii) == 'b')
					{
					texter.at(ii) = 'B';
					}

				else if(texter.at(ii) == 'C' || texter.at(ii) == 'c')
					{
					texter.at(ii) = 'F';
					}

				else if(texter.at(ii) == 'D' || texter.at(ii) == 'd')
					{
					texter.at(ii) = 'Z';
					}

				else if(texter.at(ii) == 'E' || texter.at(ii) == 'e')
					{
					texter.at(ii) = 'T';
					}

				else if(texter.at(ii) == 'F' || texter.at(ii) == 'f')
					{
					texter.at(ii) = 'I';
					}

				else if(texter.at(ii) == 'G' || texter.at(ii) == 'g')
					{
					texter.at(ii) = 'M';
					}

				else if(texter.at(ii) == 'H' || texter.at(ii) == 'h')
					{
					texter.at(ii) = 'P';
					}

				else if(texter.at(ii) == 'I' || texter.at(ii) == 'i')
					{
					texter.at(ii) = 'A';
					}

				else if(texter.at(ii) == 'J' || texter.at(ii) == 'j')
					{
					texter.at(ii) = 'G';
					}

				else if(texter.at(ii) == 'K' || texter.at(ii) == 'k')
					{
					texter.at(ii) = 'K';
					}

				else if(texter.at(ii) == 'L' || texter.at(ii) == 'l')
					{
					texter.at(ii) = 'H';
					}

				else if(texter.at(ii) == 'M' || texter.at(ii) == 'm')
					{
					texter.at(ii) = 'D';
					}

				else if(texter.at(ii) == 'N' || texter.at(ii) == 'n')
					{
					texter.at(ii) = 'O';
					}

				else if(texter.at(ii) == 'O' || texter.at(ii) == 'o')
					{
					texter.at(ii) = 'E';
					}

				else if(texter.at(ii) == 'P' || texter.at(ii) == 'p')
					{
					texter.at(ii) = 'L';
					}

				else if(texter.at(ii) == 'Q' || texter.at(ii) == 'q')
					{
					texter.at(ii) = 'R';
					}

				else if(texter.at(ii) == 'R' || texter.at(ii) == 'r')
					{
					texter.at(ii) = 'J';
					}

				else if(texter.at(ii) == 'S' || texter.at(ii) == 's')
					{
					texter.at(ii) = 'N';
					}

				else if(texter.at(ii) == 'T' || texter.at(ii) == 't')
					{
					texter.at(ii) = 'U';
					}

				else if(texter.at(ii) == 'U' || texter.at(ii) == 'u')
					{
					texter.at(ii) = 'Q';
					}

				else if(texter.at(ii) == 'V' || texter.at(ii) == 'v')
					{
					texter.at(ii) = 'S';
					}

				else if(texter.at(ii) == 'W' || texter.at(ii) == 'w')
					{
					texter.at(ii) = 'X';
					}

				else if(texter.at(ii) == 'X' || texter.at(ii) == 'x')
					{
					texter.at(ii) = 'V';
					}

				else if(texter.at(ii) == 'Y' || texter.at(ii) == 'y')
					{
					texter.at(ii) = 'W';
					}

				else if(texter.at(ii) == 'Z' || texter.at(ii) == 'z')
					{
					texter.at(ii) = 'Y';
					}
				}


				//Rotor II. Goes through the string again and changes it after the first change
				for (int ii = 0; ii < texter.length(); ii++)
				{
					if (texter.at(ii) == 'A') 
						{
						texter.at(ii) = 'F'; 
						}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
					else if (texter.at(ii) == 'B')
						{
						texter.at(ii) = 'M';
						}
					else if (texter.at(ii) == 'C')
						{
						texter.at(ii) = 'D';
						}
					else if (texter.at(ii) == 'D')
						{
						texter.at(ii) = 'L';
						}
					else if (texter.at(ii) == 'E')
						{
						texter.at(ii) = 'O';
						}
					else if (texter.at(ii) == 'F')
						{
						texter.at(ii) = 'R';
						}
					else if (texter.at(ii) == 'G')
						{
						texter.at(ii) = 'K';
						}
					else if (texter.at(ii) == 'H')
						{
						texter.at(ii) = 'Q';
						}
					else if (texter.at(ii) == 'I')
						{
						texter.at(ii) = 'B';
						}
					else if (texter.at(ii) == 'J')
						{
						texter.at(ii) = 'P';
						}
					else if (texter.at(ii) == 'K')
						{
						texter.at(ii) = 'J';
						}
					else if (texter.at(ii) == 'L')
						{
						texter.at(ii) = 'U';
						}
					else if (texter.at(ii) == 'M')
						{
						texter.at(ii) = 'V';
						}
					else if (texter.at(ii) == 'N')
						{
						texter.at(ii) = 'G';
						}
					else if (texter.at(ii) == 'O')
						{
						texter.at(ii) = 'T';
						}
					else if (texter.at(ii) == 'P')
						{
						texter.at(ii) = 'E';
						}
					else if (texter.at(ii) == 'Q')
						{
						texter.at(ii) = 'Y';
						}
					else if (texter.at(ii) == 'R')
						{
						texter.at(ii) = 'I';
						}
					else if (texter.at(ii) == 'S')
						{
						texter.at(ii) = 'X';
						}
					else if (texter.at(ii) == 'T')
						{
						texter.at(ii) = 'A';
						}
					else if (texter.at(ii) == 'U')
						{
						texter.at(ii) = 'Z';
						}
					else if (texter.at(ii) == 'V')
						{
						texter.at(ii) = 'W';
						}
					else if (texter.at(ii) == 'W')
						{
						texter.at(ii) = 'S';
						}
					else if (texter.at(ii) == 'X')
						{
						texter.at(ii) = 'H';
						}
					else if (texter.at(ii) == 'Y')
						{
						texter.at(ii) = 'N';
						}
					else if (texter.at(ii) == 'Z') 
						{
						texter.at(ii) = 'C'; 
						}
				}


				//Rotor III. Goes through the text again
				for (int iii = 0; iii < texter.length(); iii++)
					{
						if (texter.at(iii) == 'A') 
							{
							texter.at(iii) = 'D';
							}
						else if (texter.at(iii) == 'B')
							{
							texter.at(iii) = 'E';
							}
						else if (texter.at(iii) == 'C')
							{
							texter.at(iii) = 'N';
							}
						else if (texter.at(iii) == 'D')
							{
							texter.at(iii) = 'P';
							}
						else if (texter.at(iii) == 'E')
							{
							texter.at(iii) = 'Y';
							}
						else if (texter.at(iii) == 'F')
							{
							texter.at(iii) = 'T';
							}
						else if (texter.at(iii) == 'G')
							{
							texter.at(iii) = 'O';
							}
						else if (texter.at(iii) == 'H')
							{
							texter.at(iii) = 'C';
							}
						else if (texter.at(iii) == 'I')
							{
							texter.at(iii) = 'S';
							}
						else if (texter.at(iii) == 'J')
							{
							texter.at(iii) = 'F';
							}
						else if (texter.at(iii) == 'K')
							{
							texter.at(iii) = 'G';
							}
						else if (texter.at(iii) == 'L')
							{
							texter.at(iii) = 'B';
							}
						else if (texter.at(iii) == 'M')
							{
							texter.at(iii) = 'R';
							}
						else if (texter.at(iii) == 'N')
							{
							texter.at(iii) = 'L';
							}
						else if (texter.at(iii) == 'O')
							{
							texter.at(iii) = 'Q';
							}
						else if (texter.at(iii) == 'P')
							{
							texter.at(iii) = 'K';
							}
						else if (texter.at(iii) == 'Q')
							{
							texter.at(iii) = 'Z';
							}
						else if (texter.at(iii) == 'R')
							{
							texter.at(iii) = 'U';
							}
						else if (texter.at(iii) == 'S')
							{
							texter.at(iii) = 'V';
							}
						else if (texter.at(iii) == 'T')
							{
							texter.at(iii) = 'I';
							}
						else if (texter.at(iii) == 'U')
							{
							texter.at(iii) = 'W';
							}
						else if (texter.at(iii) == 'V')
							{
							texter.at(iii) = 'X';
							}
						else if (texter.at(iii) == 'W')
							{
							texter.at(iii) = 'M';
							}
						else if (texter.at(iii) == 'X')
							{
							texter.at(iii) = 'A';
							}
						else if (texter.at(iii) == 'Y')
							{
							texter.at(iii) = 'J';
							}
						else if (texter.at(iii) == 'Z') 
							{
							texter.at(iii) = 'H'; 
							}
					}


			//Reflection Rotor. Goes through the text again
			for(int ii = 0; ii < texter.length(); ii++)
				{
				if(texter.at(ii) == 'A')
					{
					texter.at(ii) = 'M';
					}
				
				else if(texter.at(ii) == 'B')
					{
					texter.at(ii) = 'D';
					}
				
				else if(texter.at(ii) == 'C')
					{
					texter.at(ii) = 'W';
					}

				else if(texter.at(ii) == 'D')
					{
					texter.at(ii) = 'B';
					}

				else if(texter.at(ii) == 'E')
					{
					texter.at(ii) = 'Q';
					}

				else if(texter.at(ii) == 'F')
					{
					texter.at(ii) = 'U';
					}

				else if(texter.at(ii) == 'G')
					{
					texter.at(ii) = 'Z';
					}

				else if(texter.at(ii) == 'H')
					{
					texter.at(ii) = 'K';
					}

				else if(texter.at(ii) == 'I')
					{
					texter.at(ii) = 'S';
					}

				else if(texter.at(ii) == 'J')
					{
					texter.at(ii) = 'V';
					}

				else if(texter.at(ii) == 'K')
					{
					texter.at(ii) = 'H';
					}

				else if(texter.at(ii) == 'L')
					{
					texter.at(ii) = 'Y';
					}

				else if(texter.at(ii) == 'M')
					{
					texter.at(ii) = 'A';
					}

				else if(texter.at(ii) == 'N')
					{
					texter.at(ii) = 'X';
					}

				else if(texter.at(ii) == 'O')
					{
					texter.at(ii) = 'R';
					}

				else if(texter.at(ii) == 'P')
					{
					texter.at(ii) = 'T';
					}

				else if(texter.at(ii) == 'Q')
					{
					texter.at(ii) = 'E';
					}

				else if(texter.at(ii) == 'R')
					{
					texter.at(ii) = 'O';
					}

				else if(texter.at(ii) == 'S')
					{
					texter.at(ii) = 'I';
					}

				else if(texter.at(ii) == 'T')
					{
					texter.at(ii) = 'P';
					}

				else if(texter.at(ii) == 'U')
					{
					texter.at(ii) = 'F';
					}

				else if(texter.at(ii) == 'V')
					{
					texter.at(ii) = 'J';
					}

				else if(texter.at(ii) == 'W')
					{
					texter.at(ii) = 'C';
					}

				else if(texter.at(ii) == 'X')
					{
					texter.at(ii) = 'N';
					}

				else if(texter.at(ii) == 'Y')
					{
					texter.at(ii) = 'L';
					}

				else if(texter.at(ii) == 'Z')
					{
					texter.at(ii) = 'G';
					}
				}


			//Rotor III Reflected. Goes through text again
			for (int ref_iii = 0; ref_iii < texter.length(); ref_iii++)
					{
						if (texter.at(ref_iii) == 'A') 
							{
							texter.at(ref_iii) = 'X'; 
							}
						else if (texter.at(ref_iii) == 'B')
							{
							texter.at(ref_iii) = 'L';
							}
						else if (texter.at(ref_iii) == 'C')
							{
							texter.at(ref_iii) = 'H';
							}
						else if (texter.at(ref_iii) == 'D')
							{
							texter.at(ref_iii) = 'A';
							}
						else if (texter.at(ref_iii) == 'E')
							{
							texter.at(ref_iii) = 'B';
							}
						else if (texter.at(ref_iii) == 'F')
							{
							texter.at(ref_iii) = 'J';
							}
						else if (texter.at(ref_iii) == 'G')
							{
							texter.at(ref_iii) = 'K';
							}
						else if (texter.at(ref_iii) == 'H')
							{
							texter.at(ref_iii) = 'Z';
							}
						else if (texter.at(ref_iii) == 'I')
							{
							texter.at(ref_iii) = 'T';
							}
						else if (texter.at(ref_iii) == 'J')
							{
							texter.at(ref_iii) = 'Y';
							}
						else if (texter.at(ref_iii) == 'K')
							{
							texter.at(ref_iii) = 'P';
							}
						else if (texter.at(ref_iii) == 'L')
							{
							texter.at(ref_iii) = 'N';
							}
						else if (texter.at(ref_iii) == 'M')
							{
							texter.at(ref_iii) = 'W';
							}
						else if (texter.at(ref_iii) == 'N')
							{
							texter.at(ref_iii) = 'C';
							}
						else if (texter.at(ref_iii) == 'O')
							{
							texter.at(ref_iii) = 'G';
							}
						else if (texter.at(ref_iii) == 'P')
							{
							texter.at(ref_iii) = 'D';
							}
						else if (texter.at(ref_iii) == 'Q')
							{
							texter.at(ref_iii) = 'O';
							}
						else if (texter.at(ref_iii) == 'R')
							{
							texter.at(ref_iii) = 'M';
							}
						else if (texter.at(ref_iii) == 'S')
							{
							texter.at(ref_iii) = 'I';
							}
						else if (texter.at(ref_iii) == 'T')
							{
							texter.at(ref_iii) = 'F';
							}
						else if (texter.at(ref_iii) == 'U')
							{
							texter.at(ref_iii) = 'S';
							}
						else if (texter.at(ref_iii) == 'V')
							{
							texter.at(ref_iii) = 'R';
							}
						else if (texter.at(ref_iii) == 'W')
							{
							texter.at(ref_iii) = 'U';
							}
						else if (texter.at(ref_iii) == 'X')
							{
							texter.at(ref_iii) = 'V';
							}
						else if (texter.at(ref_iii) == 'Y')
							{
							texter.at(ref_iii) = 'E';
							}
						else if (texter.at(ref_iii) == 'Z')
							{
							texter.at(ref_iii) = 'Q'; 
							}

					}


			//Reversed of Rotor II. Goes through the text again.
			for (int ii = 0; ii < texter.length(); ii++)
				{
				if (texter.at(ii) == 'A')
					{
					texter.at(ii) = 'T';
					}
				else if (texter.at(ii) == 'B')
					{
					texter.at(ii) = 'I';
					}
				else if (texter.at(ii) == 'C')
					{
					texter.at(ii) = 'Z';
					}
				else if (texter.at(ii) == 'D')
					{
					texter.at(ii) = 'C';
					}
				else if (texter.at(ii) == 'E')
					{
					texter.at(ii) = 'P';
					}
				else if (texter.at(ii) == 'F')
					{
					texter.at(ii) = 'A';
					}
				else if (texter.at(ii) == 'G')
					{
					texter.at(ii) = 'N';
					}
				else if (texter.at(ii) == 'H')
					{
					texter.at(ii) = 'X';
					}
				else if (texter.at(ii) == 'I')
					{
					texter.at(ii) = 'R';
					}
				else if (texter.at(ii) == 'J')
					{
					texter.at(ii) = 'K';
					}
				else if( texter.at(ii) == 'K')
					{
					texter.at(ii) = 'G';
					}
				else if (texter.at(ii) == 'L')
					{
					texter.at(ii) = 'D';
					}
				else if (texter.at(ii) == 'M')
					{
					texter.at(ii) = 'B';
					}
				else if (texter.at(ii) == 'N')
					{
					texter.at(ii) = 'Y';
					}
				else if (texter.at(ii) == 'O')
					{
					texter.at(ii) = 'E';
					}
				else if (texter.at(ii) == 'P')
					{
					texter.at(ii) = 'J';
					}
				else if (texter.at(ii) == 'Q')
					{
					texter.at(ii) = 'H';
					}
				else if (texter.at(ii) == 'R')
					{
					texter.at(ii) = 'F';
					}
				else if (texter.at(ii) == 'S')
					{
					texter.at(ii) = 'W';
					}
				else if (texter.at(ii) == 'T')
					{
					texter.at(ii) = 'O';
					}
				else if (texter.at(ii) == 'U')
					{
					texter.at(ii) = 'L';
					}
				else if (texter.at(ii) == 'V')
					{
					texter.at(ii) = 'M';
					}
				else if (texter.at(ii) == 'W')
					{
					texter.at(ii) = 'V';
					}
				else if (texter.at(ii) == 'X')
					{
					texter.at(ii) = 'S';
					}
				else if (texter.at(ii) == 'Y')
					{
					texter.at(ii) = 'Q';
					}
				else if (texter.at(ii) == 'Z')
					{
					texter.at(ii) = 'U';
					}
			}


		//Reflected Rotor III again
		for (int ref_iii = 0; ref_iii < texter.length(); ref_iii++)
					{
						if (texter.at(ref_iii) == 'A') 
							{
							texter.at(ref_iii) = 'X'; 
							}
						else if (texter.at(ref_iii) == 'B')
							{
							texter.at(ref_iii) = 'L';
							}
						else if (texter.at(ref_iii) == 'C')
							{
							texter.at(ref_iii) = 'H';
							}
						else if (texter.at(ref_iii) == 'D')
							{
							texter.at(ref_iii) = 'A';
							}
						else if (texter.at(ref_iii) == 'E')
							{
							texter.at(ref_iii) = 'B';
							}
						else if (texter.at(ref_iii) == 'F')
							{
							texter.at(ref_iii) = 'J';
							}
						else if (texter.at(ref_iii) == 'G')
							{
							texter.at(ref_iii) = 'K';
							}
						else if (texter.at(ref_iii) == 'H')
							{
							texter.at(ref_iii) = 'Z';
							}
						else if (texter.at(ref_iii) == 'I')
							{
							texter.at(ref_iii) = 'T';
							}
						else if (texter.at(ref_iii) == 'J')
							{
							texter.at(ref_iii) = 'Y';
							}
						else if (texter.at(ref_iii) == 'K')
							{
							texter.at(ref_iii) = 'P';
							}
						else if (texter.at(ref_iii) == 'L')
							{
							texter.at(ref_iii) = 'N';
							}
						else if (texter.at(ref_iii) == 'M')
							{
							texter.at(ref_iii) = 'W';
							}
						else if (texter.at(ref_iii) == 'N')
							{
							texter.at(ref_iii) = 'C';
							}
						else if (texter.at(ref_iii) == 'O')
							{
							texter.at(ref_iii) = 'G';
							}
						else if (texter.at(ref_iii) == 'P')
							{
							texter.at(ref_iii) = 'D';
							}
						else if (texter.at(ref_iii) == 'Q')
							{
							texter.at(ref_iii) = 'O';
							}
						else if (texter.at(ref_iii) == 'R')
							{
							texter.at(ref_iii) = 'M';
							}
						else if (texter.at(ref_iii) == 'S')
							{
							texter.at(ref_iii) = 'I';
							}
						else if (texter.at(ref_iii) == 'T')
							{
							texter.at(ref_iii) = 'F';
							}
						else if (texter.at(ref_iii) == 'U')
							{
							texter.at(ref_iii) = 'S';
							}
						else if (texter.at(ref_iii) == 'V')
							{
							texter.at(ref_iii) = 'R';
							}
						else if (texter.at(ref_iii) == 'W')
							{
							texter.at(ref_iii) = 'U';
							}
						else if (texter.at(ref_iii) == 'X')
							{
							texter.at(ref_iii) = 'V';
							}
						else if (texter.at(ref_iii) == 'Y')
							{
							texter.at(ref_iii) = 'E';
							}
						else if (texter.at(ref_iii) == 'Z')
							{
							texter.at(ref_iii) = 'Q'; 
							}
					}


		//Whatever subtr is it will subract about it and since its based on the user it will kind of add an extra sense of security. 	
		changenum();
				for(int subr = 0; subr < texter.length();subr++)
					{
					texter.at(subr)= texter.at(subr) - subtr;
					}
				
		encryptmaker << texter;


		}
	normiereader.close();
	encryptmaker.close();
	}

};

class decrypt_
{
public:
	string decr;
	//It wants to get the key from the person. If they are wrong it will not show the message right.
	void getnumber()
		{
		cout << "What is the encryption number? NOTE: If it is incorrect the text will show up wrong" << endl;
		cin >> subtr;
		}

	void decrypter()
		{
		ifstream encrypted;
		encrypted.open("Encrypted.txt");
		ofstream normal("Decrypted.txt");
		getnumber();
		while(encrypted.eof() == 0)
			{
			getline(encrypted, decr);

			//Adds whatever was subtracted from encryption process
			for(int adder = 0; adder < decr.length(); adder++)
					{
					decr.at(adder)= decr.at(adder) + subtr;
					}
			//It then goes through the index we made to change whatever it was before the encryption
			for(int ii = 0; ii < decr.length(); ii++)
				{
				if(decr.at(ii) == 'X')
					{
					decr.at(ii) = 'A';
					}

				else if(decr.at(ii) == 'C')
					{
					decr.at(ii) = 'B';
					}

				else if(decr.at(ii) == 'P')
					{
					decr.at(ii) = 'C';
					}
				
				else if(decr.at(ii) == 'W')
					{
					decr.at(ii) = 'D';
					}

				else if(decr.at(ii) == 'A')
					{
					decr.at(ii) = 'E';
					}

				else if(decr.at(ii) == 'B')
					{
					decr.at(ii) = 'F';
					}

				else if(decr.at(ii) == 'Q')
					{
					decr.at(ii) = 'G';
					}

				else if(decr.at(ii) == 'E')
					{
					decr.at(ii) = 'H';
					}

				else if(decr.at(ii) == 'H')
					{
					decr.at(ii) = 'I';
					}

				else if(decr.at(ii) == 'Z')
					{
					decr.at(ii) = 'J';
					}

				else if(decr.at(ii) == 'U')
					{
					decr.at(ii) = 'K';
					}

				else if(decr.at(ii) == 'K')
					{
					decr.at(ii) = 'L';
					}

				else if(decr.at(ii) == 'F')
					{
					decr.at(ii) = 'M';
					}

				else if(decr.at(ii) == 'M')
					{
					decr.at(ii) = 'N';
					}

				else if(decr.at(ii) == 'T')
					{
					decr.at(ii) = 'O';
					}

				else if(decr.at(ii) == 'V')
					{
					decr.at(ii) = 'P';
					}

				else if(decr.at(ii) == 'G')
					{
					decr.at(ii) = 'Q';
					}

				else if(decr.at(ii) == 'S')
					{
					decr.at(ii) = 'R';
					}

				else if(decr.at(ii) == 'L')
					{
					decr.at(ii) = 'S';
					}

				else if(decr.at(ii) == 'Y')
					{
					decr.at(ii) = 'T';
					}

				else if(decr.at(ii) == 'J')
					{
					decr.at(ii) = 'U';
					}

				else if(decr.at(ii) == 'R')
					{
					decr.at(ii) = 'V';
					}

				else if(decr.at(ii) == 'N')
					{
					decr.at(ii) = 'W';
					}

				else if(decr.at(ii) == 'I')
					{
					decr.at(ii) = 'X';
					}

				else if(decr.at(ii) == 'O')
					{
					decr.at(ii) = 'Y';
					}

				else if(decr.at(ii) == 'D')
					{
					decr.at(ii) = 'Z';
					}
				}
		normal << decr << endl;
		}
	encrypted.close();
	normal.close();
	}

};
//For the useless loading screen. It just looks cool 
//Kirk Worley helped us!
string printProg(int x)
    {
    string s;
 
    s = "[";
 
    for(int i = 1; i <= (100/2); i++)
        {
        if(i <= (x/2) || x == 100)
            s += "=";
        else if(i == (x/2))
            s += ">";
        else
            s += " ";
        }
 
    s += "]";
 
    return s;
    }

void main()
{
	string menu;
	encryption_ encrypt;
	decrypt_ decryptor;
	cout << "What would you like to do? Type 'Encrypt' or 'Decrypt'?" << endl;
	cin >> menu;

	if(menu == "encrypt" || menu == "Encrypt") //So the user can go through the menu
		{
		encrypt.encrypter();

		//For the loading screen. Its for pizzazz!
		int x = 0;
 
		cout << "Working..." << endl;
 
		for(int i = 0; i < 100; i++)
			{
			int r = rand() % 1000;
			x++;
			cout << "\r" << setw(-20) << printProg(x) << " " << x << "% completed." << flush;
			if(i < 43)
				{
				Sleep(r/18);
				}
			else if(i > 43 && i < 74)
				{
				Sleep(r/20);
				}
			else if(i < 98)
				{
				Sleep(r/16);
				}
			else if(i > 97 && i != 99)
				{
				Sleep(2900);
				}
			}
 
		//Loadng finished.
		cout << endl << endl << "Operation completed successfully. [ENCRYPTED]\n" << flush << endl << endl;
		cout << "The encrypted file says: ";
		cout << encrypt.texter << endl << endl;

		}
	if(menu == "decrypt" || menu == "Decrypt") //Menu
		{
		decryptor.decrypter();

		//For pizzazz!!!
		int x = 0;
 
		cout << "Working..." << endl;
 
		for(int i = 0; i < 100; i++)
			{
			int r = rand() % 1000;
			x++;
			cout << "\r" << setw(-20) << printProg(x) << " " << x << "% completed." << flush;
			if(i < 43)
				{
				Sleep(r/18);
				}
			else if(i > 43 && i < 74)
				{
				Sleep(r/20);
				}
			else if(i < 98)
				{
				Sleep(r/16);
				}
			else if(i > 97 && i != 99)
				{
				Sleep(2900);
				}
			}
 
		//Loadng finished.
		cout << endl << endl << "Operation completed successfully. [DECRYPTED]\n" << flush << endl << endl;
		cout << "The encrypted file says: ";
		cout << decryptor.decr << endl << endl;
		}
	


}
