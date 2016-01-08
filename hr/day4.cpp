class Person{
public:
   int age ;
   Person(int initial_Age);
   void amIOld();
   void yearPasses();
};
Person::Person(int initial_Age){
  // Add some more code to run some checks on initial_Age
    if(initial_Age < 0){
        cout << "This person is not valid, setting age to 0.\n";
        age = initial_Age;
    }
    else{
        age = initial_Age;
    }
}
void Person::amIOld(){
    // Do some computations in here and print out the correct statement to the console 
    if(age < 13){
        cout << "You are young.\n";
    }
    else if(age >= 13 && age < 18){
        cout << "You are a teenager.\n";
    }
    else{
        cout << "You are old.\n";
    }
}
    

void Person::yearPasses(){
  // Increment the age of the person in here
    age += 1;
}