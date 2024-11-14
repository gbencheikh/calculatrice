# Calculatrice

# Calculatrice C++

Une calculatrice simple en C++ avec les opérations de base : addition, soustraction, multiplication et division. Ce projet utilise Google Test pour les tests unitaires.

## Description

Ce projet est une implémentation d'une calculatrice en C++ qui supporte les opérations de base suivantes :
- Addition
- Soustraction
- Multiplication
- Division

Des tests unitaires sont fournis pour valider le bon fonctionnement des opérations.

## Fonctionnalités

- Effectue des calculs de base : addition, soustraction, multiplication, division.
- Utilisation de Google Test pour les tests unitaires.

## Prérequis

Avant de commencer, vous devez avoir installé :
- **C++** (version C++11 ou supérieure)
- **CMake** (pour la gestion de projet)
- **Google Test** (pour les tests unitaires)

## Installation

### Cloner le dépôt
Clonez ce projet sur votre machine locale en utilisant git :

```
git clone https://github.com/gbencheikh/calculatrice.git
cd calculatrice
```

### Compilation
Installer Google Test (si ce n'est pas déjà fait) : Vous pouvez suivre les instructions sur Google Test GitHub pour installer Google Test.

`sudo apt install libgtest-dev`

### Exécution des tests
Les tests unitaires sont écrits avec Google Test et peuvent être exécutés comme suit :

```
g++ calculatrice.cpp main.cpp -o calculatrice.exe -lgtest -lgtest_main -pthread
./calculatrice.exe
```

Les tests vérifieront le bon fonctionnement des opérations de la calculatrice.

# Tests Unitaires
Les tests unitaires sont des petites parties de code qui permettent de vérifier que les différentes fonctions de notre programme fonctionnent correctement. Chaque test se concentre sur une fonction spécifique et vérifie que celle-ci donne les résultats attendus pour des données d'entrée précises. Par exemple, si nous avons une fonction d'addition, un test unitaire vérifiera que cette fonction retourne bien la somme des nombres que nous lui passons en paramètres.

## Exemple d'un test unitaire pour une fonction d'adition
Supposons que nous avons une classe Calculatrice avec une fonction addition qui additionne deux nombres. Voici comment on pourrait écrire un test unitaire pour vérifier cette fonction :

```
// Rappel : on utilise Google Test pour les tests
TEST(CalculatriceTests, TestAddition) {
    EXPECT_DOUBLE_EQ(Calculatrice::addition(2.0, 3.0), 5.0); // Vérifie que 2 + 3 = 5
}
```
Dans cet exemple :

- **TEST** est la commande qui crée un test unitaire.
- **CalculatriceTests** est le nom de notre groupe de tests (pour organiser plusieurs tests similaires).
- **TestAddition** est le nom de ce test spécifique.
- **EXPECT_DOUBLE_EQ** est utilisée dans les tests unitaires pour comparer deux valeurs en vérifiant leur égalité avec une certaine précision. Dans cet exemple, elle vérifie que le résultat de Calculatrice::addition(2.0, 3.0) est égal au résultat attendu 5.0.
