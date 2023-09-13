var myGlobal = 10;

function func1() {
  //   var ourGlobal = 5;        // Here it will become the local variable ....
  ourGlobal = 5; // Here it becomes Global automatically if we dont use the 'var' keyword ....
}

function func2() {
  var output = "";

  if (typeof myGlobal != "undefined") {
    output += "myGlobal: " + myGlobal;
  }
  if (typeof ourGlobal != "undefined") {
    output += "\nourGlobal: " + ourGlobal;
  }
  console.log(output);
}

func1();
func2();

console.log("Under is the function: ");

var process = 0;
function processed(num) {
  return num / 2 + 5;
}
console.log(process);
process = processed(20);

console.log("Under is the function: ");
var process = 0;
function processed(num) {
  return num / 2 + 5;
}
console.log(process);
process = processed(20);

console.log("Under is the array functioning of a Queue: ");
function myarr(arr, item) {
  arr.push(item);
  return arr.shift();
}

var testarr = [1, 2, 3, 4, 5];

console.log("Before : " + JSON.stringify(testarr));
console.log(myarr(testarr, 6));
console.log("After : " + JSON.stringify(testarr));
