//Lab Exercise 5.1
/*File Handling - Text Files*/
//Anuj Saharan

#include <fstream.h>
#include <string.h>

int main()
{
ifstream input_file("test.txt");
unsigned int consonant_count=0,the_count=0,upper_case_vowel_count=0,word_count=0,line_count=0;
char ch;
while(input_file>>ch)
    {
    if(!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')) {consonant_count++;}
    if((ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) {upper_case_vowel_count++;}
    }
input_file.clear();
input_file.seekg(0,ios::beg);
char word[25];
while(!input_file.eof())
    {
    input_file>>word;
    if(strcmp(word,"the")==0) {the_count++;}
    word_count++;
    }
input_file.clear();
input_file.seekg(0,ios::beg);
while(input_file.getline(word,80))
    {
    line_count++;
    }
cout<<"Consonants: "<<consonant_count;
cout<<"\nUpper Case Vowels: "<<upper_case_vowel_count;
cout<<"\nWords: "<<word_count;
cout<<"\nLines: "<<line_count;
cout<<"\nThe: "<<the_count;
input_file.close();
return 0;
}