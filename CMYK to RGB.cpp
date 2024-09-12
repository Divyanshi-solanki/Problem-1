/*Several different formats are used to represent color. For example, the primary format for LCD displays, digital cameras, and web pages—known as the RGB format—specifies the level of red (R), green (G), and blue (B) on an integer scale from 0 to 255. The primary format for publishing books and magazines—known as the CMYK format—specifies the level of cyan (C), magenta (M), yellow (Y), and black (K) on a real scale from 0.0 to 1.0.*/

/*For given CMYK format, convert it to RGB format using these mathematical formulas:

white = 1?black
red =255×white×(1?cyan)
green=255×white×(1?magenta)
blue =255×white×(1?yellow)*/

/*Input will be four real numbers from 0-1 which represent cyan, magenta, yellow, and black; compute and output the corresponding RGB values, each rounded to the nearest integer; separated by space.*/

//solution//

#include<iostream>

using namespace std;

int main()
{
    float white,red,green,blue,black,cyan,magenta,yellow;
    
    cin>>cyan>>magenta>>yellow>>black;
    
    white=1-black;
    red=255*white*(1-cyan);
    green=255*white*(1-magenta);
    blue=255*white*(1-yellow);
    
    cout<<red<<" "<<green<<" "<<blue;
    return 0;
}
