#Program to Write all content of a given file into a new file by skipping line number 5

def write_to_new_file(given_file,new_file):
    """
    Write all content of a given file into a new file by skipping line number 5
    
    Parameters:
    input_file (file): File from which content to be copied
    output_file (file): File to which content to be copied
    """
    line_number = 1
    with open (given_file, mode = 'r') as input_file, open (new_file, mode = 'w') as output_file:
        #to iterate through all lines of input file
        for line in input_file:
            #to skip line 5
            if line_number != 5:
                output_file.write(line)
            line_number = line_number + 1

if __name__ == '__main__':
    input_file = input('Enter input file name: ')
    output_file = input('Enter output file name: ')
    write_to_new_file(input_file,output_file)
                
