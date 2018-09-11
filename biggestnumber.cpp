//Author:
#include<iostream>

int main()
{
  //declare variables here
 int young;
 int old;        
  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>young; 
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
 std::cin>>old;

  //determine if first or second is bigger and store that in a third variable
if ( young<old)
{
        std::cout<<old;
}
else

{
std::cout<<young;
  //print out the variable representing the biggest number
  
}  
  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
