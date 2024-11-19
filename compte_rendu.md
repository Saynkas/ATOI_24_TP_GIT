

ex2-2:

lignes 32-33 : préparation de la boucle

lignes 35-36 : boucles for imbriquées pour chaque pixel

ligne 40 : formule mathématique de Mandelbrot

ligne 43-55 : algorithme principal

lignes 62-63 : enregistrement de l'image et libération de l'espace mémoire


ex 3:

1) git merge

2) oui, il faut régler les conflits causés par les lignes différentes entre les deux fichiers
Makefile et mandel.c

3) vu qu'on veut prendre la version de color_support, on supprime manuellement la partie indiquée HEAD des fichiers en question
et on garde celle indiquée de color_support (+ enlever la signalétique de git, comme les "=========" et ">>>>>>>>>>")

4) add puis commit les changements une fois les conflits réglés

ex 4:

1) on a forké le dépôt fourni dans le tp en tant que dépôt publique sur GitHub 
pour ne pas avoir de difficultés liées aux clefs ssh et pour récupérer les branches

2) git add <les fichiers modifiés>
git commit -m "nom du commit" 
git push -u origin --all => envoyer le travail local de toutes les branches sur le
dépôt GitHub distant (via la remote "origin")
