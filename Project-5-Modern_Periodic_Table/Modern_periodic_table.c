#include <stdio.h>
#include <math.h>

int main() {
    printf("Welcome to Modern Periodic Table\n");
    printf("This program will tell you the element name if you enter the atomic number\n");

    const char* elements[118] = {"Hydrogen (H)", "Helium (He)", "Lithium (Li)", "Beryllium (Be)", "Boron (B)", "Carbon (C)",
    "Nitrogen (N)", "Oxygen (O)", "Fluorine (F)", "Neon (Ne)", "Sodium (Na)", "Magnesium (Mg)",
    "Aluminum (Al)", "Silicon (Si)", "Phosphorus (P)", "Sulfur (S)", "Chlorine (Cl)", "Argon (Ar)",
    "Potassium (K)", "Calcium (Ca)", "Scandium (Sc)", "Titanium (Ti)", "Vanadium (V)", "Chromium (Cr)",
    "Manganese (Mn)", "Iron (Fe)", "Cobalt (Co)", "Nickel (Ni)", "Copper (Cu)", "Zinc (Zn)", "Gallium (Ga)",
    "Germanium (Ge)", "Arsenic (As)", "Selenium (Se)", "Bromine (Br)", "Krypton (Kr)", "Rubidium (Rb)",
    "Strontium (Sr)", "Yttrium (Y)", "Zirconium (Zr)", "Niobium (Nb)", "Molybdenum (Mo)", "Technetium (Tc)",
    "Ruthenium (Ru)", "Rhodium (Rh)", "Palladium (Pd)", "Silver (Ag)", "Cadmium (Cd)", "Indium (In)",
    "Tin (Sn)", "Antimony (Sb)", "Tellurium (Te)", "Iodine (I)", "Xenon (Xe)", "Cesium (Cs)", "Barium (Ba)",
    "Lanthanum (La)", "Cerium (Ce)", "Praseodymium (Pr)", "Neodymium (Nd)", "Promethium (Pm)", "Samarium (Sm)",
    "Europium (Eu)", "Gadolinium (Gd)", "Terbium (Tb)", "Dysprosium (Dy)", "Holmium (Ho)", "Erbium (Er)",
    "Thulium (Tm)", "Ytterbium (Yb)", "Lutetium (Lu)", "Hafnium (Hf)", "Tantalum (Ta)", "Tungsten (W)",
    "Rhenium (Re)", "Osmium (Os)", "Iridium (Ir)", "Platinum (Pt)", "Gold (Au)", "Mercury (Hg)",
    "Thallium (Tl)", "Lead (Pb)", "Bismuth (Bi)", "Polonium (Po)", "Astatine (At)", "Radon (Rn)",
    "Francium (Fr)", "Radium (Ra)", "Actinium (Ac)", "Thorium (Th)", "Protactinium (Pa)", "Uranium (U)",
    "Neptunium (Np)", "Plutonium (Pu)", "Americium (Am)", "Curium (Cm)", "Berkelium (Bk)", "Californium (Cf)",
    "Einsteinium (Es)", "Fermium (Fm)", "Mendelevium (Md)", "Nobelium (No)", "Lawrencium (Lr)", "Rutherfordium (Rf)",
    "Dubnium (Db)", "Seaborgium (Sg)", "Bohrium (Bh)", "Hassium (Hs)", "Meitnerium (Mt)", "Darmstadtium (Ds)",
    "Roentgenium (Rg)", "Copernicium (Cn)", "Nihonium (Nh)", "Flerovium (Fl)", "Moscovium (Mc)", "Livermorium (Lv)",
    "Tennessine (Ts)", "Oganesson (Og)"
    };

    int atomic_number;
    printf("\n\nEnter the atomic number of the element: ");
    scanf("%d", &atomic_number);
    printf("\n\n >> The element is %s\n", elements[atomic_number - 1]);

    printf("\nThank you for using Modern Periodic Table\n");
    printf("Have a nice day!\n");

    return 0;
}
