// Generated by BUCKLESCRIPT VERSION 4.0.18, PLEASE EDIT WITH CARE
'use strict';


function makeDog(d) {
  return d;
}

function makeCat(c) {
  return c;
}

function mate(x, y) {
  return "🌈 " + (String(x) + (" and " + (String(y) + " mated! 🌈")));
}

var Animal = /* module */[
  /* makeDog */makeDog,
  /* makeCat */makeCat,
  /* mate */mate
];

var larry = "Larry";

var larsa = "Larsa";

var mark = "Mark";

var marla = "Marla";

console.log(mate(larry, larsa));

console.log(mate(mark, marla));

exports.Animal = Animal;
exports.larry = larry;
exports.larsa = larsa;
exports.mark = mark;
exports.marla = marla;
/*  Not a pure module */
