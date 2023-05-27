/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#ifndef A02EX00_H
   #define A02EX00_H

using namespace std;
   
class Information
   {
   private: 
      static const string institution;
      static const string dept;
      static const string author;
      static const string date;
      static const string decoration;
            
   public:
      static const string getInstitution();
      static const string getDept();
      static const string getAuthor();
      static const string getDate();
      
      static const void wellcome(void);
      static const void wellcome(string message);
      static const void wellcome(string message, bool shortMessage);
      static const void bye(void);
      static const void bye(bool shortMessage);
   };

#endif
   
/* fim de arquivo */