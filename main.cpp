#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "Sandbox.h"
#include "Test.h"
#include "Member.h"

using namespace std;


void things();
void stockMarket();
void loopingwithdo();
void randnumbergen();
void switchstatements();
int recursionmethod(int x);
void messingwitharrays();
void printArray(int theArray[], int amount);
void mutliArray();

//double is 8 bytes
//int is 4 bytes
//string is 24 bytes
//float is 4 bytes
//bool is 1 byte

class First{
public:
    First(){pVar1 = 0;}
private :
    int pVar1;
    
    friend void friendcheck(First &objF);
};

void friendcheck(First &objF)
{
    objF.pVar1 = 100;
    cout<< objF.pVar1 <<endl;
}

int main()
{
    /*
     * 
    *creating a object 
    *creating a pointer to that object
     
    Sandbox sand;
    Sandbox *sandptr = &sand;
    
    *using an object to call a function
     
    sand.testMethod();
    sandptr->testMethod();
    //pointer needs to use -> to call the function 
     * 
     */
    First obj1;
    friendcheck(obj1);
    cout<<obj1.pVar1<<endl;
    return 0;
}

void things()
{

    int age;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout<<"Enter first persons age or -1 to quit"<<endl;
    cin >>age;

    while (age != -1){
            ageTotal = ageTotal + age;
            numberOfPeopleEntered++;

            cout << "Enter next persons age or -1 to quit"<<endl;
            cin >> age;

    }

    cout << "Number of people entered:"<<numberOfPeopleEntered<<endl;
    cout << "Average age:"<<ageTotal/numberOfPeopleEntered;

}

void pointerCode()
{
    int var1 = 5;
    cout<< &var1<<endl;
    //here all we are finding is the memory of object

    //how you initialize a pointer
    //all a pointer does is it points to the memory location of a variable
    int *var1Pointer;
    var1Pointer = &var1;

    cout<<"Your variable is located at:"<<var1Pointer<<endl;

}

void stockMarket()
{
    //using floats to be able to use decimals
    float var1;
    float money;
    float rate;
    int dateAmount;
    float result;
    
    cout<<"How much money do you start with?"<<endl;
    cin>>money;
    cout<<"Now how much interest do did give you (Decimal please!)"<<endl;
    cin>>rate;
    rate = rate/365;
        
    //To use this function we will need to make a stock
    //market simulator
    //The equation we will be using is AP1RT
    //A = P(1+rt)^(nt)
    //A = the future value
    //P = Principal/Begining amount
    //r = annual intrest in decimal form
    //n = number of times intrest is compounded
    //t = the number of years the money is invested 
    
    
    cout<<"How many days would you like for this to run?"<<endl;
    cin>> dateAmount;
    
    for(int days = 1; days <= dateAmount; days++)
    {
        //pow is raise to the power of 
        //so it would be 1+rate raised to the power of the data of days
        var1 = money*pow(1+rate, days);
        cout << "You are at day:"<< days <<"------" << var1 <<endl;
    }
    result = var1 - money;
    
    cout<<"You have made a profit of: $"<<result<<endl;
    cout<<endl<<"Thank you for using this simulator, provided by Ray Raya!";
    
}

void loopingwithdo()
{
    int x = 1;
    
    do{
        cout<<"X is:"<<x<<endl;
        x++;
    }while(x < 99);
    //like a while loop with a builtin in break point
} 
    

void randnumbergen()
{
    //the seed makes a different number random number
    srand(time(0));
    //counts the seconds since 1970, so its an ever changing changer
    
    for(int x = 0;x < 20; x++)
    {
        int y  = rand()%6;
        //rand has a preset random generator
        cout<<y<<endl;
    }
}

void switchstatements()
{
    int age = 17;
    
    switch(age)
    {
        //there is a break because you already found your searching
        case 17:
            cout<<"Hey your the same age as Ray!"<<endl;
            break;
        case 21:
            cout<<"Legal drinking age"<<endl;
            break;
        case 25:
            cout<<"Now you are fully developed"<<endl;
            break;
        default:
            cout<<"Either you are too young or too old";
    }
}
            
    
    /*the unary scope resolution operator
     *it is defined by :: and means to use the global variable instead of
     * the local variable
     * so you can use variable with the same name but can call them differently
     * */
    
int recursionmethod(int x)
{
        
        //always have a base case
        //pretty much we can tell how many times to call it
        if(x==1)
        {
            cout<<endl<<"Now it is done and the answer to the factorial is:"<< x <<endl;
            return 1;
        }else{  
            cout<<"X is equal to:"<<x<<endl;
            return x*recursionmethod(x-1);
            //now it calls the method and 
            //So it doesnt know what the factorials are
            //So basically what it does is it asks for the factorials meaning
            //it starts with 5 and mutliplies by the factorial of 4
            //but it doesnt know what that is and now its 4*the factorial of three
            //now it asks for 3*facorial of 2 and keeps going on until it hits one
            //where then it returns one and solves the pending factorial equations
        }

      
    }
    
void messingwitharrays()
{
    int var1;
    cout<<"Hello how many people would you like to add to a team?"<<endl;
    cin>>var1;
    cout<<"Seems like you want "<<var1<<" people on your team."<<endl;
    int array[var1];
    
    for(int x = 0;x < var1 ;x++)
    {
        int var2;
        cout<<"Please assign Player "<<x<<" with a team number:"<<endl;
        cin>>var2;
        array[x] = var2;
    }
    system("clear");
    
    cout<<"You have "<<var1<<" players in your team."<<endl;
    for(int x = 0;x < var1 ;x++)
    {
        cout<<"Player "<< x << "'s assigned number is:"<<array[x]<<endl;
    }
         
  
}

void printArray(int theArray[], int amount)
{
    for(int x = 0; x < amount; x++ )
    {
        cout<< theArray[x] << endl;
    }
}

void mutliArray()
{
      int testArray[2][3] = {{12,1},{1,2,3}};
    
    for(int row = 0;row <2;row++)
    {
        //goes through the first value to loop to
        for(int column = 0; column < 3;column++)
        {
            //now for each column we have for that loop
            if(testArray[row][column] == 0)
            {
                //so if you dont have enough values the default is 30
               testArray[row][column] = 30;
                
            }
            //prints out the values for this multi-dimensional arrays
            cout<<testArray[row][column]<<"";
        }
        cout<<endl;
    }
      
      
    
}

void constpratice()
{
    const int x = 3;
    cout<<x<<endl;
}


          


