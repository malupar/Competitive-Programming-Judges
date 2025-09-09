# Ejercicios de CFG

## Ejercicio 1
### Enunciado:
![Enunciado](./Enunciados/Ejercicio1.png)

### CFG
```
S -> aSb |
```
## Ejercicio 2
### Enunciado:
![Enunciado](./Enunciados/Ejercicio2.png)

### CFG
```
S -> aSb | acb
```

## Ejercicio 3
### Enunciado:
![Enunciado](./Enunciados/Ejercicio3.png)

### CFG
```
X -> aXb | S
S -> aS |
```

## Ejercicio 4
### Enunciado:
![Enunciado](./Enunciados/Ejercicio4.png)

### CFG
```
X -> aXb | S
S -> Sb |
``` 

## Ejercicio 5
### Enunciado:
![Enunciado](./Enunciados/Ejercicio5.png)

### CFG
```
X -> aXbb
X -> S
S -> Sb |
```

## Ejercicio 6
### Enunciado:
![Enunciado](./Enunciados/Ejercicio6.png)

### CFG
```
X -> T | aXbb
T -> aT | ab |
```

## Ejercicio 7
### Enunciado:
![Enunciado](./Enunciados/Ejercicio7.png)

### CFG
```
X -> T | aXbb
T -> aT | ab |
```
## Ejercicio 8
### Enunciado:
![Enunciado](./Enunciados/Ejercicio8.png)

### CFG
```
X -> T | aaXb
T -> aT | ab |
```

## Ejercicio 9
### Enunciado:
![Enunciado](./Enunciados/Ejercicio9.png)

### CFG
```
S -> T | Sb
T -> aT | 
```

## Ejercicio 10
### Enunciado:
![Enunciado](./Enunciados/Ejercicio10.png)

### CFG
```
X -> aXc | S
S -> aSb | 
```

## Ejercicio 11
### Enunciado:
![Enunciado](./Enunciados/Ejercicio11.png)

### CFG
```
T -> XS
X -> aXb | 
S -> bSc | 
```

## Ejercicio 12
### Enunciado:
![Enunciado](./Enunciados/Ejercicio12.png)

### CFG
```
S -> X | YC | AZ
X -> aXc | B
B -> bB |
Y -> aYb |
C -> Cc |
Z -> bZc |
A -> aA | 
```

## Ejercicio 13
### Enunciado:
![Enunciado](./Enunciados/Ejercicio13.png)

### CFG
```
W -> S | T
T -> Tb | Ta | Sb
S -> aSa | Y
Y -> Xb | b
X -> Xa | Xb | b
```

## Ejercicio 14
### Enunciado:
![Enunciado](./Enunciados/Ejercicio14.png)

### CFG
```
S -> aSa | Sb | b
```

## Ejercicio 15
### Enunciado:
![Enunciado](./Enunciados/Ejercicio15.png)

### CFG
```
X -> S | M | T
S -> aSa | Tb | Sb | bNb | b
T -> Sb | Ta | Tb
N ->  | Nb | Na
M -> b | Ma | Mb
```

## Ejercicio 16
### Enunciado:
![Enunciado](./Enunciados/Ejercicio16.png)

### CFG
```
X -> aXa | bXb | a | b | 
```
## Ejercicio 17
### Enunciado:
![Enunciado](./Enunciados/Ejercicio17.png)

### CFG
```
S -> A | B | C
A -> a | aAa | aCa // a o aa
B -> b | bAb// b o ba
C -> bBb | bCb | // bb
```

## Ejercicio 18
### Enunciado:
![Enunciado](./Enunciados/Ejercicio18.png)

### CFG
```
S -> aSa | bSb | aBa | bAb
A -> a | aa | aAa
B -> b | bb | bBb
```

## Ejercicio 19
### Enunciado:
![Enunciado](./Enunciados/Ejercicio19.png)

### CFG
```
S -> D
A -> aAa | aBa | a | aa
B -> bBb | bCb | bbb | bb
C -> bAb
D -> aCa | bDb | aDa | aba
```

## Ejercicio 20
### Enunciado:
![Enunciado](./Enunciados/Ejercicio20.png)

### CFG
```
S -> SS | (S) | 
```

## Ejercicio 21
### Enunciado:
![Enunciado](./Enunciados/Ejercicio21.png)

### CFG
```
S -> SS | (S) | [S] | 
```

## Ejercicio 22
### Enunciado:
![Enunciado](./Enunciados/Ejercicio22.png)

### CFG
```
S -> (S)S | 
```

## Ejercicio 23
### Enunciado:
![Enunciado](./Enunciados/Ejercicio23.png)

### CFG
```
S -> (S)S | [S]S | 
```

## Ejercicio 24
### Enunciado:
![Enunciado](./Enunciados/Ejercicio24.png)

### CFG
```
S -> aBS | bAS | 
B -> aBB | b
A -> bAA | a
```

## Ejercicio 25
### Enunciado:
![Enunciado](./Enunciados/Ejercicio25.png)

### CFG
```
S -> aSb | bSa | Sc | cS | SS | 
```

## Ejercicio 26
### Enunciado:
![Enunciado](./Enunciados/Ejercicio26.png)

### CFG
```
S -> aSc | bSc | cSa | cSb | SS | 
```

## Ejercicio 27
### Enunciado:
![Enunciado](./Enunciados/Ejercicio27.png)

### CFG
```
S -> SbSaSbS | SbSbSaS | SaSbSbS | 
```

## Ejercicio 28
### Enunciado:
![Enunciado](./Enunciados/Ejercicio28.png)

### CFG
```
S -> aAbS | bBaS | 
A -> aAbA | 
B -> bBaB | 
```

## Ejercicio 29
### Enunciado:
![Enunciado](./Enunciados/Ejercicio29.png)

### CFG
```
T -> S | Tc
S -> CADS | DBCS | 
A -> CADA | 
B -> DBCB | 
C -> cC | a
D -> cD | b
```

## Ejercicio 30
### Enunciado:
![Enunciado](./Enunciados/Ejercicio30.png)

### CFG
```
S -> TAcS | cCTS | 
A -> TAcA | 
C -> cCTC | 
T -> a | b
```

## Ejercicio 31
### Enunciado:
![Enunciado](./Enunciados/Ejercicio31.png)

### CFG
```
S -> bABS | bXS | aBBS | 
B -> aBBB | b
A -> bXA | a
X -> bXX | bA
```

## Ejercicio 32
### Enunciado:
![Enunciado](./Enunciados/Ejercicio32.png)

### CFG
```
S -> aSb | c | bS | aTa | cAa
T -> Ta | Sb
A -> | aA
```

## Ejercicio 33
### Enunciado:
![Enunciado](./Enunciados/Ejercicio33.png)

### CFG
```
Z -> S | T | BS | SB | BSB | BT | TB | BTB
T -> ABSBA | ABTBA
S -> Ac | cA | AcA | c
A -> aA | a
B -> bB | b
```

## Ejercicio 34
### Enunciado:
![Enunciado](./Enunciados/Ejercicio34.png)

### CFG
```
Error 404
```

## Ejercicio 35
### Enunciado:
![Enunciado](./Enunciados/Ejercicio35.png)

### CFG
```
S -> B | aSa | bSb
B -> aB | bB |c
```

## Ejercicio 36
### Enunciado:
![Enunciado](./Enunciados/Ejercicio36.png)

### CFG
```
S -> aS | bS | B
B -> c | aBa | bBb
```

## Ejercicio 37
### Enunciado:
![Enunciado](./Enunciados/Ejercicio37.png)

### CFG
```
S -> C | aSa | aSb | bSa | bSb
C -> aAb | aAa 
A -> aBa | aBb
B -> c | bBb | bBa | bAb | bAa
```

## Ejercicio 38
### Enunciado:
![Enunciado](./Enunciados/Ejercicio38.png)

### CFG
```
S -> K | B | A 
K -> Aba | Ba | Ka | Kb
B -> Nb | Bb | b
A -> aN | aA | a
N -> aNb | ab
```

## Ejercicio 39
### Enunciado:
![Enunciado](./Enunciados/Ejercicio39.png)

### CFG
```
S -> K | B | A 
K -> Aba | Ba | Ka | Kb
B -> Nb | Bb | b
A -> aN | aA | a
N -> aNb | ab
```

## Ejercicio 40
### Enunciado:
![Enunciado](./Enunciados/Ejercicio40.png)

### CFG
```
T -> aPb | bPa | aTb | bTa | aTa | bTb
P -> aPa | bPb | a | b | 
```

## Ejercicio 41
### Enunciado:
![Enunciado](./Enunciados/Ejercicio41.png)

### CFG
```
S -> L | M | P | I
B -> bB | 
A -> aBc | aAc // a y c balanceados
X -> bXc | 
Y -> X | aX // b y c balanceados
U -> aUb | 
V -> U | Vc // a y b balanceados

L -> aA | aV | aL // a desbalanceado
M -> Ac | Yc | Mc // c desbalanceado
N -> Ub | Nb // desbalancea ab
O -> bX | bO // desbalancea bc
R -> N | Rc // add c to unbalanced 
Q -> O | aQ // add a to unbalanced
P -> R | Q // b desbalanceada

D -> aD | a | 
E -> D | Eb | 
F -> Ec | Fc

I -> Eba | Fa | Fb | Ia | Ib | Ic
```

## Ejercicio 42
### Enunciado:
![Enunciado](./Enunciados/Ejercicio42.png)

### CFG
```
X -> S | T | A | B | 
T -> Db | Ea | Pc | Sc | TL | Tc // mal formato
S -> M | N | AcB | BcA // != sz
M -> LP | LM
N -> PL | NL
P -> c | LPL // = sz
A -> a | AL
B -> b | BL
C -> c | LC
D -> aC | LDL
E -> bC | LEL
L -> a|b
```

## Ejercicio 43
### Enunciado:
![Enunciado](./Enunciados/Ejercicio43.png)

### CFG
```
E -> N | EOE | (E)
D -> 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 
N -> D | DN
O -> + | - | * | /
```

## Ejercicio 44
### Enunciado:
![Enunciado](./Enunciados/Ejercicio44.png)

### CFG
```
E -> N | NOE | P | POE
P -> (E)
D -> 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 
N -> D | DN
O -> + | - | * | /
```

## Ejercicio 45
### Enunciado:
![Enunciado](./Enunciados/Ejercicio45.png)

### CFG
```
S -> M | NCD | TD
T -> B | aTc
N -> aNb | 
M -> BC | aMd
B -> bB | 
C -> cC |
D -> dD |
```