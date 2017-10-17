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
    cout<<"Input a file to be converted to greyscale"<<endl;    
    cin>>input;
    vector <vector <Pixel> >bmp;
    Pixel rgb;

    void open(string);    
    image.open(input);
    bool validBMP = image.isImage();
       if( validBMP == true)
        {
          bmp = image.toPixelMatrix();
  
    
        int row = bmp.size();
        int col = bmp[0].size();
        cout<<input<<" has been loaded. It is "<<col<<" wide, and "<<row<<" high"<<endl;
    
            for( int r = 0; r < row; r++)
            {
                for( int c = 0; c < col; c++)
                {
                    rgb = bmp[r][c];
                    int greyScale = (rgb.red+rgb.green+rgb.blue)/3;
                    rgb.red = greyScale;
                    rgb.green = greyScale;
                    rgb.blue = greyScale;
                    bmp[r][c] = rgb;
                }
            }
        image.fromPixelMatrix(bmp);
        image.save("OldTimey.bmp");
        }
        else
        {
            cout<<"Please enter a 24 bit photo in proper BMP format"<<endl;
        }
return 0;
}
