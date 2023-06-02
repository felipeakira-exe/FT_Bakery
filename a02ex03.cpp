/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#include <string>
#include <vector>
#include <iostream>
#include <iomanip> 

#include "a02ex00.hpp"
#include "a02ex01_a.hpp"
#include "a02ex03.hpp"
#include "a02ex03_a.hpp"
#include "a02ex03_b.hpp"
#include "a02ex03_c.hpp"
#include "a02ex03_d.hpp"
#include "a02ex03_e.hpp"
#include "Cheese.hpp"
#include "CottageCheese.hpp"
#include "Ham.hpp"
#include "Mortadella.hpp"

/* DANGER: A LOT OF GLOBAL VARIABLES !!! (OBJECTS & STRUCTURES) */

MyBooleanClass * verboseMode       = NULL;
MyBooleanClass * shortMessageMode  = NULL;

vector<Food *> myMainList;
   
int main(int argc, char* argv[]) {
   verifyArguments(argc, argv);
   // -v = verboseMode = true
   // -s = shortMessageMode = true

   myMainList.clear(); 
   // Apaga todos os elementos do vetor de ponteiros da classe Comida myMainList
   
   Information::wellcome("C++ Program " + string(argv[0]) + " running!", shortMessageMode->getStatus());
   // -s = não imprime as informações Instituicao, autor, etc.
   
   process();
   
   Information::bye(shortMessageMode->getStatus());
   // -s = nao imprime as informações Instituicao, autor, etc.
   clearAll();
};

void process() {
   vector<string> opcoes({ "Exit", "List Database", "Insert Items" });
   Menu menu("Main Menu", opcoes);
   // titulo = "Main Menu"
   // opcoes = vetor de string opcoes

   int escolha = -1;
   
   while(escolha) {
      escolha = menu.getEscolha();
      /*
         menu.getEscolha()
         Imprime
            ------------------------------
            Main Menu
            ------------------------------
            0. Exit
            1. List Database
            2. Insert Items
            ------------------------------
            Escolha entre 0 e 2
            ------------------------------
         e lê o próximo valor
      */

      switch(escolha)
         {
            case 1: { listItems();   }; break;
               /*
                  Imprime
                     ------------------------------
                     Items in Database
                     ------------------------------
                  Percorre todo o vector de Comida
                  e imprime os valores
               */ 

            case 2: { insertItems(); }; break;
               /*
                  Imprime
                  ------------------------------
                  Insert New Items:
                  ------------------------------
                  0. Exit
                  1. Bread
                  2. Cheese
                  3. Cottage Cheese
                  4. Cracker
                  5. Filled Wafer
                  6. Ham
                  7. Mortadella
                  ------------------------------
                  Escolha entre 0 e 7
                  ------------------------------
               */
            
         };
   };
};

void clearAll()   // está errada ! corrigir !!!!
   {
   myMainList.clear();

   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end())
      {
      delete (*scan);
      *scan - NULL;
      scan++;
      };

   delete verboseMode;
   delete shortMessageMode;
   verboseMode = NULL;
   shortMessageMode = NULL;
   };

void listItems() {
   double total = 0.00;
      
   cout << "------------------------------\nItems in Database:\n------------------------------\n";
   vector<Food *>::iterator scan = myMainList.begin();
   
   while(scan != myMainList.end()) {
      cout << "  @ " << setw(20) << (*scan)->getDescricao() << "\n\tUS$ " << fixed << setprecision(2) << (*scan)->getValor() << endl;
      total +=  (*scan)->getValor();
      scan++;
   };
   cout << "  Total cost: US$ " << fixed << setprecision(2) << total << endl;
};

void insertItems() {
   cout << "------------------------------\nInset New Items:\n------------------------------\n";
  
   Menu menu("Insert Items", { "Exit", "Bread", "Cheese", "Cottage Cheese", "Cracker", "Filled Wafer", "Ham", "Mortadella" });
   int escolha = -1;
   
   while(escolha)
      {
         escolha = menu.getEscolha();
         switch(escolha)
         {
            case 1: { insertBread();         }; break;
            case 2: { insertCheese();        }; break;
            case 3: { insertCottageCheese(); }; break;
            case 4: { insertCracker();       }; break;
            case 5: { insertFilledWafer();   }; break;
            case 6: { insertHam();           }; break;
            case 7: { insertMortadella();    }; break;
         };
      };
};

void insertBread(){
   Bread * bread;
   string buffer;
   string type;
   float  weight;
   double cost;

   cout << "------------------------------\nInsert Bread:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   bread = new Bread(type, weight,cost);
   myMainList.insert(myMainList.end(), bread);
   
   cout << endl << bread->getDescricao() << " - US$ " << fixed << setprecision(2) << bread->getValor() << endl;   
};

void insertCheese() {
   Cheese * cheese;
   string buffer;
   float gordura;
   float weight;
   double cost;

   cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
   cout << "TeorGordura: "; getline(cin, buffer); gordura = stof(buffer);
   cout << "Weight ....: "; getline(cin, buffer); weight  = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost    = stod(buffer);
   cin.clear();
   
   cheese = new Cheese(gordura, weight, cost);
   myMainList.insert(myMainList.end(), cheese);

   cout << endl << cheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cheese->getValor() << endl;
};

void insertCottageCheese() {
   CottageCheese * cottageCheese;
   string buffer;
   string marca;
   float gordura;
   float weight;
   double cost;

   cout << "------------------------------\nInsert Cheese:\n------------------------------\n";
   cout << "Marca .....: "; getline(cin, buffer); marca = buffer;
   cout << "TeorGordura: "; getline(cin, buffer); gordura = stof(buffer);
   cout << "Weight ....: "; getline(cin, buffer); weight  = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost    = stod(buffer);
   cin.clear();
   
   cottageCheese = new CottageCheese(marca, gordura, weight, cost);
   myMainList.insert(myMainList.end(), cottageCheese);

   cout << endl << cottageCheese->getDescricao() << " - US$ " << fixed << setprecision(2) << cottageCheese->getValor() << endl;
};

void insertCracker() {
   Cracker * cracker;
   string buffer;
   string type;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Cracker:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, buffer); type   = buffer;
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   cracker = new Cracker(type, amount,cost);
   myMainList.insert(myMainList.end(), cracker);
   
   cout << endl << cracker->getDescricao() << " - US$ " << fixed << setprecision(2) << cracker->getValor() << endl;   
};

void insertFilledWafer() {
   FilledWafer * filledWafer;
   string buffer;
   string type;
   string filling;
   int    amount;
   double cost;

   cout << "------------------------------\nInsert Filled Wafer:\n------------------------------\n";
   cout << "Type ......: "; getline(cin, type); 
   cout << "Filling ...: "; getline(cin, filling);
   cout << "Amount ....: "; getline(cin, buffer); amount = stoi(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   filledWafer = new FilledWafer(type, filling, amount,cost);
   myMainList.insert(myMainList.end(), filledWafer);
   
   cout << endl << filledWafer->getDescricao() << " - US$ " << fixed << setprecision(2) << filledWafer->getValor() << endl;   
};

void insertHam() {
   Ham * ham;
   string buffer;
   float weight;
   double cost;

   cout << "------------------------------\nInsert Ham:\n------------------------------\n";
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   ham = new Ham(weight,cost);
   myMainList.insert(myMainList.end(), ham);
   
   cout << endl << ham->getDescricao() << " - US$ " << fixed << setprecision(2) << ham->getValor() << endl;   

}

void insertMortadella() {
   Mortadella * mortadella;
   string buffer;
   float weight;
   double cost;

   cout << "------------------------------\nInsert Ham:\n------------------------------\n";
   cout << "Weight ....: "; getline(cin, buffer); weight = stof(buffer);
   cout << "Cost ......: "; getline(cin, buffer); cost   = stod(buffer);
   cin.clear();
   
   mortadella = new Mortadella(weight,cost);
   myMainList.insert(myMainList.end(), mortadella);
   
   cout << endl << mortadella->getDescricao() << " - US$ " << fixed << setprecision(2) << mortadella->getValor() << endl;   

}

void verifyArguments(int argc, char* argv[]) {
   if(verboseMode) { 
      delete verboseMode;
   }; 

   if(shortMessageMode) { 
      delete shortMessageMode;
   };  

   verboseMode      = NULL;
   shortMessageMode = NULL;
   
   for(int count = 1; count < argc; count++) {
      if(string(argv[count]) == "-v") { 
         verboseMode = new MyBooleanClass(true); 
      };

      if(string(argv[count]) == "-s") { 
         shortMessageMode = new MyBooleanClass(true); 
      };
   };
   if(!verboseMode) { 
      verboseMode = new MyBooleanClass();     
   };  // default is false

   if(!shortMessageMode)               { 
      shortMessageMode = new MyBooleanClass();     
   };  // default is false
}

/* fim de arquivo */
