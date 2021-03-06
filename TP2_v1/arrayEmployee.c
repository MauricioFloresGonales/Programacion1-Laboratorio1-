#include <stdio.h>
#include <stdlib.h>
#include "arrayEmployee.h"

/** \brief  To indicate that all position in the array are empty,
*          this function put the flag (isEmpty) in TRUE in all
*          position of the array
* \param list Employee  Pointer to array of employees
* \param len int        Array length
* \return int Return (-1)   if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int initEmployee(eEmployee* list,int len)
{
    int i;

    for(i=0;i<len;i++)
    {
        list[i].isEmpty=1;
    }

    return 0;
}
/** \brief add in a existing list of employees the values received as parameters
*     in the first empty position
* \param list employee
*
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param salary float
* \param sector int
* \return int Return (-1) if Error [Invalid length or NULL pointer or without free space] - (0) if Ok
*
*/
int addEmployee(eEmployee* list, int len, int id, char name[],char lastName[],float salary,int sector)
{
    return -1;
}
/** \brief find an Employee by Id en returns the index position in array.
*
* \param list Employee
*
* \param len int
* \param id int
* \return Return employee index position or (-1) if [Invalid length or NULL pointer received or employee not found]
*
*/
int findEmployeeById(eEmployee* list, int len,int id)
{



    return -1;



}
/** \brief Remove a Employee by Id (put isEmpty Flag in 1)
*
* \param list Employee
* \param len int
* \param id int
* \return int Return (-1) if Error [Invalid length or NULL pointer or if can't find a employee] - (0) if Ok
*
*/
int removeEmployee(eEmployee* list, int len, int id)
{



    return -1;



}
/** \brief Sort the elements in the array of employees, the argument order indicate UP or DOWN order
*
* \param list Employee
*
* \param len int
* \param order int  [1] indicate UP - [0] indicate DOWN
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
int sortEmployees(eEmployee* list, int len, int order)
{



    return 0;



}
/** \brief print the content of employees array
*
* \param list Employee
*
* \param length int
* \return int
*
*/
int printEmployees(eEmployee* list, int len)
{



    return 0;



}
