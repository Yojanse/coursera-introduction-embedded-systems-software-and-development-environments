/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <here we have some functions to works with arrays >
 *
 * <This is my first homework, here i have a few functions to works with arrays like, median,mean,maximum, minimum and ordenice of some numbers. >
 *
 * @author <Yojanse Duarte>
 * @date <02-20-2022 >
 *
 */



#include <stdio.h>
#include "stats.h"


/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
		unsigned char minimum = 0;
		unsigned char maximum = 0;
		float mean = 0;
		unsigned char median = 0;																		
  /* Statistics and Printing Functions Go Here */

		/* Statistics and Printing Functions Go Here */
		printf("Array before order: \n");
		print_array(&test, SIZE);
		median =  find_median(&test, SIZE);
		mean =  find_mean(&test, SIZE);
		maximum =  find_maximum(&test, SIZE);
		minimum =  find_minimum(&test, SIZE);
		print_statistics( minimum, maximum,  mean, median);
		sort_array(&test, SIZE);
		printf("Array after order: \n");
		print_array(&test, SIZE);
    


}

/* Add other Implementation File Code Here */


void print_statistics (unsigned char minimum, unsigned char maximum, float mean, unsigned char median){
  printf("The minimum value is %d \n", minimum);
  printf("The maximum is %d \n", maximum);
  printf("The mean is %f \n", mean);
  printf("The median is %d \n", median);
}

int i;
void print_array (unsigned char *array, unsigned int counter){
  for (i=0; i<counter; i++){
    printf("%d,", *(array + i));
  }
  printf("\n");
}

unsigned char find_median (unsigned char *array, unsigned int counter){
  unsigned char median = 0;
  median = *(array + ((counter / 2) -1));
  return median;
}

float find_mean (unsigned char *array, unsigned int counter){
  unsigned int totalizer = 0; 
  float mean = 0;
  for ( i=0; i<counter; i++){
    totalizer = totalizer + array[i] ;
  }
  printf("mean is  = %d \n", totalizer);
  mean = totalizer / ((float) counter); 
  return mean;
}

unsigned char find_maximum (unsigned char *array, unsigned int counter){
  unsigned char maximum = *array; 
  for ( i=1; i<counter; i++){ 
    if (*(array + i) > maximum){
      maximum = *(array + i);
    }
  
  }
  return maximum;
}

unsigned char find_minimum (unsigned char *array, unsigned int counter){
  unsigned char minimum = *array; 
  for ( i=1; i<counter; i++){ 
    if (*(array + i) < minimum){
      minimum = *(array + i);
    }
    
  }
  return minimum;
}
int index;
void sort_array (unsigned char *array, unsigned int counter){
  char flag = 0; 
  unsigned char temp;
  do {
    flag =0; 
    for ( index=0; index<counter; index++){
      if (array[index] > array[index +1] || array[index] == array[index +1]) {
        continue;
      }
      else if (array[index] < array[index +1]) {
       
        temp = array[index];
        array[index] = array[index+1];
        array[index+1] = temp;

        flag = 1; 
      }
    }
  }
  while (flag ==1); 
}
