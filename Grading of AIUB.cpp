#include <iostream>
using namespace std;
int main(){
    float a,b,c,d,e,f,g,h,a1,b1,c1,d1,e1,f1,g1,result;

    cout<<"Enter your numbers here "<<endl;
    cout<<"Introduction to programming :";
    cin>>a;
    cout<<"Introduction to programming lab :";
    cin>>b;
    cout<<"Introduction to computer science :";
    cin>>c;
    cout<<"Physics 1 :";
    cin>>d;
    cout<<"Physics 1 lab :";
    cin>>e;
    cout<<"Math 1 :";
    cin>>f;
    cout<<"English :";
    cin>>g;
    cout<<"Enter your semester credit :";
    cin>>h;

    if (a>89 && a<=100){
   a1=4.00*3;
}
else if (a>84 && a<=89){
    a1=3.75*3;
}
else if (a>79 && a<=84){
    a1=3.5*3;
}
else if (a>74 && a<=79){
    a1=3.25*3;
}

else if (a>69 && a<=74){
    a1=3.00*3;
}
else if (a>64 && a<=69){
    a1=2.75*3;
}
else if (a>59 && a<=64){
    a1=2.50*3;
}
else if (a>49 && a<=59){
    a1=2.25*3;
}
else if (a<50){
    a1=2.00*3;
}


 if (b>89 && b<=100){
   b1=4.00*1;
}
else if (b>84 && b<=89){
    b1=3.75*1;
}
else if (b>79 && b<=84){
    b1=3.5*1;
}
else if (b>74 && b<=79){
    b1=3.25*1;
}

else if (b>69 && b<=74){
    b1=3.00*1;
}
else if (b>64 && b<=69){
    b1=2.75*1;
}
else if (b>59 && b<=64){
    b1=2.50*1;
}
else if (b>49 && b<=59){
    b1=2.25*1;
}
else if (b<50){
    b1=2.00*1;
}

 if (c>89 && c<=100){
   c1=4.00*1;
}
else if (c>84 && c<=89){
    c1=3.75*1;
}
else if (c>79 && c<=84){
    c1=3.5*1;
}
else if (c>74 && c<=79){
    c1=3.25*1;
}

else if (c>69 && c<=74){
    c1=3.00*1;
}
else if (c>64 && c<=69){
    c1=2.75*1;
}
else if (c>59 && c<=64){
    c1=2.50*1;
}
else if (c>49 && c<=59){
    c1=2.25*1;
}
else if (c<50){
    c1=2.00*1;
}

  if (d>89 && d<=100){
   d1=4.00*3;
}
else if (d>84 && d<=89){
    d1=3.75*3;
}
else if (d>79 && d<=84){
    d1=3.5*3;
}
else if (d>74 && d<=79){
    d1=3.25*3;
}

else if (d>69 && d<=74){
    d1=3.00*3;
}
else if (d>64 && d<=69){
    d1=2.75*3;
}
else if (d>59 && d<=64){
    d1=2.50*3;
}
else if (d>49 && d<=59){
    d1=2.25*3;
}
else if (d<50){
    d1=2.00*3;
}

  if (e>89 && e<=100){
   e1=4.00*1;
}
else if (e>84 && e<=89){
    e1=3.75*1;
}
else if (e>79 && e<=84){
    e1=3.5*1;
}
else if (e>74 && e<=79){
    e1=3.25*1;
}

else if (e>69 && e<=74){
    e1=3.00*1;
}
else if (e>64 && e<=69){
    e1=2.75*1;
}
else if (e>59 && e<=64){
    e1=2.50*1;
}
else if (e>49 && e<=59){
    e1=2.25*1;
}
else if (e<50){
    e1=2.00*1;
}

  if (f>89 && f<=100){
   f1=4.00*3;
}
else if (f>84 && f<=89){
    f1=3.75*3;
}
else if (f>79 && f<=84){
    f1=3.5*3;
}
else if (f>74 && f<=79){
    f1=3.25*3;
}

else if (f>69 && f<=74){
    f1=3.00*3;
}
else if (f>64 && f<=69){
    f1=2.75*3;
}
else if (f>59 && f<=64){
    f1=2.50*3;
}
else if (f>49 && f<=59){
    f1=2.25*3;
}
else if (f<50){
    f1=2.00*3;
}

  if (g>89 && g<=100){
   g1=4.00*3;
}
else if (g>84 && g<=89){
    g1=3.75*3;
}
else if (g>79 && g<=84){
    g1=3.5*3;
}
else if (g>74 && g<=79){
    g1=3.25*3;
}

else if (g>69 && g<=74){
    g1=3.00*3;
}
else if (g>64 && g<=69){
    g1=2.75*3;
}
else if (g>59 && g<=64){
    g1=2.50*3;
}
else if (g>49 && g<=59){
    g1=2.25*3;
}
else if (g<50){
    g1=2.00*3;
}

result=(a1+b1+c1+d1+e1+f1+g1)/h;

cout<<"Your Final CGPA is :"<<result<<endl;

return 0;
}
