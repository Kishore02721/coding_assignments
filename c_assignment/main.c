#include "train.h" //user defined library for train ticket booking system

int main() {
        load_train_data();//to load train data from previously saved file
        load_passenger_data();//to load passenger data from previously saved file
	train_menu();//to execute Menu function
	save_train_data();//to save train data in file
	save_passenger_data();//to save passenger data in file
	return 0;
}

