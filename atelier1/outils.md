
# Outils pour l'analyse binaire


### Analyse statique
    - IDA: https://www.hex-rays.com/products/ida/support/download_freeware/
      (version gratuite de IDA, il y a moins de fonctionnalités que dans la version payante
      mais c'est largement suffisant pour commencer)

    - Radare2: (linux) https://rada.re/n/radare2.html
    
    - Cutter: https://cutter.re/
      (version graphique de radare2, plus facile à prendre en main)
    
    - BinaryNinja: https://binary.ninja/ 
      (version d'essai sinon payant)


### Analyse Dynamique
    - gdb: natif sous linux
    - gdb-peda: https://github.com/longld/peda
      (Python Exploit Development Assistance, extension de gdb)
    
    - Immunity Debugger: (Windows) https://www.immunityinc.com/products/debugger/
    
    - Windbg: (Windows) https://developper.microsoft.com/fr-fr/windows/downloads-10-sdk/
      (utilisé pour l'analyse kernel de Windows, dur à prendre en main)
    - Windbg Workspace add-on: https://www.zachburlingame.com/2011/12/customizing-your-windbg-workspace-and-color-scheme/
      (Permet d'avoir une interface semblable à Immunity Debbuger, plus simple à prendre en main)
    
    - CheatEngine: (Windows) https://www.cheatengine.org/
      (permet d'analyser des jeux vidéos plus facilement, outils très puissant
      et pratique pour l'analyse de code conséquent)
    
    - OllyDbg: (Windows) http://www.ollydbg.de/
    
    - Valgrind: https://valgrind.org/
      (Analyse dynamique de la mémoire d'un programme, permet de détecter les fuites
      et les erreurs d'implémentation)


### Commandes utiles (linux)
    - strings: permet d'afficher les chaines de carractères d'un binaire
    
    - grep: permet de faire un filtrage sur la sortie d'une commande ou de chercher un mot/phrase
    
    - file: affiche les informations d'un fichier (type, architecture, version, ...)
    
    - objdump: affiche des informations d'un executable (header, sections, désassemblage, ...)
    
    - hexedit: permet de mofifier directement les opcodes d'un binaire
      on peut aussi faire ça dans certains logiciel d'analyse statique
      
     
### Installer Mingw sous Windows
    Pour utiliser des programmes comme gcc ou bien gdb sous linux, il est possible d'installer
    mingw qui permet
    Télécharger Mingw installation manager à cette adresse:
    https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe
    Lancez ensuite l'installateur puis sélectionnez **mingw32-base-bin** et **msys-base-bin**.
    Ensuite dans Installation, faire **Apply Changes**.
    Il faut ensuite ajouter Mingw au Path, pour cela:
    - Tapez **variables d'environnement** dans la barre de recherche windows
    - (puis cliquez sur **Variables d'environnement** si vous êtes dans **Propriétés système**)
    - Cliquez sur la variable système **Path** puis **Modifier**
    - Cliquez sur **Nouveau** et tapez **C:\MinGW\bin** (ou autre en fonction de votre installation)
    Après avoir tout validé, vous pouvez utiliser gcc et gdb dans votre PowerShell.
     
     
### Scripter et automatiser l'analyse avec python
    - diStorm3: sudo pip3 install distorm3
      Permet de manipuler de code assembleur d'un binaire (désassemblage, ...)
    
    - immlib/immutils: vient avec Immunity debugger
      API python de Immunity debugger
    
    - pydk: https://githomelab.ru/pykd/pykd
      API python de Windbg
    
    - pefile: sudo pip3 install pefile
      Permet de manipuler le format de fichier Windows PE en python
        
    - gdb: sudo pip3 install gdb
      API python de gdb
        
    - r2pipe: sudo pip3 install r2pipe
      API python de Radare2
    
    - pyelftools: sudo pip3 install pyelftools
      Permet de manipuler le format defichier Linux ELF en python

