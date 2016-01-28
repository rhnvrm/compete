//Write your code here

class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "n and p should be non-negative";
  }
} myex;

class Calculator{
    public:
     int power(int x, int y){
         
         if(x < 0 || y < 0) 
             throw myex;
         
         return pow(x,y);
     }
};
