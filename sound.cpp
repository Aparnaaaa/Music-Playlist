#include <iostream>
#include <new>
using namespace std;
int num; // number of songs in the play list at any given time. ( to keep track)
string * p;
string * q;
//string * r;

string *create()
{
int i,n;
  cout << "How many songs would you like to add to the play list? ";
  cin >> i;
  p=new string[i];
  num=i;

    for (n=0; n<i; n++)
    {
      cout << "Enter song_name: ";
      cin>>p[n];
      //std::getline(cin,p[n]);
     // cout<<i<<endl;
    }


return p;
}

string *insert_begin(string *p)
{ int n;
    num++;
//Scout<<num<<endl;
//cout<<p[0];
string *s;
s=new string[num];



   for(n=num-1; n>0; n--)
  {
      //check if the control is inside the loop
    /*  if(n==num-1)
      {
          cout<<"in: "<<endl;
      }
*/
      s[n]=p[n-1];
  //   cout<<s[n]<<endl;
  }

 cout<<"enter the song you want to add at the beginning"<<endl;
  cin>>s[0];

  return s;
}


string *disp(string *p)
{ int n;
int cnt=0;
cout <<endl<< "The created playlist : "<<endl;
    for (n=0; n<num; n++)
      {cout <<n+1<<"."<< p[n] <<endl;
        cnt++;
      }
      cout<<"the total number of songs in the music play list: "<<cnt<<endl;
      return p;
}


string *remove(string *p)
{
int n,pos;
//string *s;
//s=new string[num];
cout<<"enter the position you want to remove song from"<<endl;
cin>>pos;
pos=pos-1;
for(n=pos;n<num-1;n++)
{ cout<<"inside for"<<endl;


        p[n]=p[n+1];
        cout<<p[n]<<endl;


}
num--;
return p;
}

string * inter(string *p)
{
    int n,pos;
    num++;
//cout<<num<<endl;
//cout<<p[0];
string *s;
s=new string[num];
//string song;
    cout<<"enter the position where the song should be added"<<endl;
    cin>>pos;
pos=pos-1;


   for(n=num-1; n>=0; n--)
  {
      //check if the control is inside the loop
      if(n==pos)
      {
           cout<<"enter the song you want to add at the postion"<<pos<<endl;
        cin>>s[pos];

      }
    else if (n>pos)
    {

     s[n]=p[n-1];
     //cout<<s[n]<<endl;
    }
    else
    {
        s[n]=p[n];
    // cout<<s[n]<<endl;
    }

  }



  return s;
}

int main ()
{

char ans;

 int ch;

//input

cout<<"-------------------MUSIC PLAY LIST----------------------"<<endl;
cout<<"--------Enter the operation you want to perform---------"<<endl;
cout<<"1.Create a play list."<<endl;
cout<<"2.Add a song at the beginning"<<endl;
cout<<"3.Add a song at an intermediate position"<<endl;
cout<<"4.Remove a song."<<endl;
cout<<"5.Display the music play list"<<endl;

cin>>ch;

//operation
switch(ch)
{
    case 1: q=create();
    break;
    case 2: q=insert_begin(q);
    break;
    case 3: q=inter(q);
    break;
    case 4: q=remove(q);
    break;
    case 5: q= disp(q);
    break;
    default: cout<<"enter valid option"<<endl;
}

cout<<"Do you want to continue?"<<endl;
cin>>ans;

if(ans=='y')
{
    main();

}
else
return 0;
}
