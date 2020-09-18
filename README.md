# Discrete Fourier Transform

<!---
/*
*****************************************************************
* DFT Calculator
* -------------------
* Author: Okan Kaya, 
* Date: September 18th, 2020,
* Revision: 1.0 
* Tapir Lab., TLab. at Istanbul Commerce University
* Copyright: Okan Kaya, Tapir Lab., Istanbul Commerce University
*****************************************************************
*/
-->
# DFT Calculator #

## Table of contents
* [Summary](#summary)
* [Sample Input](#sample-input)
* [Sample Output](#sample-output)

## Summary
DFT Calculator yields an Discrete Fourier Transform of the given array. In order to change parameters, N must be redefined 
```(#define N X```
and user should change the source according to the desired input. 
```int input[N] = {1, 2, 3, 4};```
	
## Sample Input
The input of the program can be given in the source code. After including the headers, in the part where parameters are declared, N can be changed according to the requirements of the user. While compiling the code math library must be linked. Compiling can be done as stated below;
``` gcc dft.c -lm ```

## Sample Output
Output of the program is a text file that contains the result of the DFT. Output example for the program when input is an array which is {1, 2, 3, 4};

```
10.000000, 0.000000
-2.000000, 2.000000
-2.000000, -0.000000
-2.000000, -2.000000
```
Left hand side of the comma is Real part and right hand side of the comma is Imaginary part.
