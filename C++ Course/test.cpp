#include <iostream>
using namespace std;

class Message{
    public : 
            virtual void process() const = 0 ;
};

class Greeting : public Message{
public :
  void process() const override{
           cout << "This is Greet message" << endl;
  }
}; 

class Farewell : public Message{
public :
  void process() const override{
           cout << "This is Farewell message" << endl;
  }
}; 

class MessageProcessor {
       public : 
                void Output(const Message& message) const {
                    message.process();
                }
};

int main()
{
    Greeting greet;
    Farewell farewell;

    MessageProcessor processor;
    
    processor.Output(greet);
    processor.Output(farewell);
    processor.Output(greet);

    return 0;
}