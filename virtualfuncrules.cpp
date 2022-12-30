#include<iostream>
#include<cstring>
using namespace std;
class CWH{
    protected:
    string Title;
    float Rating;
    public:
    CWH(string t,float r){
          (Title=t);
          Rating=r;
    }
    virtual void display(){}
};
class CWHVideo:public CWH{
    float VideoLength;
    public:
    CWHVideo(string t,float r,float vl): CWH(t,r){
        VideoLength=vl;
    }
    void display(){
        cout<<"This video is amazing with its content and the title is "<<Title<<endl;
        cout<<"Ratings: "<<Rating<<" Out of 5 : "<<endl;
        cout<<"The length of the video is : "<<VideoLength<<" Minutes "<<endl;
    }
};
class CWHText:public CWH{
    int WordCount;
    public:
    CWHText(string t,float r,int wc): CWH(t,r){
        WordCount=wc;
    }
    void display(){
        cout<<"This video is amazing with its content and the title is "<<Title<<endl;
        cout<<"Ratings: "<<Rating<<" Out of 5 : "<<endl;
        cout<<"The wordcount is : "<<WordCount<<" Words "<<endl;
    }
};
int main(){
    string title;
    float rating,vlen;
    int words;
    //for code with harry video
    title="Python Tutorials";
    rating=4.93;
    vlen=4.56;
    CWHVideo t1(title,rating,vlen);
    // t1.display();
    //for code with harry text
    title="Python Tutorials text";
    rating=4.91;
    words=42;
    CWHText t2(title,rating,words);
    // t2.display();
    CWH t0[2];
    t0[0]=&t1;
    t0[1]=&t2;
    t0[0]->display();
    t0[1]->display();
    return 0;
}
/*Rules for virtual function
1)They cannot be static.
2)They are accessed by pointer objects.
3)Virtual func can be a friend of another class.
4)Virtual func created in base class maynot be used.
5)A virtual func  is defined in a base class there 
is no necessity in defining it in the derived class.*/