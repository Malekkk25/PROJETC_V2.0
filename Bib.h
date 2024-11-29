#ifndef BB_H_INCLUDED
#define BB_H_INCLUDED



struct resultat
{
 int code;
 int ht; // nombre d'heure maximum

};
typedef struct resultat RESULTAT;



struct date
{
 int jour;
 int mois;
 int annee;
};
typedef struct date DATE;
struct personne
{
 int code;
 char nom[20] ;
 char prenom[20] ;
 char difficulte[20] ;
 DATE inscription;
 int duree_sejour;// A calculer
};
typedef struct personne PERSONNE;
struct employee
{
 int code;
 char nom[50] ;
 char prenom[50];
 int ht; //Heure de travail
 float salaire;
 DATE db;// Date debut de travail
};
typedef struct employee EMPLOYEE;
struct service
{
 int code;
 char libelle[50] ;
 int nb_employees;
 EMPLOYEE* employees;
 int nb_personnes;
 PERSONNE* personnes;
 float budget;
 int nb_max;//Nombre maximum de persones
 float pourcentage_personne;//A calculer
};
typedef struct service SERVICE;
struct centre
{
 char libelle[50] ;
 int nb_service;
 SERVICE* services;
 int nb_chambre;
 float budget_totale;//A calculer
};
typedef struct centre CENTRE;

int Duree_Sejour(DATE d);
void Remplissage(CENTRE *C, float cout);
void Affichage(CENTRE C);
void Resultat(CENTRE C , RESULTAT **R);
void EmployeeMeilleurRendementCentre(CENTRE C);
void EmployeeMeilleurRendementService(SERVICE *S);
void ServicePlusDemandee(CENTRE C);
void ServicePlusCouteux(CENTRE C);
void PersonnePlusAncienneService(SERVICE *S);
int menu();
void creerfichier(FILE**);
void remplirfichier(FILE*,float,CENTRE*);
 void afficherfichier(FILE *,CENTRE);
int estBissextile(int annee);
int estDateValide(int jour, int mois, int annee);
DATE SaisirDate();
void AllocationService(CENTRE * C);
void SaisirService(CENTRE* C , int i);
void SaisirCentre(CENTRE *C);
void AllocationPersonne(CENTRE *C ,int s);
void SaisirPersonne(CENTRE *C , int s ,int p);
void AllocationEmployee(CENTRE * C , int s);
void SaisirEmploye(CENTRE * C ,int s, int e , float cout);
 void SommeBudget(CENTRE *C);


#endif // BB_H_INCLUDED
