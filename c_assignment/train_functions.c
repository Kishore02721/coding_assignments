/* This file has function definitions of different functions which determins 
   operations of train booking system
*/

#include "train.h"

//Initializing Global variables to store trains and passengers
Train train_db[MAX_TRAINS];
Passenger passenger_db[MAX_PASSENGERS];
int total_trains = 0;
int total_passengers = 0;

// Function to add a train
void add_train() {
        	
	// Check whether database hit maximum limit
	if (total_trains >= MAX_TRAINS) {
		printf("Cannot add more trains, database is full.\n");
		return; 
	}  
	Train* new_train = &train_db[total_trains];//to create new train dynamically
	getchar();// Clear any remaining newline from previous input
	printf("Enter train name: ");
	fgets(new_train->train_name, sizeof(new_train->train_name), stdin); //to read train name of new train
	new_train->train_name[strcspn(new_train->train_name, "\n")] = '\0'; // Remove newline '\n' from train name
	printf("Enter train ID: ");
	scanf("%d", &new_train->train_id); //to read train_id
	printf("Enter available seats: ");
	scanf("%d", &new_train->available_seats); //to read available seats in train
	printf("Enter train price(in rupees): ");
	scanf("%f", &new_train->train_price); //to read price of seats in train
	getchar();//clear any remaining newline from previous input
	printf("Enter source place: ");
	fgets(new_train->source, sizeof(new_train->source), stdin); //to read source place of train
	new_train->source[strcspn(new_train->source, "\n")] = '\0'; // Remove newline '\n'
	printf("Enter destination place: ");
	fgets(new_train->destination, sizeof(new_train->destination), stdin); //to read source place of train
	new_train->destination[strcspn(new_train->destination, "\n")] = '\0'; // Remove newline '\n'
	total_trains++; //to increment total trains on successful addition of new train
	printf("Train added successfully.\n");
}

// Function to view all trains
void view_trains() {

	//to check if trains available
	if (total_trains == 0) {
		printf("No trains available.\n");
		return;
	}
	//to print all train details
	for (int i = 0; i < total_trains; i++) {
		printf("---------------------------\n");
		printf("Train Name: %s\n", train_db[i].train_name);
		printf("Train ID: %d\n", train_db[i].train_id);
		printf("Available Seats: %d\n", train_db[i].available_seats);
		printf("Source: %s\n", train_db[i].source);
		printf("Destination: %s\n", train_db[i].destination);
		printf("Price(in rupees): %.2f\n", train_db[i].train_price);
		printf("----------------------------\n");
	}
}

// Function to book a ticket
void book_ticket() {
	int train_id;
	int seats_to_book;
	printf("Enter train ID to book: ");
	scanf("%d", &train_id); //to read train ID of train to be booked
	//to check if needed train is available
	Train* selected_train = NULL;//create structure pointer for train	
	// checks list of trains for needed train
	for (int i = 0; i < total_trains; i++) {
		if (train_db[i].train_id == train_id) {
			selected_train = &train_db[i];
			break;
		}
	}
	//to exit function if train not available
	if (selected_train == NULL) {
		printf("Train not found.\n");
		return;
	}
	printf("Enter number of seats to book: ");
	scanf("%d", &seats_to_book);//to get no. of seats to be booked
	//to check whether train has needed no. of seats available
	if (seats_to_book > selected_train->available_seats) {
		printf("Not enough available seats.\n");
		return;
	}
	Passenger* new_passenger = &passenger_db[total_passengers];//to create new passenger
	new_passenger->passenger_id = total_passengers;// to assign ID to new passenger
	new_passenger->train_id = selected_train->train_id; //to save train ID booked
	selected_train->available_seats -= seats_to_book;//decrements seats in train 
	new_passenger->seats_booked = seats_to_book;//updates seats booked by passenger
        getchar();// Clear any remaining newline from previous input
	printf("Enter name of passenger: ");
	fgets(new_passenger->passenger_name,sizeof(new_passenger->passenger_name),stdin);//to read passenger name
	new_passenger->passenger_name[strcspn(new_passenger->passenger_name, "\n")] = '\0'; // Remove newline '\n'from passenger name
	total_passengers++;//increments total passengers on successful ticket booking
	printf("Successfully booked %d seats on train %s \nYour booking ID is %d.\n",
	        seats_to_book, selected_train->train_name, new_passenger->passenger_id);
	printf("Total amount = %.2f Rupees",seats_to_book*selected_train->train_price);
}
    
// Function to cancel a ticket
void cancel_ticket() {
	int booking_id;
	printf("Enter booking ID to cancel booking: ");
	scanf("%d", &booking_id);//to get booking id to be cancelled
	Passenger* selected_passenger = NULL; //creating structure pointer for passenger
	//checking if any passenger has given booking id
	for (int i = 0; i < total_passengers; i++) {
		if (passenger_db[i].passenger_id == booking_id){
			selected_passenger = &passenger_db[i];
			break;
		}
	}
	//if no passenger has given booking ID then quit the function
	if (selected_passenger == NULL) {
		printf("Booking not found.\n");
		return;
	}
	Train* selected_train = NULL;//creating structure pointer for train
	//checking which train is booked by passenger
	for (int i = 0; i < total_trains; i++) {
                if (train_db[i].train_id == selected_passenger->train_id){
                        selected_train = &train_db[i];
                        break;
                }
        }
	// Now, we need to remove the passenger from passenger_db
	for (int i = 0; i < total_passengers; i++) {
		if (passenger_db[i].passenger_id == booking_id){
			// Shift the remaining passengers
			for (int j = i; j < total_passengers - 1; j++){
				passenger_db[j] = passenger_db[j + 1];
			}
		}
	}
	total_passengers--; //decrement total passengers after successful ticket cancellation
	selected_train->available_seats += selected_passenger->seats_booked;//add cancelled seats to available seats in train
	printf("Successfully cancelled ticket with booking id %d in train %s.\n", booking_id, selected_train->train_name);
}

//Function to view booked tickets
void view_booking() {
	
	//to quit function if no passengers available
	if(total_passengers == 0) {
		printf("No passengers available.\n");
		return;
	}
	int booking_id;
	printf("Enter your Booking_ID: ");
	scanf("%d",&booking_id); //to get booking id to be viewed
	//to print booking details matches with booking id
	for (int i = 0; i < total_passengers; i++) {
		if (passenger_db[i].passenger_id == booking_id){
			printf("-------------------------------------\n");
			printf("Passenger Name: %s\n", passenger_db[i].passenger_name);
			printf("Train ID: %d\n", passenger_db[i].train_id);
			printf("Seats Booked: %d\n", passenger_db[i].seats_booked);
			printf("--------------------------------------\n");
		}
	}
}

// Function to display the menu and perform actions

void train_menu() {
	int choice;
	char to_continue;
	TrainOperationFunc operations[] = {add_train, view_trains, book_ticket, cancel_ticket, view_booking}; //Function pointer
	//to know what operation to be performed 
	do {
		printf("\n******************************\n");
		printf("Train Ticket Booking System\n");
		printf("1. Add Train\n");
		printf("2. View Trains\n");
		printf("3. Book Ticket\n");
		printf("4. Cancel Ticket\n");
		printf("5. View Booking\n");        
		printf("6. Exit\n");
		printf("******************************\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		printf("\n");
		switch (choice) {
		case 1:
			operations[ADD_TRAIN]();
			break;
		case 2:
			operations[VIEW_TRAINS]();
			break;
		case 3:
			operations[BOOK_TICKET]();
			break;
		case 4:
			operations[CANCEL_TICKET]();
			break;
		case 5:
			operations[VIEW_BOOKING]();
			break;
		case 6:
			printf("Exiting...\n");
			break;
		default:
			printf("Invalid choice. Try again.\n");
		}
	} while (choice != 6);
}


