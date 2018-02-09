#include <iostream>
using namespace std;

class Convert{

  private:
  float n, usd, yen, euro, peso, pound, yuan;

  public:
  void setAmount(float usd);
  float getYen(float n);
  float getEuro(float n);
  float getPeso(float n);
  float getPound(float n);
  float getYuan(float n);
    
};

    void Convert::setAmount(float usd){ 
      n=usd;
    }
    
    float Convert::getYen(float n){
      yen=n*109.66;
      return yen;
    }
    
    float Convert::getEuro(float n){
     euro=n*0.82;
      return euro;
    }
    
    float Convert::getPeso(float n){
    peso=n*18.69;
      return peso;
    }
    
    float Convert::getPound(float n){
      pound=n*0.72;
      return pound;
    }
    
    float Convert::getYuan(float n){
      yuan=n*6.30;
      return yuan;
    }
    
void prompt();
void error();
void printmenu();
void endPrint();
void defaultPrint();  

int usd;
int menuChoice;


int main() {
  
    float usd;
    
    prompt();
    
    cin >> usd;
    Convert x;
    
    if(usd<=0){
       error();
    }
    
    else {do{ printmenu();
        
        cin >> menuChoice;
        
        switch (menuChoice){
                
            case 1: {
              cout <<"\nYour amount in Yen is ￥"<< x.getYen(usd) <<"."<< endl;
            }

              continue;
                
            case 2: {
              cout <<"\nYour amount in Euro is €"<< x.getEuro(usd) <<"."<< endl;    
            }
              continue;  
            
            case 3: {
              cout <<"\nYour amount in Peso is $"<< x.getPeso(usd) <<"."<< endl; 
            }
              continue;
              
            case 4: {
              cout <<"\nYour amount in Pound is £"<< x.getPound(usd) <<"."<< endl; 
            }
              continue;
            
            case 5: {
              cout <<"\nYour amount in Chinese Yuan is ¥"<< x.getYuan(usd) <<"."<< endl; 
            }
              continue;
                
            case 6: {cout <<"\nYour amount in Yen is ￥"<< x.getYen(usd) <<"."
              <<"\nYour amount in Euro is €"<< x.getEuro(usd) <<"."
              << "\nYour amount in Peso is $"<< x.getPeso(usd) <<"."
              <<"\nYour amount in Pound is £"<< x.getPound(usd) <<"."
              <<"\nYour amount in Yuan is ¥"<< x.getYuan(usd) <<"."<<endl;
            }
              continue;
                
            case 7:endPrint();
              void exit(int return_code);
              break;

	          default:defaultPrint(); 
	          continue;
	          
        }}while (menuChoice !=7);
           
        return 0;
    }
        
        }



void prompt(){
  cout<<"Please enter a dollar amount (USD):"<<endl;
    
}

void error(){
  cout<<"Invalid Amount"<<endl;
  void exit(int return_code);
}

void printmenu(){
  cout << "\nEnter 1. For Yen"<<endl;
  cout << "Enter 2. For Euro"<<endl;
  cout << "Enter 3. For Peso"<<endl;
  cout << "Enter 4. For Pound"<<endl;
  cout << "Enter 5. For Yuan"<<endl;
  cout << "Enter 6. For all Conversions"<<endl;
  cout << "Enter 7. Quit"<<endl;
}


void endPrint(){
  cout <<"\n****Goodbye!****\n";
}

void defaultPrint(){
  cout <<"Please select a valid choice"<<endl;
}  