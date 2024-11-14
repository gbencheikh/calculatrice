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

g++ calculatrice.cpp main.cpp -o calculatrice.exe -lgtest -lgtest_main -pthread
./calculatrice.exe

Les tests vérifieront le bon fonctionnement des opérations de la calculatrice.

# Utilisation
Dans le fichier main.cpp, vous pouvez voir un exemple d'utilisation de la calculatrice. Voici comment l'utiliser pour effectuer des opérations simples :

```
#include <iostream>
#include "calculatrice.h"

int main() {
    double result;

    result = Calculatrice::addition(0.5, 0.1);
    std::cout << "Le résultat de l'addition est : " << result << std::endl;

    result = Calculatrice::soustraction(2.0, 1.0);
    std::cout << "Le résultat de la soustraction est : " << result << std::endl;

    result = Calculatrice::multiplication(2.0, 3.0);
    std::cout << "Le résultat de la multiplication est : " << result << std::endl;

    result = Calculatrice::division(6.0, 2.0);
    std::cout << "Le résultat de la division est : " << result << std::endl;

    return 0;
}
```
