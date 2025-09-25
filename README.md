# le-median-dans-un-tableau-
 le median dans un tableau
PROBLÈME:

Trouver la médiane d’un tableau d’entiers saisi par l’utilisateur.

PRINCIPE:
1. Lire la taille du tableau et ses éléments.
2. Trier le tableau en ordre croissant.
3. Si la taille est impaire → prendre l’élément central.
4. Si la taille est paire → calculer la moyenne des deux éléments centraux.
5. Afficher la médiane.

DICTIONNAIRE DE DONNÉES:
• taille : taille du tableau (int)
• tableau : tableau d’entiers (int*)
• i : indice de parcours (int)
• mediane : valeur de la médiane (float)
• milieu1, milieu2 : éléments centraux si taille paire (int)

COMPLEXITÉ:
• Temps : O(n \log n)
• Espace : O(n)


