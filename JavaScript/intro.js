var number = 5;
console.log(number + 10);
console.log("Im a *Double quoted string *.");
console.log("Im a", number, "star rated rated Chief");
var mystr1 = "Hello";
var mystr2 = "Hi";
var mystr3 = "Hey";
console.log(mystr1, " ", mystr2, " ", mystr3);

var firstname = `Hii \\`; // double Backlash will give single backslah as a output
console.log(firstname);

var first = "First line ";
first += "second line";
console.log(first);

firstlength = first.length;
firstletter = first[0];
console.log(firstlength);
console.log("x", firstletter);

function func(a, b, c) {
  var result = "The " + a + " " + b + " " + c;
  return result;
}
console.log(func("Hello", 8, "Hii"));

var arr = ["array", 23];
console.log(arr);

var nestedarr = [
  ["array", 23],
  ["Hii", 1],
];
console.log(nestedarr);

var myarray = ["Firstelement", 20];
myarray.push("secondelement", 14);

console.log(myarray);
console.log("\nUnder are the Deleted elements from the array are : ");

var deletedelement1 = myarray.pop();
console.log(myarray);
var deletedelement2 = myarray.pop();
console.log(deletedelement1); // 14 is deleted from the last index
console.log(deletedelement2); // secondelement is deleted...

console.log(myarray);

console.log("\nUnder is the front side deleted array function");
var ourarray = ["Elements", 15, "Hello", 10];
console.log(ourarray);

var frontdeleted = ourarray.shift(); // shift function removes the front element of the Array
console.log(frontdeleted);
console.log(ourarray);

console.log("\nUnder is the front side Insertion array function");
var usarray = ["Elements", 15, "Hello", 10];
console.log(ourarray);

var frontinsertion = usarray.unshift("AddedElement"); // unshift function adds a  front element to the Array
console.log(frontinsertion);
console.log(usarray);

// FUNCTIONS

console.log("\nFunction :: ");
function add(a, b) {
  console.log(a + b);
}

add(50, 50);

var sum = 0;

function addfive() {
  sum = sum + 5;
}

addfive();

// SWITCH CASE

console.log("\nSwitch Case Test case :: ");
function switchcase(val) {
  var answer = "";
  switch (val) {
    case "a":
      answer = "apple";
      break;
    case "b":
      answer = "bat";
      break;
    case "c":
      answer = "Cat";
      break;
    default:
      answer = "Wrong choice";
      break;
  }
  return answer;
}

console.log(switchcase("c"));
console.log(switchcase(5));

function multipleswitch(value) {
  var answer2 = "";
  switch (value) {
    case 1:
    case 2:
    case 3:
      answer2 = "Low";
      break;
    case 4:
    case 5:
    case 6:
      answer2 = "Mid";
      break;
    case 7:
    case 8:
    case 9:
    case 10:
      answer2 = "high";
      break;
    default:
      answer2 = "Wrong choice";
      break;
  }
  return answer2;
}

console.log(multipleswitch(9));
