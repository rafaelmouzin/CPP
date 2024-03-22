#include <iostream>
#include <string>
using namespace std;

int main()
{
   string cond1;
    int n1;
    float resultado;
    bool sair = false;

    while (!sair)
    {
        cout << "\n\n Ola escolha qual medida vc quer converter\n\n\n ";

        cout << " qual tipo de conversão vc deseja realizar\n\n";
        cout << " se mm para polegadas  digite - 1\n ";
        cout << " se polegadas para mm  digite -2 \n";
        cout << " se cm para mm digite - 3\n";
        cout << " se cm para polegadas digite - 4\n";
        cout << " se polegada para cm digite - 5\n";
        cout << " se mm para cm digite - 6 \n ";
        cout << " se deseja sair, digite 0\n";

        cin >> cond1;
		cout << cond1;
		
        if (cond1 == "0")
        {
			sair = true; 
        }
		else if (cond1 == "1" || cond1 == "2" || cond1 == "3" || cond1 == "4" || cond1 == "5" || cond1 == "6")
		{
            cout << " digite o valor da medida \n";
            cin >> n1;

            if (cond1 == "1")
            {
                resultado = n1 / 25.4;
                cout << "sua conversão foi : " << resultado << endl;
                
                break;
            }
            else if (cond1 == "2")
            {
                cout << "seu conversão foi de " << n1 * 25.4;
                
                break;
            }
            else if (cond1 == "3")
            {
                cout << " sua conversão foi de " << n1 * 10;
                
                break;
            }
            else if (cond1 == "4")
            {
                cout << "sua conversão foi de : " << n1 * 39.37;
                
                break;
            }
            else if (cond1 == "5")
            {
                cout << "sua conversão foi de : " << n1 * 2.54;
                
                break;
            }
            else if (cond1 == "6"){
			
                cout << " sua conversão foi de : " << n1 / 10;
                
                break;
            }
        
    	}
    	else {
    		cout << "errado";
		}
	}

    return 0;
}

