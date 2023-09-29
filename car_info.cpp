#include <iostream>
#include <string>
#include "swap.cpp" 


using namespace std;

class car {
    public:
        void read();
        void print();
        string get_name();
        string get_producer();
        int get_birth();
        double get_price();
        car(string name , string producer, int birth, double price ){
        this->name = name1;
        this->birth = birth;
        this->producer = producer;
        this->price = price;
}        
        ~car();         // destructor
        

        // car (string name , string producer, int birth, double price){   // constructor
        //     this->name = name;
        //     this->producer = producer;
        //     this->birth = birth;
        //     this->price = price;
        // } 

    private:
        string name, producer;
        int birth;
        double price;
        static int id;

};

car :: car(string name1 , string producer1, int birth, double price ){ // constructor
    this->name = name1;
    this->birth = birth;
    this->producer = producer;
    this->price = price;
}

car :: ~car(){
    cout <<"object has been deleted" ;
}
string car :: get_name(){
    return this->name;
}
string car :: get_producer(){
    return this->producer;
}
int car :: get_birth(){
    return this->birth;
}
double car :: get_price(){
    return this->price;
}

void car :: read(){
    cout << "name: " ; cin >> this->name; 
    cout << "producer: " ; cin >> this->producer;
    cout << "birth: " ; cin >> this->birth;
    cout << "price (USD): " ; cin >> this->price;
}

void car :: print(){
    cout << "name: " << get_name() << "\n";
    cout << "producer: " << get_producer() << "\n";
    cout << "birth: " << get_birth() << "\n";
    cout << "price (USD): " << get_price() << "\n" << "\n";
    
}
// end class
//-----------------------
// add function 
// function - find max price 
void max_price(car cars[] , int n){   
    double tempt=0;
    int count = 0;
    for(int i=0 ; i<n ; i++){
        if(tempt < cars[i].get_price()) {
            count = i;
        }
    }
    cout << "the most expensive car is: " << cars[count].get_name() << "\n" ;
}

// function - sort acording to name of producers
void sort_producers(string pdc , car cars[] ,int index ){
    string str = " ";
    for(int i=0 ; i < index ; i++){
        if(cars[i].get_producer() == pdc){
            str = str + cars[i].get_name() + " " ;
        }

    }

    cout <<"cars of " << pdc <<" is: " << str ;
}

// car(string name , string producer, int birth, double price )
int main(){
    car xe1(tx2 , honda, 1990, 30  );

}