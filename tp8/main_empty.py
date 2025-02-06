from utils import exercice, GREEN, ENDC


#************************************
#***** Vos fonctions ci-dessous *****
#************************************

# EXERCICE 1

def hamming(str1, str2):
    # ******************** Votre code ci-dessous ********************
    distance = 0

    if len(str1) != len(str2) : return -1

    for i, j in zip(str1, str2):
        if i != j : distance += 1
    return distance

    # ******************** Votre code ci-dessus *********************

# EXERCICE 2

def recherche_mot_force_brute(mot, texte):
    # ******************** Votre code ci-dessous ********************
    
    idx = 0
    first_letter = 0
    count = 0
    max_count = 0

    for i in range(len(texte)):
        if mot[idx] == texte[i]: 
            count += 1
            idx += 1
        else: 
            idx = 0
            first_letter = i
        max_count = max(max_count, count)
        if max_count == len(mot):
            return first_letter

    return -1
    # ******************** Votre code ci-dessus *********************

# EXERCICE 3

#***********************************
#***** Vos fonctions ci-dessus *****
#***********************************

def levenstein(str1, str2):

    size_diff = abs(len(str1) - len(str2))
    distance = size_diff

    for i, j in zip(str1, str2):
        if i != j : distance += 1

    return distance

#
# EXERCICE 1
#

@exercice
def exercice1():
    str1 = input("str1 = ")
    str2 = input("str2 = ")
    print(f"\nHamming({str1}, {str2}) = {hamming(str1, str2)}.")

#
# EXERCICE 2
#

@exercice
def exercice2():
    mot = input("mot = ")
    texte = input("texte = ")
    idx = recherche_mot_force_brute(mot, texte)
    if idx == -1:
        print(f"'{mot}' n'est pas dans '{texte}'")
    else:
        print(f"'{mot}' trouvé à l'indice {idx} : {texte[:idx]}{GREEN}{texte[idx:idx+len(mot)]}{ENDC}{texte[idx+len(mot):]}")
#
# EXERCICE 3
#

@exercice
def exercice3():
    # ******************** Votre code ci-dessous ********************
    mot1 = input("mot 1 = ")
    mot2 = input("mot 2 = ")
    distance = levenstein(mot1, mot2)
    print(f"lenvenstein({mot1}, {mot2}) = {distance}")
    pass
    # ******************** Votre code ci-dessus *********************


if __name__ == "__main__":

    exercice1()
    exercice2()
    exercice3()
