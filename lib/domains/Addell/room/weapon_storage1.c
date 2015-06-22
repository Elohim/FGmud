#include <lib.h>
#include ROOMS_H
#include "../areadefs.h"

inherit TMPL;


void create() {
    ::create();

    SetAmbientLight(0);
    SetShort("underground room");
    SetLong(
      "This is a dark underground room. The walls are rough and "
      "bare. A passageway leads away to the south."
    );
    SetItems(([
        ({ "ground", "rock", "rocks", "earth", "dirt", "stone", 
          "stones" }) : "Rough and dirty, as one would expect from a "
        "simple underground area.",
        ({ "wall", "walls", "rough walls", "rough and bare walls", 
          "bare walls", "bare and rough walls" }) : "Carved roughly into "
        "the earth, this passageway has walls that expose "
        "underground rock. Clearly this area was architected with "
        "utility and expediency in mind.",
        ({ "passage", "passageway" }) : "This provides access to areas "
        "below the ground.",
        ({ "room", "here", "area" }) : "Carved roughly into the earth, "
        "this area has walls that expose underground rock.",
      ]));
    SetExits( ([ 
      ]) );
    SetInventory(([
      ]));
}

void init(){
    ::init();
}
