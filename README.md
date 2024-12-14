## **Résumé Complet du Langage C - Études**

1. [Types de Données](#1-types-de-données)
2. [Déclaration de Variables](#2-déclaration-de-variables)
3. [Entrée/Sortie](#3-entréesortie)
4. [Caractères d'Échappement](#4-caractères-déchappement)
5. [Opérateurs](#5-opérateurs)
6. [Structures Conditionnelles](#6-structures-conditionnelles)
7. [Structures Répétitives](#7-structures-répétitives)
8. [Contrôle des Boucles](#8-contrôle-des-boucles)
9. [Tableaux](#9-tableaux)
10. [Chaînes de Caractères](#10-chaînes-de-caractères)
11. [Fonctions](#11-fonctions)
12. [Pointeurs](#12-pointeurs)
13. [Allocation Dynamique de la Mémoire](#13-allocation-dynamique-de-la-mémoire)
14. [Structures](#14-structures)
15. [Bibliothèques](#15-bibliothèques)

<hr>

### **1. Types de Données**

| **Type**            | **Taille (en octets)** | **Description**                                                                 |
|----------------------|-----------------------|---------------------------------------------------------------------------------|
| `int`               | 4                     | Entier standard, généralement signé (entre -2³¹ et 2³¹-1 sur 32 bits).         |
| `long`              | 8 (64 bits) ou 4 (32 bits) | Entier long, adapté pour des valeurs plus grandes.                            |
| `float`             | 4                     | Nombre réel en précision simple (32 bits, ~7 chiffres significatifs).          |
| `double`            | 8                     | Nombre réel en double précision (64 bits, ~15 chiffres significatifs).         |
| `long double`       | 8, 10 ou 16           | Nombre réel avec une précision étendue, dépend de l'implémentation.            |
| `char`              | 1                     | Caractère ou entier de petite taille (valeurs entre -128 et 127 ou 0 à 255).    |
| `bool`              | 1                     | Type booléen (`true` ou `false`), défini avec `<stdbool.h>`.                    |


- **Déterminer l'Intervalle des Types de Données :**
    - **Pour les types signés :**
       - L'intervalle est de $`-2^{n-1}`$ à $`2^{n-1} - 1`$, où $`n`$ est le nombre de bits utilisés pour le type.
    
    - **Pour les types non signés :**
       - L'intervalle est de $`0`$ à $`2^n - 1`$, où $`n`$ est le nombre de bits utilisés pour le type.

<hr>

### **2. Déclaration de Variables**
```c
Type Nom_var = valeur;
const Type Nom_const = valeur;
```
<hr>

### **3. Entrée/Sortie**
```c
printf("format", variables); // Écriture sur la sortie standard
scanf("format", &variables); // Lecture des variables
```
<hr>

### **4. Caractères d'Échappement**
- **`\n`** : Retour à la ligne
- **`\t`** : Tabulation horizontale
- **`\\"`, `\'`, `\\`, `\%`** : Affichage de guillemets, apostrophes ou antislash
<hr>

### **5. Opérateurs**
- **Arithmétiques** : `+`, `-`, `*`, `/`, `%`
- **Affectation** : `=`, `+=`, `-=`, `*=`, `/=`, `%=`
- **Incrémentation/Decrémentation** : `++`, `--`
- **Comparaison** : `==`, `<`, `>`, `<=`, `>=`, `!=`
- **Logiques** : `&&`, `||`, `!`
<hr>

### **6. Structures Conditionnelles**
```c
// Condition simple
if (condition) {
    instructions;
}

// Alternative
if (condition) {
    instructions;
} else {
    instructions;
}

// Imbriquée
if (condition1) {
    instructions;
} else if (condition2) {
    instructions;
} else {
    instructions;
}

// Choix multiple avec switch
switch(expression) {
    case valeur1:
        instructions;
        break;
    case valeur2:
        instructions;
        break;
    default:
        instructions;
        break;
}
```
<hr>

### **7. Structures Répétitives**
```c
// Boucle for
for (initialisation; condition; incrément) {
    instructions;
}

// Boucle while
while (condition) {
    instructions;
}

// Boucle do...while
do {
    instructions;
} while (condition);
```
<hr>

### **8. Contrôle des Boucles**
```c
// break : interrompt immédiatement la boucle
break;

// continue : passe à l'itération suivante
continue;

// goto : transfère l'exécution vers une étiquette définie dans le programme
goto;
```
<hr>

### **9. Tableaux**
- **Déclaration d'une Tableau :**
```c
// Tableau à une dimension
Type Nom_Tab[taille];

// Tableau à deux dimensions
Type Nom_Tab[nbr_lignes][nbr_colonnes];
```
- **Taille d'un Tableau :**
```c
// Tableau à une dimension
int taille = sizeof(Nom_Tab) / sizeof(Nom_Tab[0]);

// Tableau à deux dimensions
int nbr_lignes = sizeof(Nom_Tab) / sizeof(Nom_Tab[0]);
int nbr_colonnes = sizeof(Nom_Tab[0]) / sizeof(Nom_Tab[0][0]); 
```
<hr>


### **10. Chaînes de Caractères**
En C, les chaînes de caractères sont représentées par des **tableaux de caractères** et se terminent par un caractère nul (`'\0'`).

- **Fonctions de `<string.h>`** :
  - `strlen` : Longueur d'une chaîne.
  - `strcpy`, `strncpy` : Copie de chaînes.
  - `strcat`, `strncat` : Concaténation de chaînes.
  - `strcmp`, `strncmp` : Comparaison de chaînes.
  - `strchr` : Trouve une occurrence d'un caractère.
  - `strstr` : Trouve une sous-chaîne.
<hr>

### **11. Fonctions**
```c
Type_retour Nom_fonction(arguments) {
    instructions;
    return résultat;
}
```
<hr>

### **12. Pointeurs**
```c
// Déclaration d'un pointeur
Type *pointeur = &variable;

// Opérateurs des pointeurs
& // pour obtenir l'adresse
* // pour accéder au contenu de l'adresse
```
<hr>

### **13. Allocation Dynamique de la Mémoire**
```c
// Allocation avec malloc
Type *pointeur = malloc(taille * sizeof(Type));

// Allocation avec calloc
Type *pointeur = calloc(nbr_elements, sizeof(Type));

// Redimensionnement avec realloc
pointeur = realloc(pointeur, nouvelle_taille * sizeof(Type));

// Libération de la mémoire
free(pointeur);
```
<hr>

### **14. Structures**
```c
struct Nom_structure {
    Type champ1;
    Type champ2;
    // ...
} variables;
```
<hr>

### **15. Bibliothèques**
Les bibliothèques standard du C fournissent des fonctions pour de nombreuses tâches courantes.

- **`<stdio.h>`** : Entrée/sortie standard.
  - Fonctions : `printf`, `scanf`, `fopen`, `fclose`, etc.

- **`<stdlib.h>`** : Gestion de la mémoire, nombres aléatoires et conversions.
  - Fonctions : `malloc`, `free`, `rand`, `exit`, etc.

- **`<string.h>`** : Manipulation des chaînes de caractères.
  - Fonctions : `strlen`, `strcpy`, `strcat`, `strcmp`, etc.

- **`<math.h>`** : Opérations mathématiques avancées.
  - Fonctions : `pow`, `sqrt`, `sin`, `cos`, `log`, etc.

- **`<ctype.h>`** : Classification et manipulation des caractères.
  - Fonctions : `isalpha`, `isdigit`, `toupper`, `tolower`, etc.

- **`<time.h>`** : Gestion du temps et des dates.
  - Fonctions : `time`, `clock`, `difftime`, `strftime`, etc.

- **`<stdbool.h>`** : Type booléen (`true`, `false`).

- **`<limits.h>`** et **`<float.h>`** : Définit les limites des types numériques.

<hr>

<h3 align="center"> 🧑🏻‍💻 | Made By : <a href="https://github.com/mohamedtalhaouii" target="_blank">Mohamed Talhaoui</a></h3>
