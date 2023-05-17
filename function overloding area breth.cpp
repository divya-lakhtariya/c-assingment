/*
Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
--Rectangle: Area * breadth
--Triangle: ½ *Area* breadth
--Circle: Pi * Area *Area
*/
#include<iostream>
using namespace std;

void fun(int area,int breadth)
{
    int rectangle=area*breadth;
    cout<<" The Area Of The Rectangle Value is:"<<rectangle<<endl;
}
void fun(float area)
{
    float circle=3.14*area*area;
    cout<<"The Area of The Circle Value is:"<<circle<<endl;
}
void fun(float area,float breadth)
{
    float triangle=0.5*area*breadth;
    cout<<" The Area Of the triangle value is:"<<triangle<<endl;
}
int main()
{
    int area,breadth,l;
    float r,le,br;
    cout<<"___________"<<endl;
    cout<<"AREA OF SHAPES USING FUNCTION OVERLOADING"<<endl;
    
    cout<<endl;
    cout<<"Enter two value for Rectangle:";
    cin>>area>>breadth;
    
    cout<<endl;
    cout<<"Enter one value for Circle:";
    cin>>area;
    
    cout<<endl;
    cout<<"Enter two values for triangle:";
    cin>>area>>area;
    
    cout<<endl;
    cout<<"____"<<endl;
    
    fun(area,breadth);
    fun(area);
    fun(area,breadth);
    
    cout<<"_____"<<endl;
    return 0;
}
     
