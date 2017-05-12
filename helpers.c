/**
 * helpers.c
 *
 * Helper functions for Proble Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n <= 0)
    {
        return false;
    }
    if (n > 0)
    {
        int lower=0;
        int higher=n;
        int mid;
        while(lower <= higher)
        // start of while loop
        {
            mid = (lower + higher) / 2; 
            if (values[mid] == value)
            {
                return true;
            }
            if (values[mid] > value)
            {
                higher = mid - 1;
             
         }
            if (values[mid] < value)
            {
                lower = mid + 1;
             
         }
        
         
       }
       // end of while loop
         // TODO: implment a searching algorith
    
 }
    return false;
}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{   
    int temp_var;
    for(int i=0;i < n - 1;i++)
    {
        for(int j=0;j < n - i - 1;j++)
        {  
          
            if (values[j] > values[j + 1])
            // comapring the values
            {
                temp_var = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp_var;
            }
      }
      }
      // TODO: ipleent an O(n^2) sorting algorithm
    return;
}