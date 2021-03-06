#include <lib.h>
#include <position.h>
#include "../areadefs.h"

inherit TMPL;


void create() {
    ::create();

    SetAmbientLight(0);
    SetShort("underground room");
    SetLong(
      "This is a dark underground room. The walls are rough "
      "and bare. A passageway leads away to the southeast."
    );
    SetItems(([
        ({ "ground", "rock", "rocks", "earth", "dirt", "stone", 
          "stones" }) : "Rough and dirty, as one would expect from "
        "a simple underground area.",
        ({ "wall", "walls", "rough walls", "rough and bare walls", 
          "bare walls", "bare and rough walls" }) : "Carved roughly "
        "into the earth, this passageway has walls that expose "
        "underground rock. Clearly this area was architected "
        "with utility and expediency in mind.",
        ({ "passage", "passageway" }) : "This provides access to "
        "areas below the ground.",
        ({ "room", "here", "area" }) : "Carved roughly into the "
        "earth, this area has walls that expose underground rock.",
      ]));
    SetInventory(([
        OBJ+ "cot" : 2,
        NPC+ "orc_soldier" : 1,
      ]));
    SetExits(([
        "southeast" : ROOM+ "cavepass8",
      ]));

}

void init(){
    ::init();
}
