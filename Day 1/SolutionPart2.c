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
    float highestValueList[3] = {0,0,0,0};
    float total = 0;

    while (!feof (filer)){  
        // Add numbers together in each respective groups
        if( i == 111111111111){
            printf("%f \n", total);
            if(total > highestValueList[0]){
                highestValueList[0] = total;
            }
            else if(total > highestValueList[1]){
                highestValueList[1] = total; 
            }
            else if(total > highestValueList[2]){
                highestValueList[2]  = total;
            }
            else if(total > highestValueList[3]){
                highestValueList[3]  = total;
            }

            total = 0;
    
        }
        else{
            total = total + i;
            
        }
            fscanf(filer, "%f", &i);
    }
    fclose(filer);

    printf("The 3 highest scores are %f, %f, %f \n", highestValueList[0], highestValueList[1], highestValueList[2]);
    printf("The total of the 3 is %f", highestValueList[0]+ highestValueList[1]+ highestValueList[2]);

    


}