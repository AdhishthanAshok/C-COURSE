const EventEmitter = require("events");

class MyEmitter extends EventEmitter {}

const myEmitter = new MyEmitter();
myEmitter.on("Diwali", () => {
  console.log("Soan Papdi distribution");
  setTimeout(() => {
    console.log("Happy Diwali...");
  }, 3000);
});
myEmitter.emit("Diwali");
