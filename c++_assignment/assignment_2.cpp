//Program to sort array in ascending order

#include<iostream>

//Function for ascending order sort of array
void ascending_order_array(int array_pointer[], int size_of_array);

int main(){
	int array_size  {0};
    std::cout<<"Enter size of array: ";
    std::cin>>array_size;
    int array[array_size];
    std::cout<<"Enter the element of array\n";
	for(int i = 0; i < array_size; i++){
        std::cin>>array[i];
    }
	ascending_order_array(array,array_size);//Function call
	return 0;
}

//Function for ascending order sort of array
void ascending_order_array(int array_pointer[], int size_of_array){
	for(int i = 0; i < size_of_array; i++){
		for(int j = i+1; j < size_of_array; j++){
			//To check if ith element smaller than jth element
			if(array_pointer[i]>array_pointer[j]){
				int temp = array_pointer[i];
				array_pointer[i] = array_pointer[j];
				array_pointer[j] = temp;
			}
		}
		std::cout<<array_pointer[i]<<" ";//To print sorted array
	}
}
