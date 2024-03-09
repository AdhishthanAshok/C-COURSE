// The Scope in the console and the scope in the Node Environment is completely different from one another

console.log(addone(5));

function addone(num) {
  return num + 1;
}

// addTwo(5);           // THis will not execute we have to delare it after the function
const addTwo = function (num) {
  return num + 2;
};
addTwo(5);
