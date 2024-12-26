//Program for multiplying two matrices

#include<iostream>

//Function for matrix multiplication
void matrix_multiplication();

int main(){
	matrix_multiplication();//Function call
	return 0;
}

//Function for matrix multiplication
void matrix_multiplication(){
        int matrix1_row {0};
        int matrix1_column {0};
        int matrix2_row {0};
        int matrix2_column {0};
        int mux_matrix_row {0};
        int mux_matrix_column {0};
	std::cout<<"Enter size of matrix 1:\n";
	std::cin>>matrix1_row>>matrix1_column;//To get size of matrix1
	std::cout<<"Enter size of matrix 2:\n";
	std::cin>>matrix2_row>>matrix2_column;//To get size of matrix2
	//To check if matrix multiplicaion is possible for given matrices
	if (matrix1_column != matrix2_row){
		std::cout<<"Cannot multiply these two matrix";
		return;
	}
	//Initializing matrix 1 and matrix2
	int matrix1[matrix1_row][matrix1_column] {0};
	int matrix2[matrix2_row][matrix2_column] {0};
	//Intializing Resulant matrix
	mux_matrix_row = matrix1_row;
	mux_matrix_column = matrix2_column;
	int mux_matrix[mux_matrix_row][mux_matrix_column] {0};
	//To get elements of matrix1
	std::cout<<"\nEnter elements of matrix 1:\n";
	for (int i = 0; i < matrix1_row; i++ ){
		for(int j=0; j < matrix1_column; j++ ){
			std::cout<<"matrix 1 ["<<i<<"] ["<<j<<"] :";
			std::cin>>matrix1[i][j];
		}	
	}
	//To get elements of matrix2
	std::cout<<"\nEnter elements of matrix 2:\n";
        for (int i = 0; i < matrix2_row; i++ ){
                for(int j=0; j < matrix2_column; j++ ){
                        std::cout<<"matrix 2 ["<<i<<"] ["<<j<<"] :";
                        std::cin>>matrix2[i][j];
                }
	}
	//To calculate elements of Resultant matrix
	for (int i = 0; i < mux_matrix_row; i++ ){
                for(int j = 0; j < mux_matrix_column; j++ ){
                        for(int k = 0; k < matrix1_column; k++){
				mux_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
			}
			//To print elements of resultant matrix
			std::cout<<"\nmux matrix ["<<i<<"] ["<<j<<"] = "<<mux_matrix[i][j];
                }
        }
}
	
