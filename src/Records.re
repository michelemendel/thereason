type message = {
  part1: string,
  part2: string,
};

let m1: message = {part1: "hello", part2: "world"};

let {part1} = m1;
// Js.log(m1.toJson());

Js.log(m1);

/*
 type person = {
   age: int,
   name: string,
 };
 type monster = {
   age: int,
   hasTentacles: bool,
 };
 let getAge = entity => entity.age;
 let kraken = {age: 999, hasTentacles: true};
 let john = {age: 30, name: "John Houston"};
 getAge(john);
 getAge(kraken);
 Js.log(kraken);
 */

Js.log("The End");