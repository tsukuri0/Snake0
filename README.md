# Packman
Deschiderea terminalului (cmd sau git bash)
Deschide linia de comandă (Command Prompt, Git Bash sau orice terminal disponibil).

Navighează către directorul proiectului unde ai salvat fișierele codului sursă și Makefile-ul.
Executarea comenzilor make

a. Curățarea directorului de fișiere obiect și executabile anterioare
Înainte de a construi din nou proiectul, este bine să cureți toate fișierele .o (fișiere obiect) și executabilele vechi. Aceasta se poate face folosind target-ul clean din Makefile.

Compilarea și construirea proiectului
Acum poți construi aplicația folosind comanda make. Aceasta va compila toate fișierele sursă (.cpp), creând fișiere obiect (.o), și în final va lega aceste fișiere pentru a crea executabilul.

b.  g++ apple.cpp -o apple.o -c: Această comandă compilează fișierul apple.cpp și creează fișierul obiect apple.o. Parametrul -c indică că trebuie creat un fișier obiect.
g++ -o Snake.exe: Aceasta este comanda finală care leagă toate fișierele obiect pentru a crea executabilul Snake.exe.
