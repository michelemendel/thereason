type leftOrRight =
  | Left(int)
  | Right(int);

let i = Left(9);

Js.log(i);

/* Extract v from i */
let Left(v) | Right(v) = i;

Js.log(v);

/**
 * https://hackernoon.com/get-reason-able-with-reasonml-part-2-65d3ab851570
 */

type item =
  | Note(string)
  | ToDo(string, bool);

let myToDo = ToDo("Write things", false);
let myNote = Note("Remind me");

// Js.log(myToDo);
// Js.log(myNote);

let show = anItem => {
  switch (anItem) {
  | Note(text) => "Note: " ++ text
  | ToDo(text, done_) =>
    "Todo: " ++ text ++ ", done?: " ++ string_of_bool(done_)
  };
};

Js.log(show(myToDo));
Js.log(show(myNote));

/**
 *
 */

type request =
  | Loading
  | Error
  | Success(string);

let state = Loading;

let ui =
  switch (state) {
  | Loading => "Loading..."
  | Error => "Somethin went wrong"
  | Success(name) => "Your name is " ++ name
  };

Js.log(ui);