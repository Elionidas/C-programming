/*
	Utilize headers for all declarations
	Utilize proper naming schemas
	Document code
	Push code to Github
	Use branching!Create a development branch and push to there.Merge when all requirments are met
	Break your code out into functions
	Utilize multiple C files if needed
*/

/*
Create a linked list, the struct members should contain the following:
    Each students initals
    Each students favoriate musical artist
    Each students dream car
    Required data for linked list completion
    May be worth each student just posting their data into a slack channel so everyone can grab off of it

Create a menu allowing for the following:
    Print out of all students and all of their data
    Print out of all students and only one of their data members on request of user (ex. print out all students and their fav car)
    Print out of only a specific student (This one can be challanging)
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student //lets make us a bunch of info for our students
	{
		char Name[50];
		char Initials[2];
		char favArtist[50];
		char dreamCar[80];
		struct Student * next_node;
	}node;

//main function that gives us our options
int main() 
{
	//create the head and tail
	node * Elias_Perez = (node*)malloc(sizeof(node)); //tail
	node * Kyle_Yoder = (node*)malloc(sizeof(node));
	node * Robert_Graham = (node*)malloc(sizeof(node));
	node * Donnie_Macary = (node*)malloc(sizeof(node));
	node * Mane_Mann = (node*)malloc(sizeof(node));
	node * Tom_Burright = (node*)malloc(sizeof(node));
	node * Zackery_Vering = (node*)malloc(sizeof(node));
	node * Will_Kreiser = (node*)malloc(sizeof(node));
	node * Micheal_Yost = (node*)malloc(sizeof(node));
	node * Richard_Smith = (node*)malloc(sizeof(node)); //head

	//lets build this linked list
	strcpy(Elias_Perez->Name, "Elias Perez");
	strcpy(Elias_Perez->Initials, "EP");
	strcpy(Elias_Perez->favArtist, "Calvin Harris"); //Elias Perez
	strcpy(Elias_Perez->dreamCar, "Citroen Survolt");
	Elias_Perez->next_node = NULL;

	strcpy(Kyle_Yoder->Name, "Kyle Yoder");
	strcpy(Kyle_Yoder->Initials, "KY");
	strcpy(Kyle_Yoder->favArtist, "Earth, Wind and Fire"); //Kyle_Yoder
	strcpy(Kyle_Yoder->dreamCar, "Mitsubishi Lancer");
	Kyle_Yoder->next_node = Elias_Perez;

	strcpy(Robert_Graham->Name, "Robert Graham");
	strcpy(Robert_Graham->Initials, "RG");
	strcpy(Robert_Graham->favArtist, "Linkin Park"); //robert graham
	strcpy(Robert_Graham->dreamCar, "Honda Civic");
	Robert_Graham->next_node = Kyle_Yoder;

	strcpy(Donnie_Macary, "Donnie Macary");
	strcpy(Donnie_Macary, "DM");
	strcpy(Donnie_Macary, "Offspring"); //Donnie macary
	strcpy(Donnie_Macary, "Dodge Charger");
	Donnie_Macary->next_node = Robert_Graham;

	strcpy(Mane_Mann, "Mane Mann");
	strcpy(Mane_Mann->Initials, "MM");
	strcpuy(Mane_Mann, "Earth, Wind and Fire"); //mane mann
	strcpy(Mane_Mann, "Mitsubishi Eclipse");
	Mane_Mann->next_node = Donnie_Macary;

	strcpy(Tom_Burright, "Tom Burright");
	strcpy(Tom_Burright, "TB");
	strcpy(Tom_Burright, "Avenged Sevenfold"); //tom burright
	strcpy(Tom_Burright, "Suzuki Ninja");
	Tom_Burright->next_node = Mane_Mann;

	strcpy(Zackery_Vering->Name, "Zackery Vering");
	strcpy(Zackery_Vering->Initials, "ZV");
	strcpy(Zackery_Vering, "Metallica"); //zackery vering
	strcpy(Zackery_Vering, "Mustang GT500");
	Zackery_Vering->next_node = Tom_Burright;

	strcpy(Will_Kreiser->Name, "Will Kreiser");
	strcpy(Will_Kreiser, "WK");
	strcpy(Will_Kreiser, "Billy Idol"); //Will Kreiser
	strcpy(Will_Kreiser, "Subaru BRZ");
	Will_Kreiser->next_node = Zackery_Vering;

	struct Student Micheal_Yost = { "Micheal Yost", "MY", "Red Hot Chili Peppers", "Subaru WRX STI", Will_Kreiser
	struct Student Richard_Smith = { "Richard Smith", "RS", "Micheal Jackson", "Ford F350", Micheal_Yost

	//create a variable to change the initial input, as well as secondary inputs to run off of
	int initialInput;
	int secondaryInput;

	//we are going to print out a message prompting the user for a function to call
	printf("Welcome! Please select an option to display\n");
	printf("1. Display all students\n");
	printf("2. Display one type of data on all students\n");
	printf("3. Display a specific student\n");
	scanf("%d", &initialInput);

	//now lets change our response based upon a switch statement
	switch (initialInput)
	{
		//case one contains the print_all
	case 1:
		//for loop to print out all the students information
		for (int i = 0; i < 10; i++)
		{
			printf("%s %s %s %s", (Elias_Perez.Name), (Elias_Perez.Initials), (Elias_Perez.favArtist), (Elias_Perez.dreamCar));
		}
	}

	return 0;
};

//how about we start with printing all the students and all of their data?
int print_all(node *n, int buffSize)
{
	
}

//now we shall make it print out all of the students but only one data member(fav car or artist, etc.)
int print_one_data(char *studentArray, int buffSize)
{

}

//now we must allow it to print a specific student and their data (im thinking student iteration?)
int print_just_one(char *studentArray, int buffSize)
{

}