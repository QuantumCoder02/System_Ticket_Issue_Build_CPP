#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{

	clsQueueLine Q1 = clsQueueLine("First Class", 3);
	Q1.IssueTicket();

	Q1.PrintInfo();


}




