let avg = (a: float, b: float): float => {
  (a +. b) /. 2.0;
};

let payment =
    (~principal: float, ~apr: float, ~years: int=30, (): unit): float => {
  let r = apr /. 12.0 /. 100.0;
  let n = float_of_int(years * 12);
  let powerTerm = (1.0 +. r) ** n;
  principal *. (r *. powerTerm) /. (powerTerm -. 1.0);
};

let toFixed = Js.Float.toFixedWithPrecision;