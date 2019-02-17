let avg: (float, float) => float;
let payment: (~principal: float, ~apr: float, ~years: int=?, unit) => float;
let toFixed: (float, ~digits: int) => string;