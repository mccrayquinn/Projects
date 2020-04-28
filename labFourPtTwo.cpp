#include <iostream>
using namespace std;

void reverseArray(int[], int, int);

void reverseArray(int arr[], int start, int end)
{

   for(int i = start; i <= end; ++i){
      arr[i] = (end+1) - i;
   }

}

/* Utility that prints out an array on a line */
void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

/* Driver function to test above functions */
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    reverseArray(arr, 0, 5);
    cout <<"Reversed array is \n";
    printArray(arr, 6);
    return 0;
}
