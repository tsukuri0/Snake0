1юPoint:
Reprezinta o structura simpla care defineste coordonatele unui punct in spatiul 2D. Are doua atribute: x si y, ce indica pozitia pe axele X si Y ale jocului. Aceasta structura va fi utilizata pentru a indica pozitia sarpelui, a marului si a altor elemente de pe tabla.

Apple:
Aceasta clasa reprezinta obiectul marului din joc. Ea detine un atribut privat de tip Point care indica pozitia marului pe tabla. Are doua metode importante:

Constructori (implicit si parametrizat) pentru initializarea pozitiei.
GetPosition() returneaza pozitia curenta a marului.
Direction:
Este un enum class care defineste directiile in care sarpele poate sa se miste: Top, Left, Right si Bottom. Aceasta este utilizata pentru a schimba directia de miscare a sarpelui in functie de input-ul utilizatorului.

Snake:
Aceasta clasa reprezinta sarpele din joc. Are urmatoarele atribute si metode:

_segments – un array de Point care pastreaza segmentele sarpelui (maxim 100 segmente).
_nr_segments – numarul curent de segmente ale sarpelui.
Constructori (implicit si parametrizat) pentru a initializa pozitia de start a sarpelui.
Move(Direction direction) – pentru a muta sarpele in directia specificata.
GetSize() – returneaza dimensiunea sarpelui.
GetPosition() – returneaza pozitia capului sarpelui.
Eat(const Apple& apple) – adauga un segment la sarpe cand acesta mananca marul.
Board:
Clasa Board defineste tabla de joc, avand doua atribute private:

_width si _height pentru dimensiunile tablei.
Metodele includ un constructor pentru initializarea dimensiunilor si metode GetWidth() si GetHeight() pentru a obtine dimensiunile tablei.
GameEngine:
Aceasta clasa controleaza logica jocului. Ea integreaza toate celelalte clase (Apple, Snake, Board) pentru a rula jocul. Are urmatoarele atribute si metode:

_apple pentru mar.
_snake pentru sarpe.
_board pentru tabla.
Init() pentru initializarea jocului.
Run() pentru a rula jocul.
Painter:
Aceasta clasa este responsabila de desenarea elementelor pe ecran. Utilizeaza functiile:

DrawImage(Point topLeft, Point bottomRight, char** image) pentru a desena o imagine pe ecran.
WriteText(Point position, char* text) pentru a afisa text la o anumita pozitie.
