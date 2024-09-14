# Snake
denumirea proiectului
2. ce reprezintă proiectul
3. care sunt regulile jocului Snake
4. enumerați toate tipurile de date noi declarate, oferiți-le o scurtă explicație (ce reprezintă obiectele de acest tip).

Point:
Reprezintă o structură simplă care definește coordonatele unui punct în spațiul 2D. Are două atribute: x și y, ce indică poziția pe axele X și Y ale jocului. Această structură va fi utilizată pentru a indica poziția șarpelui, a mărului și a altor elemente de pe tablă.

Apple:
Această clasă reprezintă obiectul mărului din joc. Ea deține un atribut privat de tip Point care indică poziția mărului pe tablă. Are două metode importante:

Constructori (implicit și parametrizat) pentru inițializarea poziției.
GetPosition() returnează poziția curentă a mărului.

Direction:
Este un enum class care definește direcțiile în care șarpele poate să se miște: Top, Left, Right și Bottom. Aceasta este utilizată pentru a schimba direcția de mișcare a șarpelui în funcție de input-ul utilizatorului.

Snake:
Această clasă reprezintă șarpele din joc. Are următoarele atribute și metode:

_segments – un array de Point care păstrează segmentele șarpelui (maxim 100 segmente).
_nr_segments – numărul curent de segmente ale șarpelui.
Constructori (implicit și parametrizat) pentru a inițializa poziția de start a șarpelui.
Move(Direction direction) – pentru a muta șarpele în direcția specificată.
GetSize() – returnează dimensiunea șarpelui.
GetPosition() – returnează poziția capului șarpelui.
Eat(const Apple& apple) – adaugă un segment la șarpe când acesta mănâncă mărul.

Board:
Clasa Board definește tabla de joc, având două atribute private:

_width și _height pentru dimensiunile tablei.
Metodele includ un constructor pentru inițializarea dimensiunilor și metode GetWidth() și GetHeight() pentru a obține dimensiunile tablei.

GameEngine:
Această clasă controlează logica jocului. Ea integrează toate celelalte clase (Apple, Snake, Board) pentru a rula jocul. Are următoarele atribute și metode:

_apple pentru măr.
_snake pentru șarpe.
_board pentru tablă.
Init() pentru inițializarea jocului.
Run() pentru a rula jocul.

Painter:
Această clasă este responsabilă de desenarea elementelor pe ecran. Utilizează funcțiile:

DrawImage(Point topLeft, Point bottomRight, char** image) pentru a desena o imagine pe ecran.
WriteText(Point position, char* text) pentru a afișa text la o anumită poziție.
