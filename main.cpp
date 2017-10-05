#include<vector>
#include<string>
#include "bitmap.h"
#include<iostream>
using namespace std;
int main()
{
/*  - Ask the user to input an image and name in BMP format
    - Input the image 
    - Take the image and convert it into a vector
    - Make a loop that will check each individual pixel 
    - Make a loop that will find the value from 0-255 of the RGB
    - Take the average of the RGB colors and set the R, G, and B value to the average
    - Have the loop move to the next pixel to do this again
    - Make sure the file isn't overwritten, but create a new version of it
    - Output the new version of the image in greyscale 
*/

        Bitmap image;
        string input;
    cout<<"Input a file to be converted to grayscale"<<endl;    
    cin>>input;
    vector <vector <Pixel> >bmp;
    Pixel rgb;

    void open(string);    
    image.open("machupicchu.bmp");
    bool isImage();
    bmp = image.toPixelMatrix();
    vector<vector<Pixel> >toPixelMatrix();
    
    const int width = Pixel [0].size();
    const int height = 
    cout<<input<<" has been loaded. It is "<<width<<"wide, and "<<Pixel.height()<<"high"<<endl;

    rgb = bmp[0][0];
    rgb.red = 0;

    bmp[0][0] = rgb;
    image.fromPixelMatrix(bmp);
    image.save("machupicchu.bmp");




return 0;
}
