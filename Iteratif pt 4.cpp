#include <iostream>
#include <string>

using namespace std;
class Bilangan{
      friend ostream& operator<<(ostream&, Bilangan&);
      friend istream& operator>>(istream&, Bilangan&);
      public:
              Bilangan (){};
             void iteratif(){
                  int a = 1;
                  int b = 100;
                  while (!(a==b))
                  {
                  if (a % 5==0 && a % 7==0)
                  {
                  cout << "Hasilnya : "<<a << endl;      }
                  else
                  {
                  }
                  a =a+1;
                  }
                  }
      private:
              int a,b;
      };
      istream& operator>>(istream& in, Bilangan& input){
           cout<<"Program Mencetak bilangan yg habis dibagi 5 dan 7 antara 1-100 secara Iteratif"<<endl;
           return in;
           }
      ostream& operator<<(ostream& out, Bilangan& output){
               out<<"Hasilnya : "<<output.a;
               return out;
               }
     
int main()
{   Bilangan x;
    cin>>x;
    x.iteratif();
    cout<<endl;
   return 0;
}
