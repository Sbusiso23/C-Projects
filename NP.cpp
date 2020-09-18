#include <sys/time.h>
#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
   struct timeval start_time, end_time;
   long double milli_time, seconds, useconds;
   gettimeofday(&start_time, NULL);
   cout << "Enter something: ";
   char ch;
   cin >> ch;
   gettimeofday(&end_time, NULL);
   seconds = end_time.tv_sec - start_time.tv_sec; //seconds
   useconds = end_time.tv_usec - start_time.tv_usec; //milliseconds
   milli_time = ((seconds) * 1000 + useconds/1000.0);
   cout << "Elapsed time: " << milli_time <<" milliseconds\n";
   cout << "Elapsed time: " << seconds <<" seconds\n";


}