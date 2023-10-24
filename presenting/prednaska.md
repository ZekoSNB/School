## Zvysenie informovanosti o informatike a vyvojovych dosiek *Osnova*

1. Kto som ?
1.1  Ako som sa dostal k programovaniu
1.2  Preco bola informatika moj vyber ?
1.2.1  Som samouk a ty mozes byt tiez 
1.3 V com sa moze informatika pysit ? 


2. Co je arduino ?
2.1 Co dokazeme spravit s arduinom
2.2 Jednoduche arduino na meranie vzdialenosti 
**2.2.1 Aktivita vo dvojici zapajanie arduina so skolitelom** 
2.2.1 Zapnuty/Nezapnuty kod pomocou ultrazvuku - **ukazka** 
2.3 Jeho dalsie potencialne vyuzitia - **Automatizacia, zhotovenie projektov podla vasich predstav**

3. Obmedzenia s Arduinom 
3.1 Rozdiel medzi Raspberry Pi, Nvidia Jetson

4. Projekty, ktore mam zhotovene
4.1 Ako funguje
4.1.1 Mosfetove tranzistory
4.1.2 Rozdiel medzi normalnymi tranzistormi a mosfetove tranzistory
4.2 Ako som ich vytvoril
4.3 Veci, ktore som sa naucil

5. Moje plany do buducna
5.1 Automatizovanie RGB LED pasov cez Wifi spojenim 2 arduin
5.2 Ako to funguje ? 
5.3 Preco? 


# Poznamky
1. Moje meno je maros, mam 16 rokov a angazujem sa do skolskeho studentskeho parlamentu. Tuto prednasku robim ako podklad k mojej praci pre mladich lidrov  

2. Arduino je open-soruce vyvojova doska na lahko pouzivatelnom hardwary a softwary. Je mozne aby citali vstupy a z toho vyhodnotuli vystupy. Priklad senzorov, ktore mozme pouzit: Ultrazvukovy, Svetelny senzor, zvukovy senzor a mnoho dalsich senzorov. Nemusime byt len obmedzeny na senzory nasa ruka je volna. Mosfetove tranzistory na PWM (Power Width Modulation - preberame neskor), Klasicke tranzistory, pripajanie bluetooth/WiFi. 

**2.1** Nasa predstavivost je nas limit co dokazeme spravit s arduinom, ano na niektore ulohy uz je arduino moc jednoduche, ale co sa tyka jednoduchych projektov je to fakt len nasa predstavivost. Dokazeme sa s nim pripajat na bluetooth, WiFi. Posielat s nim prikazy cez Infracervene vysielace a prijimat ich pomocou IR prijimacov

# PWM
- PWM (*Pulse Width Modulation*) - je metoda kontrolovania prudu do elektronickeho zariadenia, upravujeme s tym svietivost LEDiek (*Light Emitting Diode*) a upravujeme jednotlivu frekvenciu. 50% PWM znamena ze pocas frekvencie 50% Casu pojde napatie a 50% bude napatie 0V (***Nakreslit na tabulu 50% upravy frekvencie***)
