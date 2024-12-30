/* This file acts as header file for train booking system. It contains datatypes train and
   passanger and function declaration for all functions used for system and also global
   variables and macros used in system.
*/

#ifndef TRAIN_H
#define TRAIN_H //to define user defined library function for train ticket booking system
#define MAX_PASSENGERS 1000 //to set max passengers limit to 1000
#define MAX_TRAINS 100 //to set max passengers limit to 100
#define FILE_TRAIN_DB "train_data.txt" // Define the file for train data
#define FILE_PASSENGER_DB "passenger_data.txt" // Define the file for passenger data

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Holds the type of operations to be formed
typedef enum {
	ADD_TRAIN,
	VIEW_TRAINS,
	BOOK_TICKET,
	CANCEL_TICKET,
	VIEW_BOOKING,
	EXIT
} TrainOperation;

// Holds the train details
typedef struct {
	char train_name[100];
	int train_id;
	int available_seats;
	float train_price;
	char source[100];
	char destination[100];
} Train;

//Holds passenger details
typedef struct{
	char passenger_name[100];
	int train_id;
	int seats_booked;
	int passenger_id;
} Passenger;

// Function pointer for handling train operations
typedef void (*TrainOperationFunc)(void);
//Declaring Global variable to store the trains
extern Train train_db[MAX_TRAINS];
extern int total_trains;
//Declaring Global variable to store the passengers
extern Passenger passenger_db[MAX_PASSENGERS];
extern int total_passengers;
// Functions used
void load_train_data();//to load data from train file
void save_train_data();//to save data to train file
void load_passenger_data();//to load data from passenger file
void save_passenger_data();//to save data from passenger file
void add_train();//to add new train details
void view_trains();//to view saved trains details
void book_ticket();//to book tickets
void cancel_ticket();//to cancel tickets
void train_menu();//to provide user with menu of system
void view_booking();//to view already booked tickets

#endif

