#include "stdafx.h"
#include <iostream>
 
using namespace std;
 
 
int main()
{
 
int a[6];
int temp;
a[1] = 2;
a[2] = 5;
a[3] = 7;
a[4] = 2;
a[5] = 1;
for (int i = 1; i<6; i++)
{
cout << a[i];
}
for (int i = 1; i<6; i++)
{
for (int j = 1; j<6; j++)
{
if (a[i]>a[j])
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
 
}
}
}
cout << endl;
for (int i = 1; i<6; i++)
{
cout << a[i];
}
 
 
return 0;
}
 
 
}
