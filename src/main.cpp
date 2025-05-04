/* Amerike university
      Author: Julio López
      Date: 02/05/25
      Practice #: 29
      Description: This program shall check if the number pt in by the user is prime*/
 
      #include <iostream>
      using namespace std;
      
      bool Prime(int Number)
      {
        if (Number <= 1)
        return false;
      
        for (int i = 2; i * i <= Number; i++)
        {
        if (Number % i == 0)
        return false;
        }
        return true;
      }
      
      int main()
      {
        int N;
      
        cout << "Insert a number: ";
        cin >> N;
      
        if (Prime(N))
        {
        cout << "It's prime";
        }
        else
        {
        int lower = N - 1;
        while (lower > 1 && !Prime(lower))
        {
        lower--;
        }
      
        if ((N - lower))
        {
        cout << "Closest prime is: " << lower;
        }
        }
      
          return 0;
      }