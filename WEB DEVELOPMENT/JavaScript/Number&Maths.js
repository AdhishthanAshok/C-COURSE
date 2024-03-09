const score = 500;
console.log(score);

const balance = new Number(100.124);
console.log(balance);

console.log(balance.toString().length); // Converts the number into string and returns its length
console.log(balance.toFixed(2)); // Give places after the decimals

const otherNumber = 123.3232;
console.log(otherNumber.toPrecision(5)); // It focuces on the precision and mainly focuses before the decimal values.. It try to give the round off number based on the given value

const hundreds = 10000000;
console.log(hundreds.toLocaleString()); //  Use en-IN for indian commas system in the numebers    --> By default it is in Indian system
console.log(hundreds.toLocaleString("en-IN")); //  Use en-IN for indian commas system in the numebers

/*******************************/
/*        MATHS                */

console.log(Math);
console.log(Math.abs(-2)); // Gives Positive Values
console.log(Math.round(4.6)); // Gives Rounded Values
console.log(Math.ceil(4.2)); // Gives Next greatest Value
console.log(Math.floor(4.8)); // Gives Previous Small Value
console.log(Math.min(124, 2, 3, 3, 5, 53));
console.log(Math.max(124, 2, 3, 3, 5, 53));

console.log(Math.random()); // Gives Random number
console.log(Math.floor(Math.random() * 10 + 1)); // Gives Random number in a range 1 - 10

const min = 10;
const max = 20;

console.log(Math.floor(Math.random() * (max - min + 1) + min));
