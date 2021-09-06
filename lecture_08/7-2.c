// Vi har i rigt mål beskæftiget os med et program, der beregner timer, minutter og sekunder af et antal sekunder.

// Start med at organisere disse beregninger i en funktion, der tager ét input (et helt antal sekunder), og som giver tre output gennem tre output parametre. Hvis ikke programmet organiseres i en sådan funktion bliver det besværligt at gennemføre en systematisk black box unittest.

// Lav nu en systematisk test (black box unit testing) af følgende ønskede input og outputs:
/*
    Input: 4000 sekunder. Forventet output: 1 timer, 6 minutter og 40 sekunder
    Input: 75 sekunder. Forventet output: 0 timer, 1 minutter og 15 sekunder
    Input: 3700 sekunder. Forventet output: 1 timer, 1 minutter og 40 sekunder
    Input: 55 sekunder. Forventet output: 0 timer, 0 minutter og 55 sekunder
    Input: 3661 sekunder. Forventet output: 1 timer, 1 minutter og 1 sekunder
*/
// Du kan enten programmere dine tests med assert, eller med brug af CUTest.

// Bemærk lige at vi i denne opgave ikke tester output formatet (som gjort i opgave 3.4) - kun beregningerne af normaliserede timer, minutter og sekunder.