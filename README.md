## **Résumé Complet du Langage C - Études**

1. [Types de Données](#1-types-de-données)
2. [Déclaration de Variables](#2-déclaration-de-variables)
3. [Lecture et écriture des données](#3-lecture-et-écriture-des-données)
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
15. [Unions](#15-unions)
16. [Énumérations](#16-énumérations)
17. [Types synonymes](#17-types-synonymes)
18. [Champs de bits](#18-champs-de-bits)
19. [Taille d'une structure](#19-taille-dune-structure)
20. [Bibliothèques](#20-bibliothèques)

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

### **3. Lecture et écriture des données**

- **Affichage formaté avec `printf`**

| **Caractère** | **Type de donnée**               | **Exemple**                              |
|---------------|----------------------------------|------------------------------------------|
| **%d**        | Entier signé (int)               | `printf("%d", 42);` → `42`               |
| **%f**        | Nombre à virgule flottante       | `printf("%.2f", 3.14);` → `3.14`         |
| **%c**        | Caractère (char)                 | `printf("%c", 'A');` → `A`               |
| **%s**        | Chaîne de caractères (char *)    | `printf("%s", "Hello");` → `Hello`       |
| **%p**        | Adresse mémoire (pointeur)       | `printf("%p", &x);` → `0x7ffdfb2c`       |
| **%%**        | Affiche le caractère `%`         | `printf("%%");` → `%`                    |


- **Lecture formatée avec `scanf`**

| **Caractère** | **Type de donnée**               | **Exemple**                              |
|---------------|----------------------------------|------------------------------------------|
| **%d**        | Entier signé (int)               | `scanf("%d", &x);` (lit un entier)       |
| **%f**        | Nombre à virgule flottante       | `scanf("%f", &y);` (lit un float)        |
| **%c**        | Caractère (char)                 | `scanf("%c", &c);` (lit un caractère)    |
| **%s**        | Chaîne de caractères (char *)    | `scanf("%s", str);` (lit une chaîne)     |
| **%p**        | Adresse mémoire (pointeur)       | `scanf("%p", &ptr);` (lit un pointeur)   |

<hr>

### **4. Caractères d'Échappement**

| **Séquence** | **Description**                                   | **Valeur ASCII** |
|--------------|---------------------------------------------------|------------------|
| `\0`         | Caractère nul (fin de chaîne)                     | 0                |
| `\a`         | Alarme (bip sonore)                               | 7                |
| `\b`         | Backspace (retour arrière)                        | 8                |
| `\t`         | Tabulation horizontale                            | 9                |
| `\n`         | Nouvelle ligne (line feed)                        | 10               |
| `\v`         | Tabulation verticale                              | 11               |
| `\f`         | Saut de page (form feed)                          | 12               |
| `\r`         | Retour chariot (carriage return)                  | 13               |
| `\"`         | Guillemet double                                  | 34               |
| `\'`         | Apostrophe                                        | 39               |
| `\\`         | Barre oblique inversée                            | 92               |
| `\?`         | Point d'interrogation (utilisé dans les trigraphes)| 63               |
| `\xhh`       | Caractère représenté par sa valeur hexadécimale   | Dépend de `hh`   |
| `\ooo`       | Caractère représenté par sa valeur octale         | Dépend de `ooo`  |

<hr>

### **5. Opérateurs**

- **Opérateurs Arithmétiques**

| **Opérateur** | **Description**                     | **Exemple**         |
|---------------|-------------------------------------|---------------------|
| `+`           | Addition                            | `a + b`             |
| `-`           | Soustraction                        | `a - b`             |
| `*`           | Multiplication                      | `a * b`             |
| `/`           | Division                            | `a / b`             |
| `%`           | Modulo (reste de la division)       | `a % b`             |
| `++`          | Incrémentation (ajoute 1)           | `a++` ou `++a`      |
| `--`          | Décrémentation (soustrait 1)        | `a--` ou `--a`      |


- **Opérateurs de Comparaison (Relationnels)**

| **Opérateur** | **Description**                     | **Exemple**         |
|---------------|-------------------------------------|---------------------|
| `==`          | Égal à                              | `a == b`            |
| `!=`          | Différent de                        | `a != b`            |
| `>`           | Supérieur à                         | `a > b`             |
| `<`           | Inférieur à                         | `a < b`             |
| `>=`          | Supérieur ou égal à                 | `a >= b`            |
| `<=`          | Inférieur ou égal à                 | `a <= b`            |


- **Opérateurs Logiques**

| **Opérateur** | **Description**                     | **Exemple**         |
|---------------|-------------------------------------|---------------------|
| `&&`          | ET logique                          | `a && b`            |
| `\|\|`        | OU logique                          | `a \|\| b`          |
| `!`           | NON logique (inverse)               | `!a`                |


- **Opérateurs d'Affectation**

| **Opérateur** | **Description**                     | **Exemple**         |
|---------------|-------------------------------------|---------------------|
| `=`           | Affectation simple                  | `a = b`             |
| `+=`          | Ajoute et affecte                   | `a += b` (équivaut à `a = a + b`) |
| `-=`          | Soustrait et affecte                | `a -= b` (équivaut à `a = a - b`) |
| `*=`          | Multiplie et affecte                | `a *= b` (équivaut à `a = a * b`) |
| `/=`          | Divise et affecte                   | `a /= b` (équivaut à `a = a / b`) |
| `%=`          | Modulo et affecte                   | `a %= b` (équivaut à `a = a % b`) |


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
   struct nom_structure {
       type1 champ1;
       type2 champ2;
   } variables;
   ```

   - Accès aux champs :
     ```c
     variable.champ;  // Accès direct
     pointeur->champ; // Accès via pointeur
     ```

   - Structure avec pointeur sur elle-même (liste chaînée) :
     ```c
     struct noeud {
         int val;
         struct noeud *suiv;
     };
     ```
<hr>

### **15. Unions**
   ```c
   union nom_union {
       type1 champ1;
       type2 champ2;
   } variables;
   ```

<hr>

### **16. Énumérations**
   ```c
   enum nom_enum {
       CONST1,
       CONST2,
       ...
   } variables;
   ```

   - Énumération avec valeurs personnalisées :
     ```c
     enum nom_enum {
         CONST1 = valeur1,
         CONST2 = valeur2,
         ...
     } variables;
     ```
<hr>

### **17. Types synonymes**
   ```c
   typedef type_existant nouveau_nom;
   ```

   - Exemple avec structure :
     ```c
     typedef struct {
         int jour;
         int mois;
         int annee;
     } date;
     ```

<hr>

### **18. Champs de bits**
   ```c
   struct {
       unsigned int champ1 : nombre_de_bits;
       unsigned int champ2 : nombre_de_bits;
   } variables;
   ```
<hr>

### **19. Taille d'une structure**
   ```c
   struct nom_structure {
        type1 champ1;
        type2 champ2;
    } variables;

    printf("Taille de la structure : %zu octets\n", sizeof(variable));
   ```

<hr>

### **20. Bibliothèques**
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
