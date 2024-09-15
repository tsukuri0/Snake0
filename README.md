Denumirea proiectului: Pacman Game
Descrierea proiectului: Acesta este o implementare simplificată a jocului clasic Pacman, unde utilizatorul controlează personajul Pacman, colectând puncte și evitând fantomele.
Reguli jocului Pacman: Utilizatorul controlează Pacman folosind săgețile pentru a naviga pe tablă, colectând puncte. Fantomele îl urmăresc pe Pacman, iar dacă este prins, Pacman pierde o viață. Jocul se termină când toate punctele sunt colectate sau Pacman pierde toate viețile.
Tipuri de date noi declarate:
Point: Reprezintă o coordonată pe tablă, cu valorile x și y.
Pacman: Reprezintă personajul principal al jocului, incluzând poziția și numărul de vieți.
Ghost: Reprezintă fantomele care urmăresc Pacman, având o stare de teamă atunci când Pacman mănâncă un super punct.
Direction: Un enum care definește direcțiile de mișcare (sus, jos, stânga, dreapta).
Board: Reprezintă tabla de joc, incluzând layout-ul pereților și punctelor.
GameEngine: Motorul care gestionează logica jocului, inclusiv interacțiunea dintre Pacman, fantome și tabla de joc.
Painter: Clasa responsabilă de afișarea grafică a jocului, incluzând Pacman, fantomele și textul.
