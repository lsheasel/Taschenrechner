# Taschenrechner in C

## Beschreibung
Dieser einfache Taschenrechner wurde in der Programmiersprache C geschrieben und erlaubt grundlegende arithmetische Operationen: Addition, Subtraktion, Multiplikation und Division.

## Funktionen
Der Code implementiert vier mathematische Operationen:
- **Addition** (`addieren`)
- **Subtraktion** (`subtrieren`)
- **Multiplikation** (`multiplicieren`)
- **Division** (`dividieren`)

Der Benutzer wird aufgefordert, eine Operation auszuwählen und zwei Zahlen einzugeben. Das Programm berechnet das Ergebnis und gibt es aus.

## Anforderungen
- C-Compiler (z. B. `gcc`)

## Kompilierung und Ausführung
### Kompilieren:
```
gcc -o taschenrechner taschenrechner.c
```

### Ausführen:
```
./taschenrechner
```

## Bedienung
1. Das Programm starten.
2. Eine der folgenden Optionen wählen:
   - `1` für Addition
   - `2` für Subtraktion
   - `3` für Multiplikation
   - `4` für Division
3. Zwei ganze Zahlen eingeben.
4. Das Ergebnis wird auf der Konsole ausgegeben.

## Verbesserungsvorschläge
- Fehlerbehandlung für ungültige Eingaben (z. B. Division durch Null)
- Verwendung einer `switch-case`-Struktur statt mehrerer `if`-Bedingungen
- Erweiterung um weitere mathematische Operationen (z. B. Potenzieren, Modulo)

## Autor
Erstellt von [Dein Name]

