						/*This Program is created by 
							Muhammad Bilal*/
 
#include<iostream>		
#include<string>		 //For strings functions like getline.
#include<time.h>		//For time using in sleep
#include<windows.h>		//For Sleep and System Functions

using namespace std;

struct Player
{
	string name;
	int id;
	char gender;
};

char ch[5][6];

void fill_chars(int a, int z) { //This function fills character array respective to their ascii code
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 5; j++) {
			if (a <= 90) {		//small alphabets have ascii code ranging from 65 to 90
				ch[i][j] = a;
			}
			else if (i == 5 && j > 0) {	//we have created array for 30 chracters it will fill spaces in extra chracters
				ch[i][j] = ' ';
			}
			a++;
		}
	}
}

void print_chars() {	//It will print array of chracters according to their ascii code
	for (int i = 0; i < 6; i++) {
		cout <<"\n\t\t\t";
		for (int j = 0; j <= 5; j++) {
			cout << " \t" << ch[i][j];
		}
		cout << endl;
	}
}

void ask_name_length(int &x) {	//This function will take length of name from user
	while(true){
		cout << "\n How many letters it contains  :-   ";
		if(cin >> x)
			break;
		cout<<"Invalid Input! Enter an Integer. ";
		cin.clear();
		cin.ignore(INT_MAX,'\n');
	}
}

void ask_for_columns(int x, char col[8][6]) {	//This function will ask user letters of name according to coloumn
	int w = 1;
	while (w <= x) 
	{
		int q;
		while(true)
		{
			cout << "\n In which column its " << w << " word is   :-  ";
			if(cin >> q)
			{
				break;
			}
			cout<<"Invalid Input! Enter an Integer. ";
			cin.clear();
			cin.ignore(INT_MAX,'\n');
		}
		for (int i = 0; i < 6; i++) 
		{
			col[w - 1][i] = ch[i][q - 1]; //loop will arrange chracters in horizontal lines or rows
		}
		w++;
	}
}

void print_columns(int x, char col[8][6]) {	//This function will print coloumns horizontally in which data is present
	for (int i = 0; i <= x; i++) {
		cout<<"\n\t\t\t";
		for (int j = 0; j < 6; j++) {
			cout << "\t " << col[i][j] << " ";
		}
		cout << endl;
	}
}

void ask_for_characters(int x, char col[8][6], char name[8]) {	//This function will again ask in which coloumn word is present
	int w = 1;
	while (w <= x) { //loop will run until |w| reaches vaalue of length entered by user
		int q;
		while(true)
		{
			cout << "\n In which column its  " << w << " character is :-  ";
			if(cin >> q)
			{
				break;
			}
			cout<<"Invalid Input! Enter an Integer. ";
			cin.clear();
			cin.ignore(INT_MAX,'\n');
		}
		name[w - 1] = col[w - 1][q - 1];	//This line will read data from coloumns and display name
		w++;
	}
}

int main(){
	
	char revise='Y', choice='Y';
	
	do{
		int interval = 500;
		char anim=177;       //ASCII code for loading  animations
		Player guest;	     //Structure Object
		
		system("cls");
		
		cout<<"\n\n\n\n\n";
		system("Color 04");
		for(int i=1;i<=6;i++){      //NAME GUESS GAME animation
			if(i==1)
			{
				cout<<"\u001b[31m\t _   _    ___    __  __   _____    _____   _   _   _____   _____   _____    _____    ___    __  __   _____  ";
				cout<<endl;
			}
			if(i==2)
			{
				cout<<"\t| \\ | |  / _ \\  |  \\/  | |  ___|  |  __ \\ | | | | |  ___| /  ___| /  ___|  |  __ \\  / _ \\  |  \\/  | |  ___| ";
				cout<<endl;
			}
			if(i==3)
			
			{
				cout<<"\t|  \\| | / /_\\ \\ | .  . | | |__    | |  \\/ | | | | | |__   \\ `--.  \\ `--.   | |  \\/ / /_\\ \\ | .  . | | |__   ";
				cout<<endl;
			}
			if(i==4)
			{
				cout<<"\t| . ` | |  _  | | |\\/| | |  __|   | | __  | | | | |  __|   `--. \\  `--. \\  | | __  |  _  | | |\\/| | |  __|  ";
				cout<<endl;
			}
			if(i==5)
			{
				cout<<"\t| |\\  | | | | | | |  | | | |___   | |_\\ \\ | |_| | | |___  /\\__/ / /\\__/ /  | |_\\ \\ | | | | | |  | | | |___  ";
				cout<<endl;
			}
			if(i==6)
			{
				cout<<"\t\\_| \\_/ \\_| |_/ \\_|  |_/ \\____/    \\____/  \\___/  \\____/  \\____/  \\____/    \\____/ \\_| |_/ \\_|  |_/ \\____/  ";
				cout<<endl;
			}
			cout.flush(); //animation will appear more smooth output will also be same without it
			Sleep(interval);
		}
		
		//Game Rules
		cout<<"\u001b[34m\n\n\n\nPress F11 to enter full screen.";
		cout<<"\n\nGame Rules:\n\n\n\tThink a name.\n\tTell Program How many letters it contains.\n\tSee Coloumns(Vertical Lines)and give correct input.";
		
		do{
			cout<<"\n\n\nPress Y to proceed Press N to exit.\n";
			cin>>choice;
			if(choice=='n' || choice=='N'){
				return 0;
			}
			else if(choice!='Y' && choice!='y'){
				cout<<"\nInvalid Input!";
			}
			
		}while(choice!='Y' && choice!='y');
		cin.ignore();
		
		system("cls"); //clears screen
		
		system("Color e5");	//Change Output Console color and font color 
		
		cout<<"\n\n\n\n\n\n\n";
		for(int i=1;i<=6;i++){	//NAME GUESS GAME Animation
			if(i==1)
			{
				cout<<"\e[1;35m\t _   _    ___    __  __   _____    _____   _   _   _____   _____   _____    _____    ___    __  __   _____  ";
				cout<<endl;
			}
			if(i==2)
			{
				cout<<"\t| \\ | |  / _ \\  |  \\/  | |  ___|  |  __ \\ | | | | |  ___| /  ___| /  ___|  |  __ \\  / _ \\  |  \\/  | |  ___| ";
				cout<<endl;
			}
			if(i==3)
			{
				cout<<"\t|  \\| | / /_\\ \\ | .  . | | |__    | |  \\/ | | | | | |__   \\ `--.  \\ `--.   | |  \\/ / /_\\ \\ | .  . | | |__   ";
				cout<<endl;
			}
			if(i==4)
			{
				cout<<"\t| . ` | |  _  | | |\\/| | |  __|   | | __  | | | | |  __|   `--. \\  `--. \\  | | __  |  _  | | |\\/| | |  __|  ";
				cout<<endl;
			}
			if(i==5)
			{
				cout<<"\t| |\\  | | | | | | |  | | | |___   | |_\\ \\ | |_| | | |___  /\\__/ / /\\__/ /  | |_\\ \\ | | | | | |  | | | |___  ";
				cout<<endl;
			}
			if(i==6)
			{
				cout<<"\t\\_| \\_/ \\_| |_/ \\_|  |_/ \\____/    \\____/  \\___/  \\____/  \\____/  \\____/    \\____/ \\_| |_/ \\_|  |_/ \\____/  ";
				cout<<endl;
			}
			cout.flush();
			Sleep(interval);
		}
		
		cout<<"\e[1;31m\n Enter your name: ";
		getline(cin,guest.name);	//It will take input until Player press Enter
		while(true){
			cout<<"\n Enter your 5 digit ID: ";
			if(cin>>guest.id){
				break;
			}
			cout<<"\nInvalid Input! Please try again.\n";
			cin.clear();
			cin.ignore(INT_MAX,'\n');
		}
		while(true){
			cout<<"\n Enter your gender (M/F): ";
			if(cin>>guest.gender){
				if(guest.gender=='m' || guest.gender=='f' || guest.gender=='M' || guest.gender=='F'){
					break;
				}
			}
			cout<<"\nInvalid Input! Please try again.\n";
			cin.clear();
			cin.ignore(INT_MAX,'\n');
		}
		
		system("cls");	//clears screen
		
		cout<<"\n\n\n\n";
		for(int i=1;i<=6;i++){	//Welcome animation
			if(i==1)
			{
				cout<<"\e[1;35m\t\t\t _    _   _____   _       _____   _____   __  __   _____  ";
				cout<<endl;
			}
			if(i==2)
			{
				cout<<"\t\t\t| |  | | |  ___| | |     /  __ \\ |  _  | |  \\/  | |  ___| ";
				cout<<endl;
			}
			if(i==3)
			{
				cout<<"\t\t\t| |  | | | |__   | |     | /  \\/ | | | | | .  . | | |__   ";
				cout<<endl;
			}
			if(i==4)
			{
				cout<<"\t\t\t| |/\\| | |  __|  | |     | |     | | | | | |\\/| | |  __|  ";
				cout<<endl;
			}
			if(i==5)
			{
				cout<<"\t\t\t\\  /\\  / | |___  | |____ | \\__/\\ \\ \\_/ / | |  | | | |___  ";
				cout<<endl;
			}
			if(i==6)
			{
				cout<<"\t\t\t \\/  \\/  \\____/  \\_____/  \\____/  \\___/  \\_|  |_/ \\____/  ";
				cout<<endl;
			}
			cout.flush();
			Sleep(80);
		}
		
		cout<<"\n\n";
		cout << "\e[1;31m\n\t\t\t\t\t  ***^^^ Think a name ! ^^^***";
		cout << "\n\t\t\t\t\t         -------------        \n";
		int x;
		ask_name_length(x);
	
		system("cls");
	
		cout<<"\n\n\n\n\n";
		
		system("Color f5");
		
		fill_chars(65, 90);
	
		print_chars();
		
		char col[8][6];
	
		ask_for_columns(x, col);
	
		system("cls");
	
		cout<<"\n\n\n\n\n";
		
		print_columns(x, col);
		
		char name[8];
		
		ask_for_characters(x, col, name);
		
		cout << endl;
		cout << endl;
		system("cls");
		
		system("Color f4");

		cout<<"\n\n\n\t\t\tDoing magic to try and guess your name\n";
		for(int i=1;i<=6;i++){ //Magic animation
			if(i==1)
			{
				cout<<"\e[1;34m\t\t\t";
				cout<<" __  __    ___    _____   _____   _____  ";
				cout<<endl;
			}
			if(i==2)
			{
				cout<<"\t\t\t";
				cout<<"|  \\/  |  / _ \\  |  __ \\ |_   _| /  __ \\ ";
				cout<<endl;
			}
			if(i==3)
			{
				cout<<"\t\t\t";
				cout<<"| .  . | / /_\\ \\ | |  \\/   | |   | /  \\/ ";
				cout<<endl;
			}
			if(i==4)
			{
				cout<<"\t\t\t";
				cout<<"| |\\/| | |  _  | | | __    | |   | |     ";
				cout<<endl;
			}
			if(i==5)
			{
				cout<<"\t\t\t";
				cout<<"| |  | | | | | | | |_\\ \\  _| |_  | \\__/\\ ";
				cout<<endl;
			}
			if(i==6)
			{
				cout<<"\t\t\t";
				cout<<"\\_|  |_/ \\_| |_/  \\____/  \\___/   \\____/ ";
				cout<<endl;
			}
			cout.flush();
			Sleep(interval);
		}
		
		cout<<"\n\n\n\n";
		
		cout<<"\e[1;31m\t\t\t\t  Loading...\n\t\t";
		for(int i=1;i<=50;i++){ ///loading bar
			cout<<"\e[1;34m"<<anim;
			cout.flush();
			Sleep(50);
		}
			
		system("cls");
		
		for(int i=1;i<10;i++) //Output will be according to gender
		{
			if(guest.gender=='m' || guest.gender=='M'){
				cout<<"\e[1;30m\n\n\n\n\n\n\t\t\t\t Mr. "<<guest.name<<" ready to get Surprised!";
			}
			if(guest.gender=='f' || guest.gender=='F'){
				cout<<"\e[1;30m\n\n\n\n\n\n\t\t\t\t Mrs. "<<guest.name<<" ready to get Surprised!";
			}
			Sleep(70);
			system("cls");
		}
		
		interval=100;
		
		system("Color 0a");
		
		for(int i=1;i<=6;i++){ //NAME GUESS GAME Animation
			if(i==1)
			{
				cout<<"\t _   _    ___    __  __   _____    _____   _   _   _____   _____   _____    _____    ___    __  __   _____  ";
				cout<<endl;
			}
			if(i==2)
			{
				cout<<"\t| \\ | |  / _ \\  |  \\/  | |  ___|  |  __ \\ | | | | |  ___| /  ___| /  ___|  |  __ \\  / _ \\  |  \\/  | |  ___| ";
				cout<<endl;
			}
			if(i==3)
			{
				cout<<"\t|  \\| | / /_\\ \\ | .  . | | |__    | |  \\/ | | | | | |__   \\ `--.  \\ `--.   | |  \\/ / /_\\ \\ | .  . | | |__   ";
				cout<<endl;
			}
			if(i==4)
			{
				cout<<"\t| . ` | |  _  | | |\\/| | |  __|   | | __  | | | | |  __|   `--. \\  `--. \\  | | __  |  _  | | |\\/| | |  __|  ";
				cout<<endl;
			}
			if(i==5)
			{
				cout<<"\t| |\\  | | | | | | |  | | | |___   | |_\\ \\ | |_| | | |___  /\\__/ / /\\__/ /  | |_\\ \\ | | | | | |  | | | |___  ";
				cout<<endl;
			}
			if(i==6)
			{
				cout<<"\t\\_| \\_/ \\_| |_/ \\_|  |_/ \\____/    \\____/  \\___/  \\____/  \\____/  \\____/    \\____/ \\_| |_/ \\_|  |_/ \\____/  ";
				cout<<endl;
			}
			cout.flush();
			Sleep(interval);
		}
	
		cout<<"\n\n\n\n";
		cout << "\e[1;33m\n\t\t\t\t   Name you have thought is below  \n";
		cout << "\n\t\t\t\t ------------------------------------\n";
		cout << "\n\t\t\t\t\t\t";
		
		cout << "\e[0;107m\e[1;91m  ";
		for (int i = 0; i < x; i++)
		{
			cout << name[i] <<"";
		}
		cout<<"  "<<"\e[0;100m";
		cout<<"\e[0;32m\n\n\n\nPress Y to play again or Press N to exit game: ";
		cin>>revise;
		while(revise!='y' && revise!='Y') //if user give any input other than y or n loop wil not accept
		{
			if(revise=='n' || revise=='N')
			{
				return 0;
			}
			cout<<"\nInvalid Input!";
			cout<<"\nPress Y to play again or Press N to exit game: ";
			cin>>revise;
		}
		cin.ignore();
		cout<<"\n\n\n";
	}while(revise=='y' || revise=='Y');
	return 0;
}
