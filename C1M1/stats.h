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
 * @file <stats.h> 
 * @brief <here we have some functions to works with arrays >
 *
 * 
 * @author <Yojanse Duarte>
 * @date <02-20-2022 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/*
this functions print the minimum,  maximum , mean and the median of an array
 */
void print_statistics (unsigned char minimum, unsigned char maximum, float mean, unsigned char median);


/*
this function print an array
 */
void print_array (unsigned char *array, unsigned int counter);


/*
this function print the median of an array.
 */
unsigned char find_median (unsigned char *array, unsigned int counter);

/*
 this function print the mean of an array.
 */
float find_mean (unsigned char *array, unsigned int counter);

/*
this function print the maximum of an array.
 */
unsigned char find_maximum (unsigned char *array, unsigned int counter);

/*
this function print the minimum of an array.
 */
unsigned char find_minimum (unsigned char *array, unsigned int counter);

/*
this function print an array ordenize of an original array.
 */
void sort_array (unsigned char *array, unsigned int counter);

/*

 */


#endif /* __STATS_H__ */
