#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;

    public:
    CWH(string s , float r){
        title = s;
        rating = r;
    }

   //  IT IS PURE VIRTUAL FUNCTION .... AND IT MAKE COMPULSORY TO MAKE DISPLAY FUNCTION 
   //  IN DERIVED CLASSES....OTHERWISE CODE WILL NOT COMPILE AND GIVE ERROR.. 
    
    virtual void display() = 0;  
};

class CWH_video : public CWH{
    float video_length;

    public: 
    CWH_video(string s , float r , float vl) : CWH(s ,r){
        video_length = vl;
    }

    void display(){
        cout<<"The title of the video is : "<<title<<endl;
        cout<<"The rating given is : "<<rating<<endl; 
        cout<<"The length of the video is : "<<video_length<<endl;
    }
};

class CWH_text : public CWH{
    float text_length;

    public: 
    CWH_text(string s , float r , float wd) : CWH(s ,r){
        text_length = wd;
    }

    void display(){
        cout<<"The title of the text is : "<<title<<endl;
        cout<<"The rating given to the txt format is : "<<rating<<endl; 
        cout<<"The length of the text is : "<<text_length<<endl;
    }
};

int main(){
    string title;
    float rating , vlength;
    int words;

    // Video format
    title = "Learning C++ with HARRY";
    vlength = 4.78;
    rating = 5;
    CWH_video c_video(title , rating , vlength);
    // c_video.display();

    // text format
    title = "Reading C++ with Harry website";
    words = 175;
    rating = 5;
    CWH_text c_text(title , rating , words);
    // c_text.display();
    
    CWH * lecture[2];
    lecture[0] = & c_video;
    lecture[1] = & c_text;
     
    cout<<endl;
    lecture[0]->display();
    cout<<endl;
    cout<<endl;
    lecture[1]->display();
    return 0 ;
}