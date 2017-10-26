#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <vector>
using namespace std;



/**
1. Create a complete C++ program to compute the maximum subsequence of a vector that you read in from cin (or, if you prefer, from a file) using the O(n) algorithm.

2. Understand why this algorithm works (you can skip this step if you already understand it).

3. Now that you've understood it, change the algorithm so that it keeps track of the start and end position of the maximum subsequence. Print the elements in [start, end] in addition to the maximum. (Note: there can be more than one maximum. You only need to find one in this case.)

4. Change your program to work on a vector of N random numbers (make sure to include negative elements). You can adapt the program you've seen in class to write N random numbers into a file that you then read in, or integrate the random-number-generation into your program (instead of reading the numbers from standard input). Now run the program on some sizes of N, e.g., 10 000 000 (10 Million) and bigger. How much time does it need to compute the maximum subsequence?

5. Now implement and obtain (or estimate) the processing times for the naive O(n³) and O(n²) versions for a given input size n. How long does it take for various sizes of n? How long with a new computer that would be 1000x faster than the one you've used? If you have some processing times statistics for a given platform, post them on the discussion forum!

**/

int main(int argc, const char * argv[]) {
    ifstream inputFile("numbers.txt");
    if(!inputFile)
    {
        cerr<<"Cannot open file."<<endl;
        exit(EXIT_FAILURE);
    }
    
    int number;
    vector<int> numbers;
    while(inputFile>>number)
    {
        numbers.push_back(number);
    }
    inputFile.close();
    
    int maxSoFar=0;
    int maxEndingHere=0;
    int start=0;//tracking start index at here
    int end=0;//tracking end index at here
    for(size_t i=0;i!=numbers.size();i++)
    {
        maxEndingHere=max(maxEndingHere+numbers[i],0);
        if(maxEndingHere==0)
        {
            start=start=static_cast<int>(i)+1;//if the previous result is 0, then start is the next one
        }
        if(maxEndingHere>maxSoFar)
        {
            end=static_cast<int>(i);//if maxEndingHere keeps increasing, i increasing(with the for loop)
        }
        maxSoFar=max(maxSoFar,maxEndingHere);
        
    }
    cout<<"The sum of the maximum subsequence is "<<maxSoFar<<endl;
    cout<<"The maximum subsequence is  ";
    for(size_t i=start;i<=end;i++)
    {cout<<numbers[i]<<" ";}
    cout<<endl;
}

