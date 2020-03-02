
# Outils pour l'analyse binaire


### Analyse statique
- [IDA](https://www.hex-rays.com/products/ida/support/download_freeware/): Version gratuite de IDA, il y a moins de fonctionnalités que dans la version payante
  mais c'est largement suffisant pour commencer.

- [Radare2](https://rada.re/n/radare2.html)
    
- [Cutter](https://cutter.re/): Version graphique de radare2, plus facile à prendre en main.
    
- [BinaryNinja](https://binary.ninja/): Version d'essai sinon le logiciel est payant.

- [Ghidra](https://ghidra-sre.org/): Logiciel de reverse opensource de la NSA. 


### Analyse Dynamique
- gdb: Natif sous linux. Sous Windows, voir la section **Installer MinGW sous Windows**
- [gdb-peda](https://github.com/longld/peda): Python Exploit Development Assistance, c'est extension de gdb.
    
- [Immunity Debugger](https://www.immunityinc.com/products/debugger/): Seulement sous Windows.
    
- [Windbg](https://developer.microsoft.com/fr-fr/windows/downloads/windows-10-sdk/): Utilisé pour l'analyse kernel de Windows ou les logiciels 64 bits,
  plus dur à prendre en main que Immunity Debbuger.
- [Windbg Workspace add-on](https://www.zachburlingame.com/2011/12/customizing-your-windbg-workspace-and-color-scheme/): Permet d'avoir une interface semblable à Immunity Debbuger.
    
- [CheatEngine](https://www.cheatengine.org/): Permet d'analyser des jeux vidéos plus facilement, outils très puissant et pratique pour l'analyse de code conséquent.
  Disponible sous Windows.
    
- [OllyDbg](http://www.ollydbg.de/): Disponible sous Windows uniquement.
    
- [Valgrind](https://valgrind.org/): Analyse dynamique de la mémoire d'un programme, permet de détecter les fuites et les erreurs d'implémentation.
  Peut aussi être installé sur linux facilement via apt.


### Commandes utiles (linux)
- strings: permet d'afficher les chaines de carractères d'un binaire
   
- grep: permet de faire un filtrage sur la sortie d'une commande ou de chercher un mot/phrase
    
- file: affiche les informations d'un fichier (type, architecture, version, ...)
    
- objdump: affiche des informations d'un executable (header, sections, désassemblage, ...)
    
- hexedit: permet de mofifier directement les opcodes d'un binaire
  on peut aussi faire ça dans certains logiciel d'analyse statique
      
     
### Installer Mingw sous Windows
Pour utiliser des programmes comme gcc ou bien gdb sous Windows, il est possible d'installer
mingw qui est est une adaptation des logiciels de développement et de compilation du GNU sous Win32.

Télécharger Mingw installation manager [ici](https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe).

Lancez ensuite l'installateur puis sélectionnez **mingw32-base-bin** et **msys-base-bin**.
Ensuite dans Installation, faire **Apply Changes**.

Il faut ensuite ajouter Mingw au Path, pour cela:
- Tapez **variables d'environnement** dans la barre de recherche windows
- (puis cliquez sur **Variables d'environnement** si vous êtes dans **Propriétés système**)
- Cliquez sur la variable système **Path** puis **Modifier**
- Cliquez sur **Nouveau** et tapez **C:\MinGW\bin** (ou autre en fonction de votre installation)

Après avoir tout validé, vous pouvez utiliser gcc et gdb dans votre PowerShell.
     
     
### Scripter et automatiser l'analyse avec python
- diStorm3: **pip3 install distorm3 --user**, permet de manipuler de code assembleur d'un binaire (désassemblage, ...)
  
- immlib/immutils: vient avec Immunity debugger, API python de Immunity debugger
  
- [pydk](https://githomelab.ru/pykd/pykd): API python de Windbg
  
- pefile: **pip3 install pefile --user**, permet de manipuler le format de fichier Windows PE en python
       
- gdb: **pip3 install gdb --user**, API python de gdb
        
- r2pipe: **pip3 install r2pipe --user**, API python de Radare2
    
- pyelftools: **pip3 install pyelftools --user**, permet de manipuler le format defichier Linux ELF en python
