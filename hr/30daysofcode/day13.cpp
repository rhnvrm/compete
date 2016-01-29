//Write MyBook class
class MyBook : public Book{
    private:
    int price;
    
    public:
        void display(){
            cout << "Title: " << title;
            cout << "\nAuthor: "<< author
                 << "\nPrice: " << price << "\n";
        }
    
        MyBook(string t, string a, int p) :
            Book(t,a){
                price = p;
            }
};
