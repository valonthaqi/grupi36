# Lojtaret Sportiv
Përshkrimi i Projektit:

Te shkruhet programi ne C++ i cili paraqet lojtaret e basketbollit dhe futbollit, ku paraqiten per secilin lojtar emrin, sportin, ekipin dhe pozicionin ku luan, si dhe vitin e lindjes. Ne fund te shtypen lojetaret, te paraqitet pozita ku luan dhe sa lojetar luajn ne at pozicion.

1. Deklarimi i Enum Pozicioni: Te deklarohet numerimi Pozicioni me vlerat: center, power_forward, small_forward, point_guard, shooting_guard, goalkeeper, defenders, midfielders, forwards.

2. Struktura Lojtari: Te deklarohet struktura Lojtari me fushat: (string) emri; (string) ekipi; (string) sporti; (Pozicioni) pozicioni; (int) viti_lindjes;

3. Funksioni shtypLojtaret: Te shkruhet funksioni me emrin shtyp I cili pranon nje parameter te tipit Lojtari dhe nuk kthen rezultat.
Ky funksion paraqet:

Lista e lojtareve: 

LeBron James (Basketball), Lakers, 1984

Stephen Curry (Basketball),Warriors, 1988

Devin Booker (Basketball), Phoenix Suns, 1996

Lionel Messi (Football), Inter Miami, 1987

Cristiano Ronaldo (Football), Al-Nassr, 1985

Virgil van Dijk (Football), Liverpool, 1991

4. Funksioni lojtaret_ne_pozite: void shtypLojtaret(const Lojtari lojtaret[], int n)
Ky funksion numëron dhe shtyp lojtarët që mbajnë një pozite të caktuar, duke marrë pozitat e mundshme si argument dhe duke i krahasuar ato me pozitat e ruajtura në enum. Ai gjithashtu numëron se sa lojtarë janë të pozicionuar në atë pozite dhe e shtyp këtë informacion.

5. Funksioni main: Ky funksion krijon një varg lojtarësh të tipit Lojtari dhe inicializon ata me të dhëna të ndryshme. Më pas, ai thërret funksionin shtypLojtaret për të shtypur të dhënat e të gjithë lojtarëve dhe përdor funksionin lojtaret_ne_pozite për të gjetur dhe shtypur lojtarët në një pozite të caktuar, të dhënë nga përdoruesi.

   ![2025-02-11 (11)](https://github.com/user-attachments/assets/d38eff55-8bf0-4649-b98c-254e8a923eea)

