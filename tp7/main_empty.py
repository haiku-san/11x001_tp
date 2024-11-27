import random

from utils import exercice, formatter_sudoku, generer_personnes, generer_resultats, obtenir_sudoku_valide


#
# EXERCICE 1
#

@exercice
def exercice1():
    # ******************** Votre code ci-dessous ********************
    name = input("Veuillez entrer votre nom : ")
    age = input("Veuillez entrer votre âge : ")
    print(f"Je m'appelle {name} et j'ai {age} ans")
    pass
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 2
#

@exercice
def exercice2():
    nombres = list(range(10))
    # ******************** Votre code ci-dessous ********************
    carres = []
    for nombre in nombres:
        carres.append(nombre ** 2)
    for nombre, carre in zip(nombres, carres):
        print(nombre, carre)
    # ******************** Votre code ci-dessous ********************


#
# EXERCICE 3
#

@exercice
def exercice3():
    nombres = [0, 23, 5, 61, 86, 35, 51, 79, 2, 85, 15, 41, 19, 0, 3]
    # ******************** Votre code ci-dessous ********************
    pairs, impairs = [], []
    for nombre in nombres:
        if nombre % 2 == 0:
            pairs.append(nombre)
        else:
            impairs.append(nombre)
    print(f"nombres pairs : {pairs}")
    print(f"nombres impairs : {impairs}")
    
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 4
#

@exercice
def exercice4():
    while True:
        n = input("Calcul du n-ème terme de la suite de Fibonacci, n = ")
        if not n.isdigit(): break
        n = int(n)
        print(f"--> fibonacci({n}) = {fibonacci(n)}\n")


def fibonacci(n):
    # ******************** Votre code ci-dessous ********************
    if n == 1 or n == 0:
        return n
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 5
#

@exercice
def exercice5():
    # ******************** Votre code ci-dessous ********************
    a = [2, 3]
    b = a
    print(a)
    print(b)

    b[0] = 1
    print(a)
    print(b)

    a = [5, 6]
    b[0] = 10
    print(a)
    print(b)
    pass
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 6
#

@exercice
def exercice6():
    liste_de_liste = [[random.randint(0, 99) for _ in range(2, 5)] for _ in range(2, 5)]
    liste_applatie = []
    # ******************** Votre code ci-dessous ********************
    for liste in liste_de_liste:
        liste_applatie += liste
    # ******************** Votre code ci-dessus *********************
    print(f"Liste de liste : {liste_de_liste}")
    print(f"Liste applatie : {liste_applatie}")


#
# EXERCICE 7
#

@exercice
def exercice7():
    while True:
        chaine = input("Entrer une chaine de caractères (presser 'Entrée' pour sortir) : ")
        if chaine == "":
            break
        pal = est_palindrome(chaine, 0, len(chaine) - 1)
        verbe = "est" if pal else "n'est pas"
        print(f"'{chaine}' {verbe} un palindrome.\n")


def est_palindrome(chaine, premier, dernier):
    # ******************** Votre code ci-dessous ********************
    # Version récursive
    if premier >= dernier:
        return True
    else:
        if chaine[premier] != chaine[dernier]:
            return False
        return est_palindrome(chaine, premier + 1, dernier - 1)
    
    # Version non récursive
    # moitie_chaine = 0

    # if len(chaine) % 2 == 0:
    #     moitie_chaine = len(chaine) / 2
    # else:
    #     moitie_chaine = len(chaine) // 2

    # for lettre, i in zip(chaine, range(len(chaine))):
    #     if i == moitie_chaine:
    #         return True
    #     if str(lettre) != str(chaine[-1-i]):
    #         return False
    # return True
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 8
#

@exercice
def exercice8():
    # Cette fonction est déjà complétée. Vous devez compléter la fonction `demander_nombres`
    nombres = demander_nombres()
    print(f"Vous avez entré les nombres suivants : {nombres}")


def demander_nombres():
    nombres = []
    # ******************** Votre code ci-dessous ********************
    nombre = input("Veuillez entrer un entier : ")
    while str.isdigit(nombre):
        nombres.append(nombre)
        nombre = input("Veuillez entrer un entier : ")
    
    # ******************** Votre code ci-dessus *********************
    return nombres


#
# EXERCICE 9
#

@exercice
def exercice9():
    resultats = generer_resultats()
    # ******************** Votre code ci-dessous ********************
    eleves = {}
    for dict in resultats:
        for eleve in dict:
            if eleve not in eleves:
                eleves[eleve] = [int(dict[eleve])]
            else:
                eleves[eleve].append(int(dict[eleve]))

    for eleve in eleves:
        nombre_notes = len(eleves[eleve])
        moyenne = sum(eleves[eleve]) / nombre_notes
        print(f"{eleve} : {nombre_notes} notes - {moyenne} de moyenne")
    
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 10
#

@exercice
def exercice10():
    # ******************** Votre code ci-dessous ********************
    texte = input("Veuillez entrer un texte : ")
    mots = str.lower(texte).split(" ")
    texte = "-".join(mots)
    print(texte)
    pass
    # ******************** Votre code ci-dessus *********************


#
# EXERCICE 11
#

@exercice
def exercice11():
    nombres = [random.randint(0, 100) for _ in range(random.randint(3, 20))]
    print(f"\nListe de nombres aléatoires :\n{nombres}")

    personnes = generer_personnes()
    formatter_personnes = lambda personnes: "\n".join(map(lambda personne: f"{personne[0]} ({personne[1]})", personnes))
    print(f"\nListe de personnes aléatoires :\n{formatter_personnes(personnes)}")

    tri_a_bulles(nombres)  # TODO : modifier cette ligne
    print(f"\nListe de nombres triée :\n{nombres}")   

    tri_a_bulles(personnes)  # TODO : modifier cette ligne
    print(f"\nListe de personnes triée :\n{formatter_personnes(personnes)}")
    

# TODO : modifier cette fonction
def tri_a_bulles(l):
    for i in range(len(l) - 1, 0, -1):
        for j in range(i):
            if l[j] > l[j + 1]:
                l[j + 1], l[j] = l[j], l[j + 1]


#
# EXERCICE 12
#

@exercice
def exercice12():
    sudoku_valide = obtenir_sudoku_valide()
    sudoku_invalide = sudoku_valide.copy()
    sudoku_invalide[0], sudoku_invalide[1] = sudoku_invalide[1], sudoku_invalide[0] 

    for i, sudoku in enumerate([sudoku_valide, sudoku_invalide]):
        print(f"\nSudoku n°{i  +1}\n")
        print(formatter_sudoku(sudoku))
        print("--> " + ("VALIDE" if verifier_sudoku(sudoku) else "INVALIDE"))


def verifier_sudoku(sudoku):
    # ******************** Votre code ci-dessous ********************
    return False
    # ******************** Votre code ci-dessus *********************


if __name__ == "__main__":

    # exercice1()
    # exercice2()
    # exercice3()
    # exercice4()
    # exercice5()
    # exercice6()
    # exercice7()
    # exercice8()
    # exercice9()
    exercice10()
    # exercice11()
    # exercice12()


