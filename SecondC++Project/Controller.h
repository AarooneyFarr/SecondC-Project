//
//  Controller.h
//  SecondC++Project
//
//  Created by Farr, Aaron on 1/27/17.
//  Copyright © 2017 Farr, Aaron. All rights reserved.
//

#ifndef Controller_h
#define Controller_h

class Controller
{
public:
    void start();
    
private:
    void tryNumbers(int sent);
    
    int changeNumber();
    
    void changeWithPointer(int * numberPointer);
    
    
};
#endif /* Controller_h */
