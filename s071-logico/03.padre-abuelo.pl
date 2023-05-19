es_padre(cesar, mario).
es_padre(mario, carlos).
es_padre(alberto, anibal).
es_padre(alberto, jose).
es_padre(anibal, vanessa).
es_padre(jose, catalina).
es_padre(jose, fernando).

es_abuelo(X, Y) :- es_padre(X, Z), es_padre(Z, Y).
