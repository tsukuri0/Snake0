Sarcinile Finalizate:
Crearea ramurii lab03 și actualizarea proiectului

1.Am creat o nouă ramură numită lab03 pentru gestionarea modificărilor realizate în cadrul lucrării. Am sincronizat proiectul cu ultima versiune a branch-ului principal (main), urmând practica corectă de versionare și gestionare a codului sursă.

2.Actualizarea și extinderea clasei Point:

Constructori și operatori adăugați:
Constructor implicit și constructor de copiere.
Operator de asignare (=), comparație (==), citire (>>), și afișare (<<).
Acești operatori permit manipularea mai ușoară a obiectelor Point, esențiale în gestionarea pozițiilor în joc.

3.Actualizarea clasei Apple:

Constructori și operatori adăugați:
Constructor implicit, constructor cu parametri, și constructor de copiere.
Operator de asignare (=), comparație (==), citire (>>), și afișare (<<).
Aceste modificări permit gestionarea și manipularea obiectelor Apple în joc, care reprezintă elementele colecționabile.

4.Actualizarea clasei Board:

Constructori și operatori adăugați:
Constructor implicit, constructor de copiere.
Operator de asignare (=), comparație (==), citire (>>), și afișare (<<).
Aceste adăugiri permit gestionarea mai simplă a dimensiunilor și caracteristicilor tabloului de joc.

5.Actualizarea clasei Direction:

Operator adăugat:
Operator de afișare (<<) pentru a ușura afișarea direcțiilor de mișcare (Top, Left, Right, Bottom).
Astfel, direcțiile de mișcare ale fantomelor și personajului principal pot fi vizualizate într-un mod clar și intuitiv.

6.Crearea clasei abstracte AbstractPainter:

Am creat o nouă clasă abstractă care oferă o interfață pentru desenarea elementelor grafice din joc (DrawImage) și scrierea de text (WriteText). Aceasta va fi implementată de clase derivate care se ocupă cu afișarea jocului.

7.Actualizarea clasei Painter:

Implementarea clasei Painter derivată din AbstractPainter. Am definit metodele necesare pentru desenarea imaginilor și scrierea textului pe ecran.

8.Fixarea modificărilor în Git:
Am adăugat modificările realizate în ramura lab03 și am creat un commit cu mesajul descriptiv: "feat(lab03): add constructors and operators". După aceea, am trimis modificările pe GitHub.
