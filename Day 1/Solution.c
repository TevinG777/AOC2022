#include <stdio.h>
#include <math.h>

FILE* filer;


int main(){
    //Declare vars
    float i = 0;

    //Open the txt file and read data
    filer = fopen ("input.txt", "r");

    //Determine if the file has been correctly opened
	if(filer != NULL){
        printf("Successfully reading Data.txt \n");
	}
    else{
        printf("Error opening Data.txt\n");
        return 0;
    }

    //Scan each line character in the data file and save it to a 2d array
    fscanf(filer, "%f", &i);
    float highestValue = 0;
    float total = 0;

    while (!feof (filer)){  
        // Add numbers together in each respective groups
        if( i == 111111111111){
            printf("The value of this group is %f \n", total);
            

            if(total > highestValue){
                highestValue = total;
            }
            total = 0;
        }
        else{
            total = total + i;
            
        }
            fscanf(filer, "%f", &i);
    }
    fclose(filer);

    printf("The highest value is %f", highestValue);

}