# Matematická knihovna pro relace a práci s daty

## Popis projektu
Tento projekt slouží k procvičení práce s jazykem C prostřednictvím vytvoření matematické knihovny, která pracuje s relacemi a množinami dat. Projekt pokrývá základní práci s ukazateli, strukturami, funkcemi vracejícími více hodnot a relacemi. Cílem je procvičit si základní koncepty a připravit se na složitější programovací úlohy.

## Struktura projektu

1. **Práce s ukazateli a předávání odkazem**:
   - Výměna hodnot mezi dvěma proměnnými pomocí ukazatelů.
   - Funkce pro výpočty a operace, které vrací více hodnot (např. dělení a zbytek).
   - Funkce pro změnu hodnot pomocí ukazatelů.

2. **Práce se strukturami**:
   - Implementace struktury `pair_t` pro uchování dvojice hodnot.
   - Operace nad strukturami jako je inverze, přiřazení a porovnání.

3. **Práce s relacemi**:
   - Implementace základních relací mezi dvojicemi hodnot.
   - Funkce pro kontrolu reflexivity, symetrie, tranzitivity a dalších vlastností relací.
   - Hledání minimálních a maximálních hodnot v relaci.

4. **Pokročilé operace s relacemi**:
   - Zjištění uzavřenosti relací.
   - Skládání relací a inverze relací.

## Požadavky
- `gcc` - Kompilátor jazyka C.
- Základní znalosti práce s příkazovou řádkou a Makefile.

## Kompilace a spuštění
Pro kompilaci projektu použijte následující příkazy:

```bash
make              # Kompilace zdrojových souborů
./projekt         # Spuštění hlavního programu
```

## Autor
tadLab - Tadeas Novotny
Tento projekt byl vytvořen na základě cvičení z předmětu IZP (Základy programování) jako nástroj pro procvičení základních programovacích konceptů v jazyce C.
