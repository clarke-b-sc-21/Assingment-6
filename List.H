#define LIST_H



using namespace std;

class list {

protected:      

     vector <int> p;   

public :

     list( int n = 100) 

     { 
       p.resize(n);   
     }

     virtual bool empty() = 0;
     virtual bool full() = 0;
     virtual void store(int val) = 0;
     virtual  int retrieve() = 0;

};
