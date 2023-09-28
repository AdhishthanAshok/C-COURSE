let sports = ["cricket", "football", "baseball"];
for (let i = 0; i < sports.length; i++) {
  console.log(sports[i]);
}

sports.unshift("Golf"); // unshift method add the element in starting
console.log(sports);

sports.shift(); // shift method deletes the first element from the array
console.log(sports);

sports.sort();
console.log(sports);

sports.sort().reverse();
console.log(sports);

// 2D Arrays

let fruits = ["Apples", "Banana", "Oranges"];
let vegetables = ["Carrots", "onions", "potato"];
let meats = ["egg", "chicken", "fish"];

let grocery = [fruits, vegetables, meats];
console.log(grocery[0][0]);
console.log(grocery[0][2]);
console.log(grocery[1][1]);
console.log(grocery[1][2]);

for (let list of grocery) {
  console.log(list);
}
