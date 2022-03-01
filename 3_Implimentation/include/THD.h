/**
 * @file THD.h
 * @author Akshay Kelagade
 * @brief this project is about THD(total harmonic destortion)
 * @version 0.1
 * @date 2022-03-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef THD_H_
#define THD_H_

#include<stdio.h>
#include<math.h> 


float matrix[25][25]; 

/**
 * @brief Here this function is going to calculate determinant of the matrix
 * 
 * @return float 
 */
float detrminant(float[25][25], float); 

/**
 * @brief Here this function is going to calculate the cofactors
 * 
 */
void cofactors(float[25][25], float); 

/**
 * @brief Here this function is going to calculate the transpose of the matrix
 * 
 */
void trans(float[25][25], float[25][25], float); 


#endif /* D89ECC6E_184A_4F0E_BBBA_9ED3CF9A7923 */

