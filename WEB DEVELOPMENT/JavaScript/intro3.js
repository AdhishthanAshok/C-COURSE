var myobj = {
  Adi: "011",
  One: "001",
  Two: "002",
};

function checkobj(checkprop) {
  if (myobj.hasOwnProperty(checkprop)) {
    return console.log(
      "The Item iterated with " + checkprop + " is " + myobj[checkprop]
    );
  } else {
    return "Hello";
  }
}

console.log(checkobj("Adi"));

const s = [2, 5, 7];

// s = [5,2,7,]     ...... This will not work as const is used for declaration

// but to change the values...we can change them one by one..... shows as follow :

s[0] = 5;
s[1] = 2;
s[2] = 7;

console.log(s);
