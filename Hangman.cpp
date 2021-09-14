#include <iostream>
#include <time.h>
#include <string>
#include <windows.h>
using namespace std;
void disp(char[], int, char[], char[], int);
void game(char[], char[], int, char[]);
void check(char[], char[], int, char[], int);
void setWord()
{
	char word[10], wrd[10], health[8];
	memset(wrd, 0, 10);
	memset(health, '$', 8);
	cout << "Enter a word (4 - 10 letters)\n";
	cin >> word;
	srand(time(0));
	int l = strlen(word), h_count = 0;
	int r = rand() % (l - 3) + 2;
	for (int i = 0; i < r; i++)
	{
		int x = (rand() % l);
		if (wrd[x] == 0)
		{
			wrd[x] = word[x];
		}
		else
		{
			i--;
		}
	}
	disp(wrd, l, health, word, h_count);
}
void disp(char wrd[], int l, char health[], char word[], int h_count)
{
	system("CLS");
	string man[8] = {"\t  [", "\n\t  O", "\n\t\\", "!", "/", "\n\t  |", "\n\t /", "\\"};
	for (int i = 0; i < h_count; i++)
	{
		cout <<man[i] << " ";
	}
	cout << "\n\nHealth: ";
	for (int i = 0; i < 8; i++)
	{
		cout << health[i] << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < l; i++)
	{
		if (wrd[i] == 0)
		{
			cout << " _ ";
		}
		else
		{
			cout << " " << wrd[i] << " ";
		}
	}
	cout << endl;
	for (int i = 0; i < l; i++)
	{
		cout << " " << i + 1 << " ";
	}
	if (health[0] == 'x')
	{
		exit(1);
	}
	game(wrd, health, l, word);
}
void winAnim(char word[], int l)
{
	cout << "You win\n";
	for (int i = 0; i < l; i++)
	{
		cout << " " << word[i] << " " ;
		Sleep(100);
	}
	cout << endl;
	exit(1);
}
void check(char word[], char wrd[], int l, char health[], int h_count)
{
	if (health[0] == 'x')
	{
		cout << "Game end. You lose.\n";
		disp(wrd, l, health, word, h_count);
	}
	for (int i = 0; i < l; i++)
	{
		if (wrd[i] != word[i])
		{
			disp(wrd, l, health, word, h_count);
		}
	}
	winAnim(word, l);
}
void game(char wrd[], char health[], int l, char word[])
{
	int count = 0, h_count = 0, t_count = 0;
	cout << "\nEnter character\n";
	char temp;
	cin >> temp;
	for (int i = 0; i < l; i++)
	{
		if ((temp == word[i]) && (wrd[i] == 0))
		{
			cout << "Correct!\n";
			wrd[i] = temp;
			count++;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		if (health[i] == '$')
		{
			t_count++;
		}
		if (health[i] == 'x')
		{
			h_count++;
		}
	}
	if (count == 0)
	{
		cout << "Incorrect!\n";
		health[t_count - 1] = 'x';
		h_count++;
	}
	Sleep(600);
	check(word, wrd, l, health, h_count);
}
void main()
{
	setWord();
}