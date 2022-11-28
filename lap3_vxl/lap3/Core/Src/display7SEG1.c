/*
 * display7SEG1.c
 *
 *  Created on: Nov 28, 2022
 *      Author: tirua
 */


#include "display7SEG1.h"
int NUM1[10][7]= {
	{0,0,0,0,0,0,1}, //0
	{1,0,0,1,1,1,1}, //1
	{0,0,1,0,0,1,0}, //2
	{0,0,0,0,1,1,0}, //3
	{1,0,0,1,1,0,0}, //4
	{0,1,0,0,1,0,0}, //5
	{0,1,0,0,0,0,0}, //6
	{0,0,0,1,1,1,1}, //7
	{0,0,0,0,0,0,0}, //8
	{0,0,0,0,1,0,0}  //9
};
void display7SEG1(int num1){
	HAL_GPIO_WritePin(SEG7_GPIO_Port, 	SEG7_Pin, 	NUM1[num1][0] );// tin hieu thanh 0
	HAL_GPIO_WritePin(SEG8_GPIO_Port, 	SEG8_Pin, 	NUM1[num1][1] );// tin hieu thanh 1
	HAL_GPIO_WritePin(SEG9_GPIO_Port, 	SEG9_Pin, 	NUM1[num1][2] );// tin hieu thanh 2
	HAL_GPIO_WritePin(SEG10_GPIO_Port,  SEG10_Pin, 	NUM1[num1][3] );// tin hieu thanh 3
	HAL_GPIO_WritePin(SEG11_GPIO_Port,  SEG11_Pin, 	NUM1[num1][4] );// tin hieu thanh 4
	HAL_GPIO_WritePin(SEG12_GPIO_Port,  SEG12_Pin, 	NUM1[num1][5] );// tin hieu thanh 5
	HAL_GPIO_WritePin(SEG13_GPIO_Port,  SEG13_Pin, 	NUM1[num1][6] );// tin hieu thanh 6
}
