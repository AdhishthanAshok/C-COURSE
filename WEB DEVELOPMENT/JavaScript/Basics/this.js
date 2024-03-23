const user = {
  username: "Adi",
  price: 999,

  welcomeMessage: function () {
    console.log(`${this.username} , welcome to website`);
    console.log(this); // refer to the current context
  },
};

user.welcomeMessage();
user.username = "Ashok";
user.welcomeMessage();

console.log(
  this
); /* Here Current COntext is Node Environment .. So it will give Empty object... but if we execute this is Brower...
                         it will give us details about the window ... Beacuse Window is the Global Object of Browsers*/

// const chai1 = function () {
//   let username = "hitesh";
//   console.log(this); // Here This will give details about the function.
//   console.log(this.username); // Here This will give undefined , we can only access the values insede the objects only
// };
// chai1();
/******** ARROW FUNCTIONS **********/

const chai = () => {
  let username = "adi";
  console.log(this); // Here This will give '{}'  empty parenthesis value
};
chai(); // Print '{}'

// const addTwo = (num1, num2) => {    // If i used curly Brackets ,, then writing return statement is cumpulsory
//     return num1 + num2
// }

// const addTwo = (num1, num2) =>  num1 + num2     // This method is called implicit Function .. no need to write return

// const addTwo = (num1, num2) => ( num1 + num2 )     // when we use round brackets , writing return keyword is not compulsory

const addTwo = (num1, num2) => ({ username: "hitesh" }); // Here we cannot declare object without curly brackets , so we have to wrap it up in rounded brackets

console.log(addTwo(3, 4));
