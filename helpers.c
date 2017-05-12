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
        int low=0;
        int high=n;
        int mid;
        while(low <= high)
        {
            mid = (low + high) / 2; 
            if (values[mid] == value)
            {
                return true;
            }
            if (values[mid] > value)
            {
                high = mid - 1;
             
         }
            if (values[mid] < value)
            {
                low = mid + 1;
             
         }
        
         
       }
         // TODO: ipleent a searching algorith
    
 }
    return false;
}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{   
    int temp;
    for(int i=0;i < n - 1;i++)
    {
        for(int j=0;j < n - i - 1;j++)
        {  
          
            if (values[j] > values[j + 1])
            {
                temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
      }
      }
      // TODO: ipleent an O(n^2) sorting algorith
    return;
}