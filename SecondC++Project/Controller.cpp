//
//  Controller.cpp
//  SecondC++Project
//
//  Created by Farr, Aaron on 1/27/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#include "Controller.h"
#include <iostream>
#include "../Model/Timer.hpp"

using namespace std;

void Controller :: start()
{
    Timer sillyTime;
    sillyTime.startTimer();
    
    int myNumber = 42;
    int * numberPointer = &myNumber;
    tryNumbers(10);
    myNumber = changeNumber();
    changeWithPointer(numberPointer);
    cout << "changed?? " << myNumber << endl;
    
    sillyTime.stopTimer();
    sillyTime.displayTimerInformation();
}

void Controller :: tryNumbers(int sent)
{
    cout << "What is your age?" << endl;
    int age = 0;
    cin >> age;
    sent += age;
    cout << "" << sent << endl;
}

int Controller :: changeNumber()
{
    return 56;
}

void Controller :: changeWithPointer(int * numberPointedTo)
{
    *numberPointedTo += 9000;
}
