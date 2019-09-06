// thread example
#include <iostream>      
#include <thread>   
#include <string> 
	
using namespace std;    

void ha(int x) 
{
 	int i=0;
 	for (i=0; i<x; i++)
	{
 	 cout << "This is a Thread 1 \n";
	}
}

void he(int x)
{
 	int i=0;
 	for (i=0; i<x; i++)
	{
 	cout << "This is a Thread 2 \n";
 }
}

void hi(int x)
{
 	int i=0;
 	for (i=0; i<x; i++)
	{
 	cout << "This is a Thread 3 \n";
	}
}

void ho(int x)
{
 	int i=0;
 	for (i=0; i<x; i++)
	{
 	cout << "This is a Thread 4 \n";
    }
}

int main() 
{
	int i=0;
	thread th1 (ha, 4);
	thread th2 (he, 4);
	thread th3 (hi, 4);
	thread th4 (ho, 4);
	
	
 	for (i=0; i<20; i++)
	{
 	cout << "This print is from Main Method \n";
 	}
 	
 	th1.join();
 	th2.join();
 	th3.join();
 	th4.join();
 	return 0;
}
