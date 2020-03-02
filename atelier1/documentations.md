# Documentations pour l'atelier


### Pour tous les exercices
- [Cheat sheet pour gdb](https://darkdust.net/files/GDB%20Cheat%20Sheet.pdf)
- [Cheat sheet pour l'assembleur x86](https://trailofbits.github.io/ctf/vulnerabilities/references/X86_Win32_Reverse_Engineering_Cheat_Sheet.pdf)


### App-sys 1
Un BoF (Buffer Overflow) classique pour modifier des valeurs dans la pile.
Les sources sont disponibles.
- [Fonctionnement de la pile](https://beta.hackndo.com/stack-introduction/)
- [BoF classique](https://beta.hackndo.com/buffer-overflow/) (Pas besoin de lire toute la doc pour cet exercice ! Il faut juste comprendre le principe)

### Crackme 1
Ce programme demande la saisie d'un mot de passe.
Le concépteur ne semble pas connaître les problèmes de sécurité classique !
Trouvez le mot de passe et montrez-lui.


### App-sys 2
Une fonction non utilisé ? Il doit y avoir un moyen de l'éxécuter !
Je pense avoir trouver un Buffer Overflow dans ce programme, je te donne les sources.
- [Documentation pointeurs de fonction en C](https://beta.hackndo.com/c-pointeurs-de-fonction/)


### Crackme 2
Le mot de passe n'apparait plus en claire, le programmeur à du mettre en place une protection.
Il faudrait faire une analyse statique du code pour comprendre comment il a bien pu faire.


### Crackme 3
Voila déjà un logiciel plus complexe ! Le programmeur semble avoir encodé son mot de passe.
- [Cryptage XOR](http://www.primenumbers.net/Renaud/fr/crypto/XOR.htm)


### Crackme 3 v2 (bonus)
Le logiciel semble être le même que le précédent mais j'ai du mal avec celui la ...

Je ne trouve pas de fonction main.
- [Stripped binary](https://en.wikipedia.org/wiki/Stripped_binary)
- [GDB - Debugging stripped binaries](https://felix.abecassis.me/2012/08/gdb-debugging-stripped-binaries/)


### App-sys 3
Vous pensez bien connaitre la fonction printf en C ? Elle vous réserve encore des surprises ! 
- [Exploitation du format string bug](https://www.bases-hacking.org/format-strings.html)


### Crackme 4
Je n'arrive pas à lancer ce programme avec gdb, il doit y avoir une protection.
- [Protection ptrace](https://www.root-me.org/fr/Documentation/Cracking/Appel-systeme-ptrace)


### App-sys 4
Cet exercice est bien plus complexe que les précédent, les sources sont disponibles.
Prenez le temps de bien lire le code et la documentation pour comprendre le bug à exploiter.
- [Use After Free](https://beta.hackndo.com/use-after-free/)
