/* 
 * File:   main.h
 * Author: gmena
 *
 * Created on 23 de agosto de 2014, 02:21 PM
 */

#include "Service.h"
#include "Processor.h"
#include "Array.h"
#include "PackGestor.h"
#include "Console.h"
#include "File.h"

#ifndef MAIN_H
#define    MAIN_H

using namespace std;

string reQuery (Service service) {
    File file;
    string dir;
    //string base = service.getDir ("");

    //Console::warning ("|> Your home directory is: " + base);
    Console::warning ("\n|> Write the system base directory:\n|>> ");
<<<<<<< HEAD
    //cin >> dir;
    dir = "/home/gmena/Documentos/_b_PHP";
=======
    cin >> dir;
    //dir = "/home/gmena/Documentos/_b_PHP";
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0
    dir = dir + "/";
    //string BASE_DIR = GetPrivateProfileString();
    if (!file.isDir (dir) || !file.isDir (dir + "app")) {
        Console::error ("|> Invalid directory, please try again.\n\n");
        reQuery (service);
    }

    return dir;


}

#endif	/* MAIN_H */
