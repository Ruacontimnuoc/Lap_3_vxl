/*
 * display7SEG.c
 *
 *  Created on: Nov 28, 2022
 *      Author: tirua
 */



#include "display7SEG.h"
int NUM[10][7]= {
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
void display7SEG(int num){
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, NUM[num][0] );// tin hieu thanh 0
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, NUM[num][1] );// tin hieu thanh 1
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, NUM[num][2] );// tin hieu thanh 2
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, NUM[num][3] );// tin hieu thanh 3
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, NUM[num][4] );// tin hieu thanh 4
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, NUM[num][5] );// tin hieu thanh 5
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, NUM[num][6] );// tin hieu thanh 6
}
