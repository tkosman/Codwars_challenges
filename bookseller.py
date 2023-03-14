def stock_list(list_of_art, list_of_cat):
    if len(list_of_art) == 0 or len(list_of_cat) == 0:
        return ""

    kategorie = {}
    for i in list_of_cat:
        kategorie[i] = 0

    for i in list_of_art:
        nazwa, ilosc = i.split(" ")
        if nazwa[0] in kategorie:
            kategorie[nazwa[0]] = kategorie[nazwa[0]] + int(ilosc)
    
    wynik = ""
    for i in kategorie:
        wynik += f"({i} : {kategorie[i]})"
        if(i is not list(kategorie)[-1]):
            wynik += " - "
    return wynik
        

print(stock_list(["ABX 20", "ZC 10"], ["A", "B", "X"]))
