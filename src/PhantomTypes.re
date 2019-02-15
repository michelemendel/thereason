/**
 * Pahntom types
 * https://medium.com/reasontraining/phantom-types-in-reasonml-1a4cfc18d999
 */
module type Animal = {
  /* Define abstract types t, dog, and cat */
  type t('a);
  type dog;
  type cat;

  /* helpers to create a type dog or cat */
  let makeDog: string => t(dog);
  let makeCat: string => t(cat);
  let mate: (t('a), t('a)) => string;
};

module Animal: Animal = {
  /* Phantom type */
  type t('a) = string;
  type dog;
  type cat;

  let makeDog = d => d;
  let makeCat = c => c;
  let mate = (x, y) => {j|🌈 $x and $y mated! 🌈|j};
};

let larry = Animal.makeDog("Larry");
let larsa = Animal.makeDog("Larsa");
let mark = Animal.makeCat("Mark");
let marla = Animal.makeCat("Marla");

/* ✅ Mates 2 dogs and then mates 2 cats*/
Js.log(Animal.mate(larry, larsa));
Js.log(Animal.mate(mark, marla));

/* 🛑Errors with 1 dog 1 cat when uncommented at compile time */
// Js.log(Animal.mate(larry, marla));