//Lab Exercise 4.1
/*Inheritance*/
//Anuj Saharan

#include <iostream.h>
#include <stdio.h>
#include <string.h>

class publication
{
private:
    char title[25];
    float price;

public:
    void input()
    {
    cout<<"Title: ";
    cin>>title;
    cout<<"Price: ";
    cin>>price;
    }

    void output()
    {
    cout<<"Title: "<<title;
    cout<<"\nPrice: "<<price;
    }
};

class book: public publication
{
private:
    unsigned int total_pages;

public:
    void input_total_pages()
    {
    cout<<"Total Pages: ";
    cin>>total_pages;
    }

     void output_total_pages()
    {
    cout<<"\nTotal Pages: "<<total_pages;
    }
};

class audio_cassette: public publication
{
private:
    unsigned int run_time;

public:
    void input_run_time()
    {
    cout<<"Run time: ";
    cin>>run_time;
    }

    void output_run_time()
    {
    cout<<"\nRun time: "<<run_time;
    }
};

int main()
{
cout<<"Book 1\n\n";
book book_1;
book_1.input();
book_1.input_total_pages();
cout<<"\nAudio Cassette 1\n\n";
audio_cassette audio_cassette_1;
audio_cassette_1.input();
audio_cassette_1.input_run_time();
cout<<"\nBook 1\n\n";
book_1.output();
book_1.output_total_pages();
cout<<"\nAudio Cassette 1\n\n";
audio_cassette_1.output();
audio_cassette_1.output_run_time();
return 0;
}