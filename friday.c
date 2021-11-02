#include <stdio.h>

int countFridays(unsigned int* days, int months){
    int sum = 0, count = 1;
    //count is 1 since the year always starts on Sunday.
    //i.e. when a month starts on Sundays, then it will have Friday the 13th 

    for (int i=0; i<months-1; i++){

        sum += days[i];
            

            if(sum % 7 == 0 ){
                count += 1;
                //checks if yung natapos na month is divisible by 7 para malaman kung sunday uli mag uumpisa then add 1 if yes.
            }

    }

    return count;

}

int main(){

    unsigned int test, daysInYear, months, dayInMonth[1000], output[1000];
    int i,j;

    scanf("%u", &test);
    for(i = 0; i < test; i++){
        
        scanf("%u %u", &daysInYear, &months);

        for(j=0; j<months; j++){
            scanf("%u", dayInMonth+j);
        }

        //store output
        output[i] = countFridays(dayInMonth, months);

    }

    //printing of ouput
    printf("\n\n\n");
    for(i = 0; i < test; i++){
        printf("%i\n", output[i]);

    }

}