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

<hr>

### **1. Types de Données**
- **Entiers** : `int`, `long`
- **Réels** : `float`, `double`, `long double`
- **Caractères** : `char`, chaîne de caractères
- **Booléens** : `bool`
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
- **`\\"`, `\'`, `\\`** : Affichage de guillemets, apostrophes ou antislash
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
```
<hr>

### **9. Tableaux**
```c
// Tableau à une dimension
Type Nom_Tab[size];

// Tableau à deux dimensions
Type Nom_Tab[nbr_lignes][nbr_colonnes];
```
<hr>

### **10. Chaînes de Caractères**
- Traitées comme des tableaux de `char`, terminées par `\0`.
- **Fonctions courantes** : `strlen()`, `strcpy()`, `strcat()`, `strcmp()`

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
Type *pointeur = (Type *) malloc(taille * sizeof(Type));

// Allocation avec calloc
Type *pointeur = (Type *) calloc(nbr_elements, sizeof(Type));

// Redimensionnement avec realloc
pointeur = (Type *) realloc(pointeur, nouvelle_taille * sizeof(Type));

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

<h3 align="center"> 🧑🏻‍💻 | Made By : <a href="https://github.com/mohamedtalhaouii" target="_blank">Mohamed Talhaoui</a></h3>
