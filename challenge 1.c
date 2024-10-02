#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXCONTACTS  100

struct Contact {
    char nom[20];
    char numeroDeTelephone[20];
    char adresseEmail[30];
};

struct Contact contacts[MAXCONTACTS];
int contactCounter = 0;

void afficherTousLesContacts() {
    if (contactCounter == 0) {
         printf(" Aucun Contact Trouver, Veuillez En Ajouter Un: \n");
        return;
    }
    printf("Liste des Contacts:\n");
    printf(" entrer votre Nom \n");
    printf("entrer votre Numero De Telephone \n");
    printf(" entrer votre Adresse Email\n");

    for (int i = 0; i < contactCounter; i++) {
        printf(" %3d , %-20s , %-20s , %-20s \n", i, contacts[i].nom, contacts[i].numeroDeTelephone, contacts[i].adresseEmail);

    }
}

void ajouterUnContact() {
    if (contactCounter >= MAXCONTACTS) {

        printf(" La liste Des Contacts Est Pleine! \n");

        return;
    }
    struct Contact newContact;

    printf(" Ajouter Un Contact \n");
    printf("ID : %d\n", contactCounter);
    printf("Nom : ");
    scanf("%s", newContact.nom);
    printf("Numero De Telephone : ");
    scanf("%s", newContact.numeroDeTelephone);
    printf("Adresse Email : ");
    scanf("%s", newContact.adresseEmail);
    contacts[contactCounter] = newContact;
    contactCounter++;
    printf(" Contact Ajoute Avec Succes :\n");

}

void modifierUnContact() {
    char nomrecherche[20];
    printf(" Modifier Un Contact :  \n");
    printf("Nom du Contact : ");
    scanf("%s", nomrecherche);
    printf("en attendant...\n");
    for (int i = 0; i < contactCounter; i++) {
        if (strcmp(contacts[i].nom, nomrecherche) == 0) {
            printf("Modifier Nom (actuel : %s) : ", contacts[i].nom);
            scanf("%s", contacts[i].nom);
            printf("Modifier Numero De Telephone (actuel : %s) : ", contacts[i].numeroDeTelephone);
            scanf("%s", contacts[i].numeroDeTelephone);
            printf("Modifier Adresse Email (actuel : %s) : ", contacts[i].adresseEmail);
            scanf("%s", contacts[i].adresseEmail);
            printf(" Contact Modifie: \n");

            return;
        }
    }
    printf(" Contact non trouvée :\n");
}

void supprimerUnContact() {
    char nomrecherche[20];

    printf(" Supprimer Un Contact: \n");
    printf("Nom du Contact : ");
    scanf("%s", nomrecherche);
    printf("en attendant...\n");
    for (int i = 0; i < contactCounter; i++) {
        if (strcmp(contacts[i].nom, nomrecherche) == 0) {

            printf(" Contact Trouve: \n");

            for (int b = i; b < contactCounter - 1; b++) {
                contacts[b] = contacts[b + 1];
            }
            contactCounter--;

            printf(" Suppression Reussie \n");

            return;
        }
    }
    printf(" Contact en trouvé \n");

}

void rechercherUnContact() {

    char nomrecherche[20];

    printf(" Rechercher Un Contact :\n");
   ;
    printf("Nom Du Contact : ");
    scanf("%s", nomrecherche);
    printf("en attendant...\n");
    for (int i = 0; i < contactCounter; i++) {
        if (strcmp(contacts[i].nom, nomrecherche) == 0) {

            printf(" Contact Trouvee: \n");

            printf("Liste des Contacts:\n");
    printf(" entrer votre Nom \n");
    printf("entrer votre Numero De Telephone \n");
    printf(" entrer votre Adresse Email\n");



            printf(" %3d , %-20s , %-20s , %-20s \n", i, contacts[i].nom, contacts[i].numeroDeTelephone, contacts[i].adresseEmail);

        }
    }

    printf(" Contact en trouvé. \n");

}

int triLesContacts(){

    for (int i = 0; i < contactCounter - 1; i++) {
        for (int b = 0; b < contactCounter - 1 - i; b++) {
            if (strcmp(contacts[b].nom, contacts[b + 1].nom) > 0) {
                struct Contact temp = contacts[b];
                contacts[b] = contacts[b + 1];
                contacts[b + 1] = temp;
            }
        }
    }

    printf(" Les Contacts Sont Tri Avec Succes \n");
}
int terminal() {
    system("title Systeme De Gestion De Contacts");

    int choice;
    while (1) {

        printf("Systeme De Gestion De Contacts:\n");

        printf(" 1. Afficher Tous Les Contacts:\n");
        printf(" 2. Ajouter Un Contact:\n");
        printf(" 3. Modifier Un Contact:\n");
        printf(" 4. Supprimer Un Contact:\n");
        printf(" 5. Rechercher Un Contact:\n");
        printf(" 7. Quitter:\n");
        printf("entrer le numero pour choice:");
        scanf("%i", &choice);

        switch (choice) {
            case 1:
                afficherTousLesContacts();
                break;
            case 2:
                ajouterUnContact();
                break;
            case 3:
                modifierUnContact();
                break;
            case 4:
                supprimerUnContact();
                break;
            case 5:
                rechercherUnContact();
                break;
            case 6:
                triLesContacts();
                break;
            case 7:
                printf("Fermeture du programme...\n");
                printf(" A la Prochaine ! \n");

                return 0;
            default:

                printf(" choix invalide, veuillez réessayer. \n");

        }
    }
}
int main() {
    terminal();
    return 0;

}
