# Projet Banque en C++

## Description

Ce projet consiste à développer une application de gestion bancaire en utilisant le langage C++ et les principes de la programmation orientée objet (POO).

L'application est organisée autour de plusieurs classes permettant de représenter les comptes bancaires, les transactions et la gestion des comptes.

## Structure du projet

```text
projet-banque/
│
├── .gitignore
├── README.md
│
├── Compte.h
├── Compte.cpp
│
├── Transaction.h
├── Transaction.cpp
│
├── Banque.h
├── banque.cpp
│
└── main.cpp
```

## Classes du projet

### 1. Classe Compte

Cette classe représente un compte bancaire.

**Attributs privés :**
- `numero` : numéro du compte.
- `titulaire` : nom du titulaire.
- `solde` : solde disponible.

**Méthodes publiques :**
- `Compte()` : constructeur avec un dépôt initial facultatif.
- `getNumero()` : retourne le numéro du compte.
- `getTitulaire()` : retourne le nom du titulaire.
- `getSolde()` : retourne le solde actuel.
- `deposer(double montant)` : effectue un dépôt.
- `retirer(double montant)` : effectue un retrait.

**Règles de gestion :**
- Un dépôt doit être strictement positif.
- Un retrait doit être strictement positif.
- Un retrait ne peut pas dépasser le solde disponible.
- Les méthodes `deposer()` et `retirer()` retournent `true` en cas de réussite et `false` en cas d'échec.

### 2. Classe Transaction

Cette classe représente les transactions bancaires.

Les types de transactions prévus sont :
- Dépôt.
- Retrait.
- Virement entrant.
- Virement sortant.

### 3. Classe Banque

Cette classe représente la gestion des comptes bancaires et utilise un conteneur `std::vector<Compte>` pour stocker les comptes.

## Compilation

Pour compiler la partie actuellement développée autour de la classe `Compte` :

```bash
g++ -Wall -Wextra -o banque main.cpp Compte.cpp
```

Pour exécuter le programme :

```bash
./banque
```

## Travail réalisé

### Séance 3 — Implémentation et tests de la classe Compte

- Création de la structure du projet.
- Déclaration des attributs privés et des méthodes publiques.
- Implémentation du constructeur avec une liste d'initialisation.
- Implémentation des getters.
- Implémentation des méthodes `deposer()` et `retirer()`.
- Réalisation de tests pour vérifier les opérations bancaires.
- Vérification du solde après chaque opération.

## Technologies utilisées

- C++
- Programmation orientée objet (POO)
- Git et GitHub