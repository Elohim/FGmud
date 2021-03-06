#include <lib.h>
#include <position.h>
#include "../areadefs.h"

inherit TMPL;

void create() {
    ::create();

    SetAmbientLight(0);
    SetShort("underground passageway");
    SetLong(
      "This is a dark underground passageway. The walls are rough "
      "and bare. The passageway runs southeast from here. There "
      "are rooms south, northeast, and northwest."
    );
    SetItems(([
        ({ "passage", "passageway" }) : "This provides access to "
        "areas below the ground.",
        ({ "ground", "rock", "rocks", "earth", "dirt", "stone", 
          "stones" }) : "Rough and dirty, as one would expect from a "
        "simple underground area.",
        ({ "wall", "walls", "rough walls", "rough and bare walls", 
          "bare walls", "bare and rough walls" }) : "Carved roughly into "
        "the earth, this passageway has walls that expose "
        "underground rock. Clearly this area was architected with "
        "utility and expediency in mind.",
      ]));
    SetExits( ([
        "south" : ROOM+ "dining1",
        "northeast" : ROOM+ "guardroom3",
        "southeast" : ROOM+ "cavepass9",
        "northwest" : ROOM+ "guardroom4.c",
      ]) );

    SetInventory(([
      ]));
}

void init(){
    ::init();
}
