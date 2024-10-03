# Pacman Game Project

Acest proiect implementează un joc simplificat Pacman, utilizând limbajul C++ și GIT pentru gestionarea codului sursă. Fiecare componentă a jocului este împărțită în fișiere `.cpp` și `.hpp` pentru o mai bună organizare și modularitate.

## Fisiere din proiect

### 1. `main.cpp`
- **Descriere:** Punctul de intrare în aplicație. Aici este inițializat motorul jocului și sunt apelate funcțiile pentru a porni jocul.
- **Funcții principale:**
   - `main()` – Initializează motorul de joc și rulează jocul.

### 2. `game_engine.hpp` și `game_engine.cpp`
- **Descriere:** Controlerul principal al jocului. Acesta gestionează logica generală, inclusiv interacțiunea între Pacman, fantome, mere, și tablă.
- **Funcții principale:**
   - `Init()` – Inițializează jocul, setând starea inițială a tuturor elementelor.
   - `Run()` – Rulează bucla principală a jocului.

### 3. `pacman.hpp` și `pacman.cpp`
- **Descriere:** Clasa `Pacman` care reprezintă caracterul principal al jocului. Această clasă controlează mișcarea și acțiunile lui Pacman.
- **Funcții principale:**
   - `Move(Direction direction)` – Mută Pacman în direcția specificată.
   - `GetPosition()` – Returnează poziția curentă a lui Pacman.
   - `Eat()` – Reprezintă acțiunea de a mânca mere sau alte elemente.

### 4. `ghost.hpp` și `ghost.cpp`
- **Descriere:** Clasa `Ghost` care reprezintă fantomele din joc. Fantomele urmăresc Pacman și se comportă diferit în funcție de starea lor (normale sau speriate).
- **Funcții principale:**
   - `Move(Direction direction)` – Mută fantoma în direcția specificată.
   - `SetScared(bool scared)` – Setează starea de frică a fantomei.
   - `IsScared()` – Verifică dacă fantoma este speriată.

### 5. `apple.hpp` și `apple.cpp`
- **Descriere:** Clasa `Apple` care reprezintă merele din joc. Pacman le poate mânca pentru a aduna puncte.
- **Funcții principale:**
   - `GetPosition()` – Returnează poziția curentă a mărului.

### 6. `board.hpp` și `board.cpp`
- **Descriere:** Clasa `Board` definește tabla de joc, inclusiv dimensiunile și structura acesteia.
- **Funcții principale:**
   - `GetWidth()` și `GetHeight()` – Returnează lățimea și înălțimea tablei de joc.

### 7. `painter.hpp` și `painter.cpp`
- **Descriere:** Clasa `Painter` este responsabilă de desenarea elementelor jocului pe ecran.
- **Funcții principale:**
   - `DrawImage(Point topLeft, Point bottomRight, char** image)` – Desenează o imagine pe ecran între coordonatele date.
   - `WriteText(Point position, char* text)` – Afișează text pe ecran la o anumită poziție.

### 8. `point.hpp` și `point.cpp`
- **Descriere:** Structura `Point` definește un punct în spațiul bidimensional (coordonate X și Y).
- **Funcții principale:**
   - Reprezintă poziția tuturor obiectelor din joc (Pacman, fantome, mere, etc.).

### 9. `direction.hpp` și `direction.cpp`
- **Descriere:** Definirea direcțiilor în care Pacman și fantomele se pot deplasa. Acesta este un `enum class` care conține valorile `Top`, `Left`, `Right`, și `Bottom`.

## Cum să compilezi proiectul

1. **Deschide terminalul** și navighează în directorul proiectului:

   ```bash
   cd path/to/project
