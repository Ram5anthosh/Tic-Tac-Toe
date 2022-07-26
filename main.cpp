#include <iostream>

using namespace std;

void draw(bool o[9], bool x[9]);
bool check(bool o[9],bool x[9],int i);
int input(int a);

int main (int argc, char *argv[])
{
  int a;


  bool o[9],x[9];

  for(int i=0;i<9;i++){
    o[i]=0;
    x[i]=0;
  }

  int d=0;

  for(int i=0;i<5 && check(o,x,i)==false;i++){

    draw(o,x);

    cout<<"Player 1 enter the block of your choice : ";
    cin>>a;
    //d++;
    a=input(a-1);
    o[a]=1;
    d++;

    draw(o,x);

    if(check(o,x,d)){
       return 0;
    }

    cout<<"Player 2 enter the block of your choice : ";
    cin>>a;
    a=input(a-1);
    x[a]=1;
    d++;

    draw(o,x);

    if(check(o,x,d)){
      return 0;
    }
  }
  
  return 0;
}
