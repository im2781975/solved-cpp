//find the maximum number of guests at any time in a party
#include<iostream>
#include<algorithm>
using namespace std;

void findMaxGuests(int arrl[], int exit[], int n)
{
   // Sort arrival and exit arrays
   sort(arrl, arrl+n);
   sort(exit, exit+n);

   // guests_in indicates the number of guests at a given time
   int guests_in = 1, max_guests = 1, time = arrl[0];
   int i = 1, j = 0;

   // Loop to process all events in sorted order
   while (i < n && j < n)
   {
      // If the next event in sorted order is an arrival,
      // increment the count of guests
      if (arrl[i] <= exit[j])
      {
          guests_in++;

          // Update max_guests and time if needed
          if (guests_in > max_guests)
          {
              max_guests = guests_in;
              time = arrl[i];
          }

          i++;  // Increment index of the arrival array
      }
      else // If the event is an exit, decrement the count of guests
      {
          guests_in--;
          j++;
      }
   }
   cout << "Maximum Number of Guests = " << max_guests
        << " at time " << time;
}
int main()
{
    int arrl[] = {1, 2, 10, 5, 5};
    int exit[] = {4, 5, 12, 9, 12};
    int n = sizeof(arrl)/sizeof(arrl[0]);

    findMaxGuests(arrl, exit, n);
    return 0;
}
