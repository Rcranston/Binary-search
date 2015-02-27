//RCranston 50 Number array, 2/2/2015
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
 
// Binary Search magigy
bool BinarySearch ( int *array , int size, int value)
{
	if (size==0 || value< array [0] || value> array [size-1])
		return false ;
	else
	{
		int i,j,k;
			i=0;
			j=size-1;
	while (i<j)
		{
			k=(i+j)/2;
		if (value< array [k])
			j=k-1;
		else if (value>= array [k+1])
			i=k+1;
		else
			i= j=k;
		}
return (value== array [i]) ? true : false ;
	}
}

int main ()
{ //Declarations
unsigned seed, randomNum;
int answer,i,numArray[50];
seed = ((unsigned int) time (0));
srand(seed);
	
//un-sorted
for(i=0; i<50;i++)
	{randomNum = rand() % 100;
	numArray[i]=(int)randomNum;
	cout<<numArray[i]<<" - ";}
cout<<"\n";


system( "pause");
//sorted out-put

cout<<"Bubble Sorting....\n"<<endl;
for(int i=0;i<49; i++)
	for(int j=49; j>i;j--)
	if(numArray[j-1]>numArray[j])
	{
		int temp=numArray[j-1];
		numArray[j-1]=numArray[j];
		numArray[j]=temp;
	}
	for(i=0; i<50;i++)
	{cout<<numArray[i]<<" - ";}
cout<<"\n";

int guessnumber;
cout<< "OK now please input a number (0 - 99) to search for : ";
cin>> guessnumber;
//Call the BinarySearch Function
if (BinarySearch(numArray, 50, guessnumber))
cout<<"Your number: " <<guessnumber<< " was found!" <<endl;
else
cout <<"I'm sorry your number was not found!" <<endl;

//end Program
system( "pause");
return 0;
}
