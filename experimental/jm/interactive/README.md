To readme dotyczy testowania interactive mode przy uzyciu ivm i pomocniczych skryptow.

Pliki pythona sa zgodne z wersja 3.7 i nowszymi.

---

W tym folderze znajduja sie:

bash:
test.sh -- testerka, rekursywnie przeszukuje foldery i uruchamia testy
run_intearactive_test.sh -- skrypt wykonujacy pojedynczy test i konczacy sie kodem 0 lub 1

python:
part2_ivm.py -- najwazniejsze narzedzie zmieniajace instrukcje testowe na instrukcje rozumiane przez gamme
verify_interactive_final_board.py -- skrypt weryfikujacy czy zadany output gammy jest prawidlowy


Dla uzytkownika koncowego interesujace sa pliki test.sh -- do testow zautomatyzowanych, oraz part2_ivm.py -- do odpalania pojedynczego testu, daje mozliwosc sledzenia ruch po ruchu wykonania

---

Kazdy plik zawiera w srodku opis interesujacych dla uzytkownika koncowego elementow -- albo sposob, wywolania, albo wspierane flagi, albo opis metod, ktore moga wymagac customizacji.

Pliki test.sh, run_interactive_test.sh oraz part2_ivm.py sa poprawne. Jezeli nie dziala - przeczytaj ze zrozumieniem 3 razy komentarze w nich i sie zastosuj. 
Plik verify_interactive_final_board.py nie jest idealny, zawiera 2 sposoby "czyszczenia" outputu gammy - naiwne usuwanie kodow z tekstu (default, bardzo duza szansa na false negative, nie zadziala przy aktualizowaniu wierszami) oraz przepuszczenie przez emulator terminala (opcjonalnie mozna wlaczyc, wymaga paczki `pyte`, nie wspiera ESC[u i ESC[s) -- generalnie druga opcja jest duzo, duzo lepsza. Naiwne czyszczenie jest naiwne, raczej nie zadziala, nie zglaszaj w nim bledow, popraw je we wlasnym zakresie. 

Automatyczne sprawdzarki zadzialaja tylko na planszach, ktore maja co najmniej 2 wiersze.

---

Ogolny opis pierwszego uruchomienia, skopiowany z messengera:
najpierw należy ustalić, czy każdy z etapów działania testerki działa poprawnie
punkty newralgiczne to pozycja startowa kursora (ustawia się ją w part2_ivm) oraz wyciąganie końcowego stanu planszy z outputu gammy (plik verify_board czy jakoś tak)
to pierwsze testuje się przez wybranie pliku .ivml z examples i zrobienie cat plik.ivml | python3 -u part2_ivm.py | ./gamma && cat plik.vmr
I porównujesz czy plansze wyglądają tak samo (jeżeli nie - błąd jest albo w pozycji startowej kursora, albo w wybranym trybie działania ścian, albo w twojej gammie)
potem jak upewnisz się ze to jest ok to odpalasz skrypt .sh na tym samym pliku ivml i sprawdzasz, czy exit code jest 0
jeżeli tak, to masz działający setup i możesz śmiało odpalać testerkę

---

Calosc jest dosyc prosta, u wielu osob dziala poprawnie, jezeli nie dziala przeczytaj jeszcze raz komentarze w plikach. Jezeli masz pecha, to pyte nie wspiera twojej implementacji. 

Powodzenia

---

Nie dajemy zadnych gwarancji, ze przejscie testow oznacza poprawnosc implementacji gammy, lub ze nieprzejscie testow oznacza blad w implementacji gammy.


Calosc jest dostepna na licencji WTFPL.
Autorzy: Jakub Molinski i Hubert Badocha

