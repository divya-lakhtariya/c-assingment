/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/
#include <iostream>    
using namespace std;    
class Cal
 {    
    public:    
    int add(int a,int b)
{      
        return a + b;      
    }      
      int divi(int a, int b)      
    {      
        return a-b;      
    }      
    
    int multy(int a, int b)      
    {      
        return a*b;      
    }      
    int divid(int a, int b)      
    {      
        return a/b;      
    }      
}; 
    
int main(void)
 {    
    Cal C;   //     class object declaration.   
    cout<<C.add(10, 20)<<endl;      
    cout<<C.add(12,24)<<endl;
	cout<<C.add(10,30)<<endl;
	cout<<C.add(20,30)<<endl;   
   return 0;    
}    

