#include <iostream>

int main()
{

  // some useful methods

  // std::string cars[] = {"Volvo", "Mitsubishi"};
  std::string colorPalette[][3] = {
    {"red-100", "red-300", "red-500"},
    {"green-100", "green-300", "green-500"},
    {"blue-100", "blue-300", "blue-500"},
  };
 

  int rows = sizeof(colorPalette)/sizeof(colorPalette[0]);
  int columns = sizeof(colorPalette[0]) / sizeof(colorPalette[0][0]);


  for (int i = 0; i < rows; i++)
  {
    /* code */
     for (int j = 0; j < columns; j++) {
      std::cout << colorPalette[i][j] << " ";
     }

     // you can use the additional statementlike this
     /*
     for (int t = 0; t < colorPalette[i][j].empty(); t++)
     {
     }
     */

     std::cout << std::endl;
  
  }
  


  return 0;
}
