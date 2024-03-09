// Immediately Invoked Function Expressions (IIFE)

// It is used to Conect the program to DB immediately after executing

(function chai() {
  // With Name Declaration of IIFE
  console.log("DB CONNECTED");
})();
// IIFE means --> Sometimes Global Scope se pollution se problem hoti h , to jo bhi global scope ke variables ya pollution h usko hatane ke liye humne IIFE ka use kiya

((name) => {
  // Without Name declaration of IIFE
  console.log(`DB CONNECTED TWO ${name}`);
})("Adi");

// Two IIFE Functions cannot work unless first Function ended with a semicolon
 