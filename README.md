## **Plan du Contenu :**

- **[Types de Données](#1-types-de-données)**
- **[Déclaration de Variables](#2-déclaration-de-variables)**
- **[Lecture et Écriture des données](#3-lecture-et-écriture-des-données)**
- **[Caractères d'Échappement](#4-caractères-déchappement)**
- **[Opérateurs](#5-opérateurs)**
- **[Structures Conditionnelles](#6-structures-conditionnelles)**
- **[Structures Répétitives](#7-structures-répétitives)**
- **[Contrôle des Boucles](#8-contrôle-des-boucles)**
- **[Tableaux](#9-tableaux)**
- **[Chaînes de Caractères](#10-chaînes-de-caractères)**
- **[Fonctions](#11-fonctions)**
- **[Pointeurs](#12-pointeurs)**
- **[Allocation Dynamique de la Mémoire](#13-allocation-dynamique-de-la-mémoire)**
- **[Structures](#14-structures)**
- **[Unions](#15-unions)**
- **[Énumérations](#16-énumérations)**
- **[Types Synonymes](#17-types-synonymes)**
- **[Champs de Bits](#18-champs-de-bits)**
- **[Taille d'une Structure](#19-taille-dune-structure)**
- **[Gestion des Fichiers](#20-gestion-des-fichiers)**
- **[Bibliothèques](#21-bibliothèques)**

---

<h3 align="center"><a href="https://github.com/mohamedtalhaouii/Programmation-Cpp" target="_blank">Lien de Programmation en Language C++</a></h3>

---

## **1. Types de Données**

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

## **2. Déclaration de Variables**
```c
Type Nom_var = valeur;
const Type Nom_const = valeur;
```
<hr>

## **3. Lecture et Écriture des données**

- **Affichage formaté avec `printf`**

```c
%[flags][largeur][.précision][modificateur]spécificateur
```

- **`flags`** (optionnel) : Contrôle l'alignement, le remplissage, etc.
  - `-` : Alignement à gauche.
  - `0` : Remplissage avec des zéros.
  - `+` : Affiche le signe (+ ou -) pour les nombres.
  - ` ` (espace) : Ajoute un espace pour les nombres positifs.
  - `#` : Format alternatif (ex: `0x` pour les hexadécimaux).

- **`largeur`** (optionnel) : Nombre minimal de caractères à afficher.
  - Exemple : `%5d` → Affiche un entier avec une largeur minimale de 5.

- **`.précision`** (optionnel) : Nombre de chiffres après la virgule pour les flottants, ou nombre maximal de caractères pour les chaînes.
  - Exemple : `%.2f` → Affiche un flottant avec 2 chiffres après la virgule.
  - Exemple : `%.5s` → Affiche uniquement les 5 premiers caractères d'une chaîne.

- **`modificateur`** (optionnel) : Modifie la taille du type de donnée.
  - `h` : `short` (ex: `%hd` pour un `short int`).
  - `l` : `long` (ex: `%ld` pour un `long int`).
  - `ll` : `long long` (ex: `%lld` pour un `long long int`).
  - `L` : `long double` (ex: `%Lf` pour un `long double`).

- **`spécificateur`** : Détermine le type de donnée.
  - `d` ou `i` : Entier signé.
  - `u` : Entier non signé.
  - `f` : Flottant.
  - `c` : Caractère.
  - `s` : Chaîne de caractères.
  - `p` : Pointeur.
  - `%` : Affiche le caractère `%`.
  

| **Caractère** | **Type de donnée**               | **Exemple**                              |
|---------------|----------------------------------|------------------------------------------|
| **%d**        | Entier signé (int)               | `printf("%d", 42);` → `42`               |
| **%f**        | Nombre à virgule flottante       | `printf("%.2f", 3.14);` → `3.14`         |
| **%c**        | Caractère (char)                 | `printf("%c", 'A');` → `A`               |
| **%s**        | Chaîne de caractères (char *)    | `printf("%s", "Hello");` → `Hello`       |
| **%p**        | Adresse mémoire (pointeur)       | `printf("%p", &x);` → `0x7ffdfb2c`       |
| **%%**        | Affiche le caractère `%`         | `printf("%%");` → `%`                    |


- **Lecture formatée avec `scanf`**

```c
%[*][largeur][modificateur]spécificateur
```

- **`*`** (optionnel) : Ignore la donnée lue (ne la stocke pas).
- **`largeur`** (optionnel) : Nombre maximal de caractères à lire.
- **`modificateur`** (optionnel) : Modifie la taille du type de donnée (comme pour `printf`).
- **`spécificateur`** : Détermine le type de donnée (comme pour `printf`).

| **Caractère** | **Type de donnée**               | **Exemple**                              |
|---------------|----------------------------------|------------------------------------------|
| **%d**        | Entier signé (int)               | `scanf("%d", &x);` (lit un entier)       |
| **%f**        | Nombre à virgule flottante       | `scanf("%f", &y);` (lit un float)        |
| **%c**        | Caractère (char)                 | `scanf("%c", &c);` (lit un caractère)    |
| **%s**        | Chaîne de caractères (char *)    | `scanf("%s", str);` (lit une chaîne)     |
| **%p**        | Adresse mémoire (pointeur)       | `scanf("%p", &ptr);` (lit un pointeur)   |


<hr>

## **4. Caractères d'Échappement**

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

## **5. Opérateurs**

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

## **6. Structures Conditionnelles**
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

## **7. Structures Répétitives**
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

## **8. Contrôle des Boucles**
```c
// break : interrompt immédiatement la boucle
break;

// continue : passe à l'itération suivante
continue;

// goto : transfère l'exécution vers une étiquette définie dans le programme
goto;
```
<hr>

## **9. Tableaux**
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


## **10. Chaînes de Caractères**

- **Fonctions de base (`<string.h>`)**

| **Fonction** | **Syntaxe**              | **Description**                          |
|--------------|--------------------------|------------------------------------------|
| **`strlen`** | `strlen(str);`           | Longueur de `str` (sans `\0`).           |
| **`strcpy`** | `strcpy(dest, src);`     | Copie `src` dans `dest`.                 |
| **`strncpy`**| `strncpy(dest, src, n);` | Copie `n` caractères de `src` dans `dest`.|
| **`strcat`** | `strcat(dest, src);`     | Ajoute `src` à la fin de `dest`.         |
| **`strncat`**| `strncat(dest, src, n);` | Ajoute `n` caractères de `src` à `dest`. |
| **`strcmp`** | `strcmp(str1, str2);`    | Compare `str1` et `str2` (0 si égales).  |
| **`strncmp`**| `strncmp(str1, str2, n);`| Compare `n` caractères de `str1` et `str2`. |



- **Fonctions de conversion (`<stdlib.h>`)**

| **Fonction** | **Syntaxe**              | **Description**                          |
|--------------|--------------------------|------------------------------------------|
| **`atoi`**   | `atoi(str);`             | Convertit `str` en entier (`int`).       |
| **`atol`**   | `atol(str);`             | Convertit `str` en entier long (`long`). |
| **`atof`**   | `atof(str);`             | Convertit `str` en flottant (`double`).  |



- **Fonctions de manipulation de caractères (`<ctype.h>`)**

| **Fonction** | **Syntaxe**              | **Description**                          |
|--------------|--------------------------|------------------------------------------|
| **`isalpha`**| `isalpha(c);`            | Vérifie si `c` est une lettre (A-Z, a-z).|
| **`isdigit`**| `isdigit(c);`            | Vérifie si `c` est un chiffre (0-9).     |
| **`isalnum`**| `isalnum(c);`            | Vérifie si `c` est une lettre ou un chiffre. |
| **`islower`**| `islower(c);`            | Vérifie si `c` est une minuscule.        |
| **`isupper`**| `isupper(c);`            | Vérifie si `c` est une majuscule.        |
| **`tolower`**| `tolower(c);`            | Convertit `c` en minuscule.              |
| **`toupper`**| `toupper(c);`            | Convertit `c` en majuscule.              |



- **Fonctions d'entrée/sortie (`<stdio.h>`)**

| **Fonction** | **Syntaxe**              | **Description**                          |
|--------------|--------------------------|------------------------------------------|
| **`fgets`**  | `fgets(str, n, stream);` | Lit une ligne de `stream` dans `str` (max `n` caractères). |
| **`fputs`**  | `fputs(str, stream);`    | Écrit `str` dans `stream`.               |

<hr>

## **11. Fonctions**
```c
Type_retour nom_fonction(Type param1, Type param2) {
    // Code
    return valeur;
}
```
<hr>

## **12. Pointeurs**

- **Déclaration d'un pointeur**
```c
type *ptr;
```

- **Initialisation d'un pointeur**
```c
ptr = &variable;
```


- **Accès à la valeur pointée**
```c
*ptr;
```

- **Pointeur et tableaux**
```c
ptr = tableau;
ptr[i];   // ou *(ptr + i)
```

- **Pointeur de pointeur**
```c
type **ptr;
```

- **Pointeur et fonctions**
```c
void f(type *ptr);
return ptr;
```

<hr>

## **13. Allocation Dynamique de la Mémoire**
```c
// Alloue de la mémoire non initialisée
Type *pointeur = malloc(taille * sizeof(Type));

// Alloue et initialise la mémoire à 0
Type *pointeur = calloc(nbr_elements, sizeof(Type));

// Redimensionne une zone mémoire allouée
pointeur = realloc(pointeur, nouvelle_taille * sizeof(Type));

// Libère la mémoire allouée
free(pointeur);
```
<hr>

## **14. Structures**
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

## **15. Unions**
   ```c
   union nom_union {
       type1 champ1;
       type2 champ2;
   } variables;
   ```

- **Tableau Comparatif** entre les **unions** et les **structures** en C :

| **Caractéristique**         | **Structure (`struct`)**                          | **Union (`union`)**                        |
|-----------------------------|--------------------------------------------------|--------------------------------------------|
| **Déclaration**             | `struct nom { type1 champ1; type2 champ2; ... };`| `union nom { type1 champ1; type2 champ2; ... };` |
| **Taille en mémoire**       | Somme des tailles de tous les champs.            | Taille du plus grand champ.                |
| **Utilisation de la mémoire**| Chaque champ a son propre espace mémoire.        | Tous les champs partagent le même espace mémoire. |
| **Accès aux champs**        | Tous les champs sont accessibles simultanément.  | Un seul champ peut être utilisé à la fois. |
| **Initialisation**          | Tous les champs peuvent être initialisés.        | Seul le premier champ peut être initialisé.|
| **Utilisation typique**     | Représenter un objet avec plusieurs attributs.    | Représenter un type pouvant stocker un seul type de données à la fois. |


<hr>

## **16. Énumérations**
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

## **17. Types Synonymes**
   ```c
   typedef type_existant nouveau_nom;
   ```

  - Exemples :
    ```c
    typedef int Entier;       // Entier est un synonyme de int
    typedef float Reel;       // Reel est un synonyme de float
    typedef char Caractere;   // Caractere est un synonyme de char
    ```

<hr>

## **18. Champs de Bits**
   ```c
   struct {
       unsigned int champ1 : nombre_de_bits;
       unsigned int champ2 : nombre_de_bits;
   } variables;
   ```
<hr>

## **19. Taille d'une Structure**
   ```c
   struct nom_structure {
        type1 champ1;
        type2 champ2;
    } variables;

    printf("Taille de la structure : %zu octets\n", sizeof(variable));
   ```
<hr>

## **20. Gestion des Fichiers**
La gestion des fichiers permet de lire, écrire, créer ou modifier des fichiers sur le disque en utilisant les fonctions de la bibliothèque standard `<stdio.h>`.

- **Ouverture d’un fichier**
```c
FILE* fichier = fopen("nom_fichier.txt", "mode");
```

> **Modes d’ouverture :**
> | Mode  | Description                        |
> |-------|------------------------------------|
> | `"r"` | Lecture (fichier existant)         |
> | `"w"` | Écriture (crée ou écrase)          |
> | `"a"` | Ajout (écriture en fin de fichier) |
> | `"r+"`| Lecture + écriture                 |
> | `"w+"`| Lecture + écriture (efface)        |
> | `"a+"`| Lecture + ajout                    |


- **Écriture :**
```c
fprintf(fichier, "Texte %d\n", valeur);
fputc('A', fichier);
fputs("Chaîne", fichier);
```

- **Lecture :**
```c
fscanf(fichier, "%d", &valeur);
fgetc(fichier);
fgets(chaine, taille, fichier);
```


- **Fermeture d’un fichier**
```c
fclose(fichier);
```

- **Vérification d’ouverture**
> Toujours vérifier si le fichier a été ouvert correctement
```c
if (fichier == NULL) {
    printf("Erreur lors de l’ouverture du fichier.\n");
}
```

- **Autres fonctions utiles**

| Fonction        | Utilité                                |
|----------------|-----------------------------------------|
| `feof(f)`       | Teste la fin de fichier                 |
| `ferror(f)`     | Vérifie les erreurs                     |
| `rewind(f)`     | Remet le curseur au début               |
| `fflush(f)`     | Vide le tampon du fichier               |
| `remove("nom")` | Supprime un fichier                     |
| `rename(old,new)`| Renomme un fichier                     |




<hr>

## **21. Bibliothèques**
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
