/* This C file has function definitions which load and save data to database with booking system.
   It has four function which contact with train and passenger database.
*/

#include"train.h"

//Function to load train data from file
void load_train_data() {
	FILE *train_data_file = fopen(FILE_TRAIN_DB, "r"); //to open the file for reading
	//if the file exist then we need to read from it
	if (train_data_file) {
		//read all data when all elements of structure present
		while (6 == fscanf(train_data_file, "%d %s %d %s %f %s",
			&train_db[total_trains].train_id, train_db[total_trains].train_name, 
			&train_db[total_trains].available_seats, train_db[total_trains].source,
			&train_db[total_trains].train_price, train_db[total_trains].destination)) {
			total_trains++;
		}
		fclose(train_data_file); //close the file
	}
}

//Function to save train data to file
void save_train_data() {
	FILE *train_data_file = fopen(FILE_TRAIN_DB, "w");//to open file for writing
	//if file exist we proceed for saving
	if (train_data_file) {
		//save all train details
		for (int i = 0; i < total_trains; i++) {
			fprintf(train_data_file, "%d %s %d %s %.2f %s\n",
				train_db[i].train_id, train_db[i].train_name, 
				train_db[i].available_seats, train_db[i].source,
				train_db[i].train_price, train_db[i].destination);
		}
		fclose(train_data_file); //close the file
	}
}

//Function to load passenger data from file
void load_passenger_data() {
	FILE *passenger_data_file = fopen(FILE_PASSENGER_DB, "r");//to open the file for reading
	//if the file exist then we need to read from it
	if (passenger_data_file) {
		//read all data when all elements of structure present
		while (4 == fscanf(passenger_data_file, "%d %s %d %d",
			&passenger_db[total_passengers].passenger_id, passenger_db[total_passengers].passenger_name, 
			&passenger_db[total_passengers].train_id, &passenger_db[total_passengers].seats_booked)) {
			total_passengers++;
		}
		fclose(passenger_data_file);//close the file
	}
}

//Function to save passenger data from file
void save_passenger_data() {
	FILE *passenger_data_file = fopen(FILE_PASSENGER_DB, "w");//to open file for writing
	//if file exist we proceed for saving
	if (file) {
		//save all train details
		for (int i = 0; i < total_passengers; i++) {
			fprintf(passenger_data_file, "%d %s %d %d\n",
				passenger_db[i].passenger_id, passenger_db[i].passenger_name,
				passenger_db[i].train_id, passenger_db[i].seats_booked);
		}
		fclose(passenger_data_file);//close the file
	}
}
