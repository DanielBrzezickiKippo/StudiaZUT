﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace csharp_lab1
{
    public class Paliwo
    {
        public string nazwa;
        public float cena;
    }


    //1. Stworzenie interfejsu
    interface ISamochod
    {
        void UruchomSilnik(bool stan);
        void Jedz();
        void DodajDoBaku(float ilosc);
    }


    //1. Stworzenie interfejsu
    interface DodatkowyInterfejs<T>
    {
        T JakasFunkcjaDziedziczonaZFunkcji(T samochod);
    }

    public abstract class Samochod : ISamochod , DodatkowyInterfejs<Samochod> //4. Dziedziczenie z wielu interfejsów
    {
        bool silnikWlaczony = false;
        float iloscPaliwa = 15f;

        public abstract void Tankuj(float cena);


        //3. Jednoczesne dziedziczenie z interfejsu i z klasy
        Samochod JakasFunkcjaDziedziczonaZFunkcji(Samochod samochod)
        {
            return samochod;
        }

        //2. Dziedziczenie implementacji funkcji UruchomSilnik
        public void UruchomSilnik(bool stan)
        {
            if (stan != silnikWlaczony)
            {
                silnikWlaczony = stan;
                if (silnikWlaczony)
                    Console.WriteLine("Silnik zostal uruchomiony");
                else
                    Console.WriteLine("Silnik zostal zatrzymany");
            }
            else
            {
                if (silnikWlaczony)
                    Console.WriteLine("Silnik juz jest uruchomiony");
                else
                    Console.WriteLine("Silnik juz jest zatrzymany");
            }
        }

        //2. Dziedziczenie implementacji funkcji Jedz
        public void Jedz()
        {
            if (iloscPaliwa <= 0)
            {
                //Nie moze jechac
                Console.WriteLine("Brak paliwa, zatankuj samochod");
            }
            else
            {
                //Moze jechac
                Console.WriteLine("Samochod zaczyna jechac");
                if (iloscPaliwa - 50 < 0)
                    iloscPaliwa = 0f;
                else
                    iloscPaliwa -= 50f;
            }
        }

        //2. Dziedziczenie implementacji funkcji DodajDoBaku
        public void DodajDoBaku(float ilosc)
        {
            iloscPaliwa += ilosc;
        }


        public List<Paliwo> UstalCenyPaliw()
        {
            List<Paliwo> cenyPaliw = new List<Paliwo>();
            Paliwo benzyna = new Paliwo();
            benzyna.nazwa = "Benzyna";
            benzyna.cena = 4.50f;
            cenyPaliw.Add(benzyna);

            Paliwo diesel = new Paliwo();
            diesel.nazwa = "Diesel";
            diesel.cena = 4.20f;
            cenyPaliw.Add(diesel);

            Paliwo elektryk = new Paliwo();
            elektryk.nazwa = "Elektryk";
            elektryk.cena = 1.90f;
            cenyPaliw.Add(elektryk);

            return cenyPaliw;
        }

        Samochod DodatkowyInterfejs<Samochod>.JakasFunkcjaDziedziczonaZFunkcji(Samochod samochod)
        {
            throw new NotImplementedException();
        }
    }

}
